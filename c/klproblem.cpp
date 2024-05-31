#include <iostream>
#include <fstream>
#include <vector>
#include <mpfr.h>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

void mpfr_setup() {
    mpfr_set_default_prec(256); // 計算精度を設定
}

void mpfr_clear_vars(std::vector<mpfr_t>& vars) {
    for (auto& var : vars) {
        mpfr_clear(var);
    }
}

void V_func(mpfr_t result, const mpfr_t reT) {
    // 定数の定義
    mpfr_t A, B, a, b, Delta_w0;
    mpfr_init_set_str(A, "1", 10, MPFR_RNDN);
    mpfr_init_set_str(B, "-1.03", 10, MPFR_RNDN);
    mpfr_init_set_d(a, 2 * M_PI / 100, MPFR_RNDN);
    mpfr_init_set_d(b, 2 * M_PI / 99, MPFR_RNDN);
    mpfr_init_set_str(Delta_w0, "0", 10, MPFR_RNDN);

    // 中間変数の定義
    mpfr_t term1, term2, term3, term4, term5, term6, term7, term8, term9, term10, term11, term12, term13, tmp1, tmp2, tmp3;
    mpfr_inits(term1, term2, term3, term4, term5, term6, term7, term8, term9, term10, term11, term12, term13, tmp1, tmp2, tmp3, (mpfr_ptr) 0);

    // term1 = (a * A * B * exp(-(a + b) * reT)) / (2 * reT^2)
    mpfr_add(tmp1, a, b, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, reT, MPFR_RNDN);
    mpfr_neg(tmp1, tmp1, MPFR_RNDN);
    mpfr_exp(tmp1, tmp1, MPFR_RNDN);
    mpfr_mul(tmp2, a, A, MPFR_RNDN);
    mpfr_mul(tmp2, tmp2, B, MPFR_RNDN);
    mpfr_mul(tmp2, tmp2, tmp1, MPFR_RNDN);
    mpfr_mul(tmp3, reT, reT, MPFR_RNDN);
    mpfr_mul_ui(tmp3, tmp3, 2, MPFR_RNDN);
    mpfr_div(term1, tmp2, tmp3, MPFR_RNDN);

    // term2 = (A * b * B * exp(-(a + b) * reT)) / (2 * reT^2)
    mpfr_mul(tmp1, A, b, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, B, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, tmp1, MPFR_RNDN);
    mpfr_div(term2, tmp1, tmp3, MPFR_RNDN);

    // term3 = (b * B^2 * exp(2 * a * reT - 2 * (a + b) * reT)) / (2 * reT^2)
    mpfr_mul_ui(tmp1, a, 2, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, reT, MPFR_RNDN);
    mpfr_sub(tmp1, tmp1, tmp3, MPFR_RNDN);
    mpfr_exp(tmp1, tmp1, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, b, MPFR_RNDN);
    mpfr_mul(tmp2, B, B, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, tmp2, MPFR_RNDN);
    mpfr_div(term3, tmp1, tmp3, MPFR_RNDN);

    // term4 = (a * A^2 * exp(2 * b * reT - 2 * (a + b) * reT)) / (2 * reT^2)
    mpfr_mul_ui(tmp1, b, 2, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, reT, MPFR_RNDN);
    mpfr_sub(tmp1, tmp1, tmp3, MPFR_RNDN);
    mpfr_exp(tmp1, tmp1, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, a, MPFR_RNDN);
    mpfr_mul(tmp2, A, A, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, tmp2, MPFR_RNDN);
    mpfr_div(term4, tmp1, tmp3, MPFR_RNDN);

    // term5 = (A * b * ((a * A) / (b * B))^(a / (-a + b)) * B * exp(a * reT - (a + b) * reT)) / (2 * reT^2)
    mpfr_mul(tmp1, a, A, MPFR_RNDN);
    mpfr_div(tmp1, tmp1, tmp2, MPFR_RNDN);
    mpfr_pow(tmp1, tmp1, tmp1, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, A, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, b, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, B, MPFR_RNDN);
    mpfr_div(term5, tmp1, tmp3, MPFR_RNDN);

    // term6 = -(b * ((a * A) / (b * B))^(b / (-a + b)) * B^2 * exp(a * reT - (a + b) * reT)) / (2 * reT^2)
    mpfr_pow(tmp1, tmp1, tmp2, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, b, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, B, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, tmp2, MPFR_RNDN);
    mpfr_div(term6, tmp1, tmp3, MPFR_RNDN);

    // term7 = (a * A^2 * ((a * A) / (b * B))^(a / (-a + b)) * exp(b * reT - (a + b) * reT)) / (2 * reT^2)
    mpfr_pow(tmp1, tmp1, tmp1, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, A, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, b, MPFR_RNDN);
    mpfr_div(term7, tmp1, tmp3, MPFR_RNDN);

    // term8 = -(a * A * ((a * A) / (b * B))^(b / (-a + b)) * B * exp(b * reT - (a + b) * reT)) / (2 * reT^2)
    mpfr_pow(tmp1, tmp1, tmp2, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, a, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, A, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, B, MPFR_RNDN);
    mpfr_div(term8, tmp1, tmp3, MPFR_RNDN);

    // term9 = (a * A * b * B * exp(-(a + b) * reT)) / (3 * reT)
    mpfr_add(tmp1, a, b, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, reT, MPFR_RNDN);
    mpfr_neg(tmp1, tmp1, MPFR_RNDN);
    mpfr_exp(tmp1, tmp1, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, a, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, A, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, b, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, B, MPFR_RNDN);
    mpfr_div_ui(term9, tmp1, 3, MPFR_RNDN);

    // term10 = (b^2 * B^2 * exp(2 * a * reT - 2 * (a + b) * reT)) / (6 * reT)
    mpfr_mul_ui(tmp1, a, 2, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, reT, MPFR_RNDN);
    mpfr_sub(tmp1, tmp1, tmp3, MPFR_RNDN);
    mpfr_exp(tmp1, tmp1, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, b, MPFR_RNDN);
    mpfr_mul(tmp2, B, B, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, tmp2, MPFR_RNDN);
    mpfr_div_ui(term10, tmp1, 6, MPFR_RNDN);

    // term11 = (a^2 * A^2 * exp(2 * b * reT - 2 * (a + b) * reT)) / (6 * reT)
    mpfr_mul_ui(tmp1, b, 2, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, reT, MPFR_RNDN);
    mpfr_sub(tmp1, tmp1, tmp3, MPFR_RNDN);
    mpfr_exp(tmp1, tmp1, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, a, MPFR_RNDN);
    mpfr_mul(tmp2, A, A, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, tmp2, MPFR_RNDN);
    mpfr_div_ui(term11, tmp1, 6, MPFR_RNDN);

    // term12 = -(a * A^2 * b * B * exp(-(a + b) * reT)) / (3 * reT)
    mpfr_mul(tmp1, tmp1, A, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, b, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, B, MPFR_RNDN);
    mpfr_div_ui(term12, tmp1, 3, MPFR_RNDN);

    // term13 = -(a * A * b^2 * B * exp(-(a + b) * reT)) / (3 * reT)
    mpfr_mul(tmp1, tmp1, a, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, b, MPFR_RNDN);
    mpfr_mul(tmp1, tmp1, B, MPFR_RNDN);
    mpfr_div_ui(term13, tmp1, 3, MPFR_RNDN);

    // 結果を合計
    mpfr_add(result, term1, term2, MPFR_RNDN);
    mpfr_add(result, result, term3, MPFR_RNDN);
    mpfr_add(result, result, term4, MPFR_RNDN);
    mpfr_add(result, result, term5, MPFR_RNDN);
    mpfr_add(result, result, term6, MPFR_RNDN);
    mpfr_add(result, result, term7, MPFR_RNDN);
    mpfr_add(result, result, term8, MPFR_RNDN);
    mpfr_add(result, result, term9, MPFR_RNDN);
    mpfr_add(result, result, term10, MPFR_RNDN);
    mpfr_add(result, result, term11, MPFR_RNDN);
    mpfr_add(result, result, term12, MPFR_RNDN);
    mpfr_add(result, result, term13, MPFR_RNDN);

    // クリア
    mpfr_clears(term1, term2, term3, term4, term5, term6, term7, term8, term9, term10, term11, term12, term13, tmp1, tmp2, tmp3, (mpfr_ptr) 0);
    mpfr_clears(A, B, a, b, Delta_w0, (mpfr_ptr) 0);
}

void V_prime(mpfr_t result, const mpfr_t reT) {
    mpfr_t h, reT_h, reT_mh, V_reT_h, V_reT_mh, tmp;
    mpfr_init_set_d(h, 1e-5, MPFR_RNDN);
    mpfr_inits(reT_h, reT_mh, V_reT_h, V_reT_mh, tmp, (mpfr_ptr) 0);

    mpfr_add(reT_h, reT, h, MPFR_RNDN);
    mpfr_sub(reT_mh, reT, h, MPFR_RNDN);

    V_func(V_reT_h, reT_h);
    V_func(V_reT_mh, reT_mh);

    mpfr_sub(tmp, V_reT_h, V_reT_mh, MPFR_RNDN);
    mpfr_mul_ui(h, h, 2, MPFR_RNDN);
    mpfr_div(result, tmp, h, MPFR_RNDN);

    mpfr_clears(h, reT_h, reT_mh, V_reT_h, V_reT_mh, tmp, (mpfr_ptr) 0);
}

void newton_method(mpfr_t result, mpfr_t init_reT, mpfr_t tol, int max_iter) {
    mpfr_t reT, reT_new, V_reT, V_prime_reT, tmp;
    mpfr_init_set(reT, init_reT, MPFR_RNDN);
    mpfr_inits(reT_new, V_reT, V_prime_reT, tmp, (mpfr_ptr) 0);

    for (int i = 0; i < max_iter; ++i) {
        V_func(V_reT, reT);
        V_prime(V_prime_reT, reT);

        mpfr_div(tmp, V_reT, V_prime_reT, MPFR_RNDN);
        mpfr_sub(reT_new, reT, tmp, MPFR_RNDN);

        mpfr_sub(tmp, reT_new, reT, MPFR_RNDN);
        mpfr_abs(tmp, tmp, MPFR_RNDN);
        if (mpfr_cmp(tmp, tol) < 0) {
            mpfr_set(result, reT_new, MPFR_RNDN);
            break;
        }
        mpfr_set(reT, reT_new, MPFR_RNDN);
    }

    mpfr_clears(reT, reT_new, V_reT, V_prime_reT, tmp, (mpfr_ptr) 0);
}

int main() {
    mpfr_setup();

    mpfr_t initial_guess, min_ReT, tol;
    mpfr_inits(initial_guess, min_ReT, tol, (mpfr_ptr) 0);
    mpfr_set_str(initial_guess, "60", 10, MPFR_RNDN);
    mpfr_set_str(tol, "1e-10", 10, MPFR_RNDN);

    newton_method(min_ReT, initial_guess, tol, 1000);

    std::cout << "Minimum point: ReT = ";
    mpfr_out_str(stdout, 10, 0, min_ReT, MPFR_RNDN);
    std::cout << std::endl;

    // CSVファイルに保存
    std::ofstream file("V_values.csv");
    file << "ReT,V\n";

    mpfr_t start, end, step, reT, V_val;
    mpfr_inits(start, end, step, reT, V_val, (mpfr_ptr) 0);

    mpfr_sub_ui(start, min_ReT, 1, MPFR_RNDN);
    mpfr_add_ui(end, min_ReT, 1, MPFR_RNDN);
    int num_points = 1000;
    mpfr_sub(step, end, start, MPFR_RNDN);
    mpfr_div_ui(step, step, num_points - 1, MPFR_RNDN);

    for (int i = 0; i < num_points; ++i) {
        mpfr_mul_ui(reT, step, i, MPFR_RNDN);
        mpfr_add(reT, reT, start, MPFR_RNDN);
        V_func(V_val, reT);
        file << mpfr_get_d(reT, MPFR_RNDN) << "," << mpfr_get_d(V_val, MPFR_RNDN) << "\n";
    }

    file.close();

    mpfr_clears(initial_guess, min_ReT, tol, start, end, step, reT, V_val, (mpfr_ptr) 0);

    return 0;
}
