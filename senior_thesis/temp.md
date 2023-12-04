---
layout: default
title: Senior thesis
---

# Detail of the computation

We feel frustrated with the challenging computations involved in studying SUSY. I will document the process of such challenging computations.

## Derivation of the  zero-mode equations

10D SYM action in $\mathcal{N}=1$ is given by
$$
    \begin{equation}
        S
        =
        \int\text{d}^{10}X
        \sqrt{-G}
        \left[
            \int\text{d}^{4}\theta\ 
            \mathcal{K}
            +
            \left\{
                \int\text{d}^{2}\theta
                \left(
                    \frac{1}{4g^2}
                    \text{Tr}\ \mathcal{W}^{\alpha}\mathcal{W}_{\alpha}
                    +
                    \mathcal{W}
                \right)
                +
                \text{h.c.}
            \right\}
        \right]
    \end{equation}
$$
where
$$
    \begin{align}
        \mathcal{K}
        &=
        \frac{2}{g^2}
        h^{\bar{i}j}
        \text{Tr}
        \left[
            \left\{
            (
                \sqrt{2}\bar{\partial_{\bar{i}}}
                +
                \bar{\phi}_{\bar{i}}
            )
            e^{-V}
            \right\}
            \left\{
            (
                \sqrt{2}\partial_{j}
                +
                \phi_{j}
            )
            e^{V}
            \right\}
        \right.
        \nonumber
        \\
        &\hspace{100pt}
        \left.
            +
            (
                \bar{\partial}_{\bar{i}}e^{-V}
            )
            (
                \partial_{j}e^{V}
            )
        \right]
        +
        \mathcal{K}_\text{WZW}
        ,
        \\
        \mathcal{W}
        &=
        \frac{1}{g^2}
        \varepsilon^{\text{ijk}}
        e^{\ i}_{\text{i}}e^{\ j}_{\text{j}}e^{\ k}_{\text{k}}
        \text{Tr}
        \left[
            \sqrt{2}\phi_{i}
            \left(
                \partial_{j}\phi_{k}
                -
                \frac{1}{3\sqrt{2}}[\phi_{j},\phi_{k}]
            \right)
        \right]
        .
    \end{align}
$$
The term $\mathcal{K}_\text{WZW}$ is so called Wess-Zumino-Witten term which vanishes when we take Wess-Zumino gauge
$$
    \begin{align}
        V
        &=
        -
        \theta\sigma^{\mu}\bar{\theta}A_{\mu}
        +
        i\overline{\theta\theta}\theta\lambda_{0}
        -
        i\theta\theta\overline{\theta\lambda}_{0}
        +
        \frac{1}{2}\theta\theta\overline{\theta\theta}D
        ,
        \\
        \phi_{i}
        &=
        \frac{1}{\sqrt{2}}
        A_i
        +
        \sqrt{2}\theta\lambda_{i}
        +
        \theta\theta F_{i}.
    \end{align}
$$

### SUSY condition

By carrying out the derivative with respect to the $F_{i}$ and $D_{i}$, we can obtain the on-shell relation of the auxiliary fields. First, let us focus on the Kähler potential. The term inside the trace become
$$
    \begin{align}
        &\hspace{10pt}
        \left\{
            (
                \sqrt{2}\bar{\partial_{\bar{i}}}
                +
                \bar{\phi}_{\bar{i}}
            )
            e^{-V}
        \right\}
        \left\{
            (
                \sqrt{2}\partial_{j}
                +
                \phi_{j}
            )
            e^{V}
            \right\}
            +
            (
                \bar{\partial}_{\bar{i}}e^{-V}
            )
            (
                \partial_{j}e^{V}
            )
        \nonumber
        \\
        &=
        \left\{
            (
                \sqrt{2}\bar{\partial_{\bar{i}}}
                +
                \bar{\phi}_{\bar{i}}
            )
            \left(
                1-V+\frac{1}{2}V^2
            \right)
        \right\}
        \left\{
            (
                \sqrt{2}\partial_{j}
                +
                \phi_{j}
            )
            \left(
                1+V+\frac{1}{2}V^2
            \right)
        \right\}
        \nonumber
        \\
        &\hspace{50pt}
        +
        \bar{\partial}_{\bar{i}}
            \left(
                1-V+\frac{1}{2}V^2
            \right)
        \partial_{j}
            \left(
                1+V+\frac{1}{2}V^2
            \right)
        \nonumber
        \\
        &=
        \bar{\phi}_{\bar{i}}\phi_{j}
        -
        \sqrt{2}\bar{\phi}_{\bar{i}}(\partial_{j}V)
        +
        \bar{\phi}_{\bar{i}}\phi_{j}V
        -
        \frac{1}{\sqrt{2}}\bar{\phi}_{\bar{i}}(\partial_{j}V)V
        -
        \frac{1}{\sqrt{2}}\bar{\phi}_{\bar{i}}V(\partial_{j}V)+\frac{1}{2}\bar{\phi}_{\bar{i}}\phi_{j}V^2
        \nonumber
        \\
        &\quad
        -
        \sqrt{2}(\bar{\partial}_{\bar{i}}V)\phi_{j}
        +
        (\bar{\partial}_{\bar{i}}V)(\partial_{j}V)
        -
        \sqrt{2}(\bar{\partial}_{\bar{i}}V)\phi_{j}V
        -
        \bar{\phi}_{\bar{i}}V\phi_{j}
        +
        \sqrt{2}\bar{\phi}_{\bar{i}}
        V
        \partial_{j}V
        \nonumber
        \\
        &\quad
        -
        \bar{\phi}_{\bar{i}}
        V
        \phi_{j}
        V
        +
        \frac{1}{\sqrt{2}}
        (\bar{\partial}_{\bar{i}}V)V\phi_{j}
        +
        \frac{1}{\sqrt{2}}V(\bar{\partial}_{\bar{i}}V)\phi_{j}
        +
        \frac{1}{2}\bar{\phi}_{\bar{i}}V^2\phi_{j}
        .
    \end{align}
$$
This is the only term that contains the auxiliary $D$. Note that the action $S$ contains only the highest term $\theta^4$ from the Kähler potential $\mathcal{K}$. Thus when we take the derivative to the $D$, the term which has only one $V$ will remain[^1]. After integrating by parts, for removing the factor the derivative of vector superfield, for instance, the term $\bar{\phi}_{\bar{i}}\partial_{j}V$, we find
$$
    \begin{align}
        \frac{\delta \mathcal{S}}{\delta D}
        &=        
        \sqrt{-G}      
        \frac{2}{g^2}
        h^{\bar{i}j}
        \left[
            \partial_{j}\bar{A}_{\bar{i}}
            +
            \frac{1}{2}\bar{A}_{\bar{i}}A_{j}
            +
            \bar{\partial}_{\bar{i}}A_{j}
            -
            \frac{1}{2}A_{j}\bar{A}_{\bar{i}}
        \right]
        \nonumber
        \\
        &\hspace{20pt}+
        \frac{1}{4g^2}
        \frac{\delta}{\delta D}
        \int\text{d}^{10}X\sqrt{-G}
        \left[
            \int\text{d}^{2}\theta\ \text{Tr}\ \mathcal{W}^{\alpha}\mathcal{W}_{\alpha}
            +  
            \int\text{d}^{2}\bar{\theta}\ \text{Tr}\ \overline{\mathcal{W}_{\dot{\alpha}}\mathcal{W}^{\dot{\alpha}}}
        \right]
        .
    \end{align}
$$
Note that we should be careful about the derivatives of the term like $\bar{\phi}_{\bar{i}}V\phi_{j}$. We derivate with respect to the auxiliary $D$, but it actually has the indices of the gauge group, $D_{AB}$. Therefore we obtain
$$
    \begin{align}    
        \left.
        \frac{\delta}{\delta D_{AB}}
        \text{Tr}
        \left[\bar{\phi}_{\bar{i}}V\phi_{j}\right]
        \right|_{\theta^4}
        &=
        \frac{1}{2}
        \frac{\delta}{\delta D_{AB}} 
        (\bar{A}_{\bar{i}})_{CD}    
        (D)_{DE} 
        (A_{j})_{EC}
        \nonumber
        \\
        &=
        \frac{1}{2}
        (\bar{A}_{\bar{i}})_{CA}    
        (A_{j})_{BC}
        =
        \frac{1}{2}
        (A_{j}\bar{A}_{\bar{i}})_{AB}
        .
    \end{align}
$$
The term including $\text{Tr}\ \mathcal{W}^{\alpha}\mathcal{W}_{\alpha}$ and its hermitian conjugate is well-known[^2]. That is
$$
    \begin{equation}
        \text{Tr}\ 
        \mathcal{W}^{\alpha}
        \mathcal{W}_{\alpha}
        =
        2
        \text{Tr}
        \left[
            D^2
            +
            \cdots
        \right]
    \end{equation}
$$
and the variation of the action is
$$
    \begin{align}
        \frac{\delta S}{\delta D}
        =
        \sqrt{-G}\frac{2}{g^2}
        \left[
            D
            +
            h^{\bar{i}j}
            \left(
                \partial_{j}\bar{A}_{\bar{i}}
                +
                \bar{\partial}_{\bar{i}}A_{j}   
                +
                \frac{1}{2}[\bar{A}_{\bar{i}},A_{j}]
            \right)
        \right]
        =
        0
        .
    \end{align}
$$
Finally we get
$$
    \begin{equation}
        D
        =
        -h^{\bar{i}j}
        \left(
            \partial_{j}\bar{A}_{\bar{i}}
            +
            \bar{\partial}_{\bar{i}}A_{j}   
            +
            \frac{1}{2}[\bar{A}_{\bar{i}},A_{j}]
        \right)
    \end{equation}
$$
for the equation of motion with respect to the auxiliary $D$. Let us move on to the computation for the auxiliary $F_i$. $F_{i}$ is included by the superfield $\phi_{i}$ that appears only in Kähler potential $\mathcal{K}$ and super potential $\mathcal{W}$, not in field strength $\mathcal{W}^{\alpha}$. The highest component containing the auxiliary $F_{i}$ comes from the term $\bar{\phi}_{\bar{i}}\phi_{j}$ in Kähler potential. Thus the Kähler potential including $F$ is
$$
    \begin{equation}
        \mathcal{K}
        \rightarrow
        \frac{2}{g^2} h^{\bar{i}j}
        \text{Tr}
        \left[
            \bar{F}_{\bar{i}}F_{j}
        \right]
        .
    \end{equation}
$$
From superpotential, we can get the term related auxiliary $F$ as
$$
    \begin{align}
        \mathcal{W}
        &=
        \frac{1}{g^2}
        \varepsilon^{\text{ijk}}
        e^{\ i}_{\text{i}}e^{\ j}_{\text{j}}e^{\ k}_{\text{k}}
        \text{Tr}
        \left[
            \sqrt{2}\phi_{i}
            \left(
                \partial_{j}\phi_{k}
                -
                \frac{1}{3\sqrt{2}}[\phi_{j},\phi_{k}]
            \right)
        \right]
        \nonumber
        \\
        &\rightarrow
        \frac{1}{g^2}
        \varepsilon^{\text{ijk}}
        e^{\ i}_{\text{i}}e^{\ j}_{\text{j}}e^{\ k}_{\text{k}}
        \text{Tr}
        \left[
            \vphantom{\frac{1}{6}}
            A_{i}\partial_{j}F_{k}
            +
            F_{i}\partial_{j}A_{k}
        \right.
        \nonumber
        \\
        &\hspace{50pt}
        \left.
            -
            \frac{1}{6}
            \left(
                F_{i}[A_{j},A_{k}]
                +
                A_{i}[F_{j},A_{k}]
                +
                A_{i}[A_{j},F_{k}]
            \right)
        \right]
        ,
        \\
        \overline{\mathcal{W}}
        &\rightarrow
        \frac{1}{g^2}
        \varepsilon^{\bar{\text{i}}\bar{\text{j}}\bar{\text{k}}}
        e^{\ \bar{i}}_{\bar{\text{i}}}e^{\ \bar{j}}_{\bar{\text{j}}}e^{\ \bar{k}}_{\bar{\text{k}}}
        \text{Tr}
        \left[
            \vphantom{\frac{1}{6}}
            \bar{A}_{\bar{i}}\bar{\partial}_{\bar{j}}\bar{F}_{\bar{k}}
            +
            \bar{F}_{\bar{i}}\bar{\partial}_{\bar{j}}\bar{F}_{\bar{k}}
        \right.
        \nonumber
        \\
        &\hspace{50pt}
        \left.
            -
            \frac{1}{6}
            \left(
                \bar{F}_{\bar{i}}[\bar{A}_{\bar{j}},\bar{A}_{\bar{k}}]
                +
                \bar{A}_{\bar{i}}[\bar{F}_{\bar{j}},\bar{A}_{\bar{k}}]
                +
                \bar{A}_{\bar{i}}[\bar{A}_{\bar{j}},\bar{F}_{\bar{k}}]
            \right)
        \right]
        .
    \end{align}
$$
By derivating to the $F_{i}$, the term in the action become separately
$$
    \begin{align}
        \frac{\delta}{\delta F_{i}}
        \int\text{d}^{10}X\sqrt{-G}\int\text{d}^{4}\theta\ \mathcal{K}
        &=
        \sqrt{-G}\frac{2}{g^2}
        \frac{\delta}{\delta F_{i}}
        h^{\bar{a}b}\text{Tr}\ 
        \bar{F}_{\bar{a}}F_{b}    
        \nonumber    
        \\
        &=
        \sqrt{-G}\frac{2}{g^2}
        h^{\bar{j}i}
        \text{Tr}\ \bar{F}_{\bar{j}}
        ,
        \\
        \frac{\delta}{\delta F_{i}}
        \int\text{d}^{10}X\sqrt{-G}\int\text{d}^{2}\theta\ \mathcal{W}
        &=
        \sqrt{-G}\frac{1}{g^2}
        \varepsilon^{\text{ijk}}
        e^{\ i}_{\text{i}}e^{\ j}_{\text{j}}e^{\ k}_{\text{k}}        
        \frac{\delta}{\delta F_{i}}
        \text{Tr}\ 
        \left[
            \vphantom{\frac{1}{6}}
            A_{i}\partial_{j}F_{k}
            +
            F_{i}\partial_{j}A_{k}
        \right.
        \nonumber
        \\
        &\hspace{30pt}
        \left.
            -
            \frac{1}{6}
            \left(
                F_{i}[A_{j},A_{k}]
                +
                A_{i}[F_{j},A_{k}]
                +
                A_{i}[A_{j},F_{k}]
            \right)
        \right]
        \nonumber
        \\
        &=
        \sqrt{-G}\frac{1}{g^2}
        \varepsilon^{\text{ijk}}
        e^{\ i}_{\text{i}}e^{\ j}_{\text{j}}e^{\ k}_{\text{k}} 
        \text{Tr}\ 
        \left[
            2\partial_{j}A_{k}
            -
            \frac{1}{2}[A_{j},A_{k}]
        \right]
        .
    \end{align}
$$
Note that we have interchanged the dummy indices several times after derivating. At last, the equation of motion with respect to the $F_{i}$
$$
    \begin{equation}
        h^{\bar{j}i}\bar{F}_{\bar{j}}
        +        
        \varepsilon^{\text{ijk}}
        e^{\ i}_{\text{i}}e^{\ j}_{\text{j}}e^{\ k}_{\text{k}} 
        \left[
            \partial_{j}A_{k}
            -
            \frac{1}{4}[A_{j},A_{k}]     
        \right]
        =
        0   
    \end{equation}
$$
or equivalently
$$
    \begin{equation}
        \bar{F}_{\bar{i}}
        =
        -
        h_{j\bar{i}}
        \varepsilon^{\text{jkl}}
        e^{\ j}_{\text{j}}e^{\ k}_{\text{k}}e^{\ l}_{\text{l}}
        \left[
            \partial_{k}A_{l}
            -
            \frac{1}{4}[A_{k},A_{l}]     
        \right]
    \end{equation}
$$
holds.

### Lagrangian with the field fluctuations

We set VEV's for
$$
    \begin{equation}
        \braket{V}
        =
        0
        ,\quad
        \braket{\phi_{i}}
        \neq 
        0
        .
    \end{equation}
$$
Thus the Kähler potential satisfies
$$
    \begin{align}
        \mathcal{K}
        &=
        \frac{2}{g^2}h^{\bar{i}j}
        \text{Tr}\left[\vphantom{\frac{1}{2}}\right.
            \underline{\bar{\phi}_{\bar{i}}\phi_{j}}
            +
            \braket{\bar{\phi}_{\bar{i}}}\phi_{j}
            +        
            \bar{\phi}_{\bar{i}}\braket{\phi_{j}}
            +
            \braket{\bar{\phi}_{\bar{i}}}\braket{\phi_{j}}
            -
            \underline{\sqrt{2}\bar{\phi}_{\bar{i}}(\partial_{j}V)}
            -
            \underline{\sqrt{2}\braket{\bar{\phi}_{\bar{i}}}(\partial_{j}V)}
        \nonumber
        \\
        &\qquad
            +
            \underline{\bar{\phi}_{\bar{i}}\phi_{j}V}
            +
            \underline{\braket{\bar{\phi}_{\bar{i}}}\phi_{j}V}
            +
            \underline{\bar{\phi}_{\bar{i}}\braket{\phi_{j}}V}
            +
            \braket{\bar{\phi}_{\bar{i}}}\braket{\phi_{j}}V
        \nonumber
        \\
        &\qquad
            -
            \underline{\frac{1}{\sqrt{2}}\bar{\phi}_{\bar{i}}(\partial_{j}V)V}
            -
            \underline{\frac{1}{\sqrt{2}}\braket{\bar{\phi}_{\bar{i}}}(\partial_{j}V)V}
            -
            \underline{\frac{1}{\sqrt{2}}\bar{\phi}_{\bar{i}}V(\partial_{j}V)}
            -
            \underline{\frac{1}{\sqrt{2}}\braket{\bar{\phi}_{\bar{i}}}V(\partial_{j}V)}
        \nonumber
        \\
        &\qquad
            +
            \underline{\frac{1}{2}\bar{\phi}_{\bar{i}}\phi_{j}V^2}
            +
            \underline{\frac{1}{2}\braket{\bar{\phi}_{\bar{i}}}\phi_{j}V^2}
            +
            \underline{\frac{1}{2}\bar{\phi}_{\bar{i}}\braket{\phi_{j}}V^2}
            +
            \underline{\frac{1}{2}\braket{\bar{\phi}_{\bar{i}}}\braket{\phi_{j}}V^2}
        \nonumber
        \\
        &\qquad
            -
            \underline{\sqrt{2}(\bar{\partial}_{\bar{i}}V)\phi_{j}}
            -
            \underline{\sqrt{2}(\bar{\partial}_{\bar{i}}V)\braket{\phi_{j}}}
            +
            \underline{(\bar{\partial}_{\bar{i}}V)(\partial_{j}V)}
        \nonumber
        \\
        &\qquad
            -
            \underline{\sqrt{2}(\bar{\partial}_{\bar{i}}V)\phi_{j}V}
            -
            \underline{\sqrt{2}(\bar{\partial}_{\bar{i}}V)\braket{\phi_{j}}V}
        \nonumber
        \\
        &\qquad
            -
            \underline{\bar{\phi}_{\bar{i}}V\phi_{j}}
            -
            \underline{\braket{\bar{\phi}_{\bar{i}}}V\phi_{j}}
            -
            \underline{\bar{\phi}_{\bar{i}}V\braket{\phi_{j}}}
            -
            \braket{\bar{\phi}_{\bar{i}}}V\braket{\phi_{j}}
        \nonumber
        \\
        &\qquad
            +
            \underline{\sqrt{2}\bar{\phi}_{\bar{i}}
            V
            \partial_{j}V}
            +
            \underline{\sqrt{2}\braket{\bar{\phi}_{\bar{i}}}
            V
            \partial_{j}V}
        \nonumber
        \\
        &\qquad
            -
            \underline{\bar{\phi}_{\bar{i}}
            V
            \phi_{j}
            V}
            -
            \underline{\braket{\bar{\phi}_{\bar{i}}}
            V
            \phi_{j}
            V}
            -
            \underline{\bar{\phi}_{\bar{i}}
            V
            \braket{\phi_{j}}
            V}
            -
            \underline{\braket{\bar{\phi}_{\bar{i}}}
            V
            \braket{\phi_{j}}}
            V
        \nonumber
        \\
        &\qquad
            +
            \underline{\frac{1}{\sqrt{2}}
            (\bar{\partial}_{\bar{i}}V)V\phi_{j}}
            +
            \underline{\frac{1}{\sqrt{2}}
            (\bar{\partial}_{\bar{i}}V)V\braket{\phi_{j}}}
            +
            \underline{\frac{1}{\sqrt{2}}V(\bar{\partial}_{\bar{i}}V)\phi_{j}}
            +
            \underline{\frac{1}{\sqrt{2}}V(\bar{\partial}_{\bar{i}}V)\braket{\phi_{j}}}
        \nonumber
        \\
        &\qquad
            +
            \underline{\frac{1}{2}\bar{\phi}_{\bar{i}}V^2\phi_{j}}
            +
            \underline{\frac{1}{2}\braket{\bar{\phi}_{\bar{i}}}V^2\phi_{j}}
            +
            \underline{\frac{1}{2}\bar{\phi}_{\bar{i}}V^2\braket{\phi_{j}}}
            +
            \underline{\frac{1}{2}\braket{\bar{\phi}_{\bar{i}}}V^2\braket{\phi_{j}}}
        \left.\vphantom{\frac{1}{2}}
        \right]
        \nonumber
        \\
        &=
        \frac{2}{g^2}h^{\bar{i}j}\text{Tr}\left[\vphantom{\frac{1}{2}}\right.
            \bar{\phi}_{\bar{i}}\phi_{j}
            +
            \sqrt{2}(\bar{\partial}_{\bar{i}}\phi_{j}+\partial_{j}\bar{\phi}_{\bar{i}})V
            +
            [\bar{\phi}_{\bar{i}},\phi_{j}]V
        \nonumber
        \\
        &\hspace{10pt}
            +
            \sqrt{2}
            \left\{
                \left(
                    \bar{\partial}_{\bar{i}}\phi_{j}
                    +
                    \frac{1}{\sqrt{2}}[\braket{\bar{\phi}_{\bar{i}}},\phi_{j}]
                \right)
                +
                \left(
                    \partial_{j}\bar{\phi}_{\bar{i}}
                    -
                    \frac{1}{\sqrt{2}}[\braket{\phi_{j}},\bar{\phi}_{\bar{i}}]
                \right)
            \right\}
            V
        \nonumber
        \\
        &\hspace{10pt}
            +
            \left(
                \bar{\partial}_{\bar{i}}V
                +
                \frac{1}{\sqrt{2}}[\braket{\bar{\phi}_{\bar{i}}},V]
                +
                \frac{1}{\sqrt{2}}[\bar{\phi}_{\bar{i}},V]
            \right)
            \left(
                \partial_{j}V
                -
                \frac{1}{\sqrt{2}}[\braket{\phi_{j}},V]
                -
                \frac{1}{\sqrt{2}}[\phi_{j},V]
            \right)
        \left.\vphantom{\frac{1}{2}}\right]
        \nonumber
        \\
        &\quad
        +
        \frac{2}{g^2}h^{\bar{i}j}\text{Tr}\ \left[\vphantom{\frac{1}{2}}\right.
            \braket{\bar{\phi}_{\bar{i}}}\phi_{j}
            +        
            \bar{\phi}_{\bar{i}}\braket{\phi_{j}}
            +
            \braket{\bar{\phi}_{\bar{i}}}\braket{\phi_{j}}
        \nonumber
        \\
        &\hspace{100pt}
            +
            \braket{\bar{\phi}_{\bar{i}}}\braket{\phi_{j}}V
            -
            \braket{\bar{\phi}_{\bar{i}}}V\braket{\phi_{j}}
        \left.\vphantom{\frac{1}{2}}\right]
        \\
        &\equiv
        \mathcal{K}^{(0)}+\mathcal{K}^{(D)}
        ,
        \nonumber
    \end{align}
$$
where
$$
    \begin{align}
        \mathcal{K}^{(0)}
        &=
        \frac{2}{g^2}h^{\bar{i}j}\text{Tr}\left[\vphantom{\frac{1}{2}}\right.
            \bar{\phi}_{\bar{i}}\phi_{j}
            +
            \sqrt{2}(\bar{\partial}_{\bar{i}}\phi_{j}+\partial_{j}\bar{\phi}_{\bar{i}})V
            +
            [\bar{\phi}_{\bar{i}},\phi_{j}]V
        \nonumber
        \\
        &\hspace{5pt}
            +
            \sqrt{2}
            \left\{
                \left(
                    \bar{\partial}_{\bar{i}}\phi_{j}
                    +
                    \frac{1}{\sqrt{2}}[\braket{\bar{\phi}_{\bar{i}}},\phi_{j}]
                \right)
                +
                \left(
                    \partial_{j}\bar{\phi}_{\bar{i}}
                    -
                    \frac{1}{\sqrt{2}}[\braket{\phi_{j}},\bar{\phi}_{\bar{i}}]
                \right)
            \right\}
            V
        \nonumber
        \\
        &\hspace{5pt}
            +
            \left(
                \bar{\partial}_{\bar{i}}V
                +
                \frac{1}{\sqrt{2}}[\braket{\bar{\phi}_{\bar{i}}},V]
                +
                \frac{1}{\sqrt{2}}[\bar{\phi}_{\bar{i}},V]
            \right)
            \left(
                \partial_{j}V
                -
                \frac{1}{\sqrt{2}}[\braket{\phi_{j}},V]
                -
                \frac{1}{\sqrt{2}}[\phi_{j},V]
            \right)
        \left.\vphantom{\frac{1}{2}}\right]
        \nonumber
        \\
        \mathcal{K}^{(D)}
        &=        
        \frac{2}{g^2}h^{\bar{i}j}\text{Tr}\ \left[\vphantom{\frac{1}{2}}\right.
            \braket{\bar{\phi}_{\bar{i}}}\phi_{j}
            +        
            \bar{\phi}_{\bar{i}}\braket{\phi_{j}}
            +
            \braket{\bar{\phi}_{\bar{i}}}\braket{\phi_{j}}
        \nonumber
        \\
        &\hspace{100pt}
            +
            \braket{\bar{\phi}_{\bar{i}}}\braket{\phi_{j}}V
            -
            \braket{\bar{\phi}_{\bar{i}}}V\braket{\phi_{j}}
        \left.\vphantom{\frac{1}{2}}\right]
    \end{align}
$$
Note that we have used the cyclic property of the trace $\text{Tr}AB=\text{Tr}BA$, and the underline $\underline{\cdots}$ in eq.$(20)$ at the first line is the non-zero term.

Let us focus on the superpotential $\mathcal{W}$.
$$
    \begin{align}
        \mathcal{W}
        &=
        \frac{1}{g^2}
        \varepsilon^{\text{ijk}}
        e^{\ i}_{\text{i}}e^{\ j}_{\text{j}}e^{\ k}_{\text{k}}
        \text{Tr}
        \left[\vphantom{\frac{1}{2}}\right.
            \sqrt{2}(\phi_{i}+\braket{\phi_{i}})\partial_{j}\phi_{k}
        \\
        &\qquad
            -
            \frac{1}{3}(\phi_{i}+\braket{\phi_{i}})[\phi_{j}+\braket{\phi_{j}},\phi_{k}+\braket{\phi_{k}}]
        \left.\vphantom{\frac{1}{2}}\right] 
        \nonumber
        \\
        &=
        \frac{1}{g^2}
        \varepsilon^{\text{ijk}}
        e^{\ i}_{\text{i}}e^{\ j}_{\text{j}}e^{\ k}_{\text{k}}
        \text{Tr}
        \left[\vphantom{\frac{1}{2}}\right.
            \underline{\sqrt{2}\phi_{i}\partial_{j}\phi_{k}}
            +
            \sqrt{2}\braket{\phi_{i}}\partial_{j}\phi_{k}
        \nonumber
        \\
        &\qquad
            -
            \underline{\frac{1}{3}\phi_{i}[\phi_{j},\phi_{k}]}
            -
            \underline{\frac{1}{3}\phi_{i}[\braket{\phi_{j}},\phi_{k}]}
            -
            \underline{\frac{1}{3}\phi_{i}[\phi_{j},\braket{\phi_{k}}]}
            -
            \frac{1}{3}\phi_{i}[\braket{\phi_{j}},\braket{\phi_{k}}]
        \nonumber
        \\
        &\qquad
            -
            \underline{\frac{1}{3}\braket{\phi_{i}}[\phi_{j},\phi_{k}]}
            -
            \frac{1}{3}\braket{\phi_{i}}[\braket{\phi_{j}},\phi_{k}]
        \nonumber
        \\
        &\qquad
            -
            \frac{1}{3}\braket{\phi_{i}}[\phi_{j},\braket{\phi_{k}}]
            -
            \frac{1}{3}\braket{\phi_{i}}[\braket{\phi_{j}},\braket{\phi_{k}}]
        \left.\vphantom{\frac{1}{2}}\right] 
        \nonumber
        \\
        &=
        \frac{1}{g^2}
        \varepsilon^{\text{ijk}}
        e^{\ i}_{\text{i}}e^{\ j}_{\text{j}}e^{\ k}_{\text{k}}
        \text{Tr}
        \left[\vphantom{\frac{1}{2}}\right.
            \sqrt{2}
            \left(
                \partial_{i}\phi_{j}
                -
                \frac{1}{\sqrt{2}}[\braket{\phi_{i}},\phi_{j}]
            \right)
            \phi_{k}
            -
            \frac{2}{3}\phi_{i}\phi_{j}\phi_{k}        
        \left.\vphantom{\frac{1}{2}}\right]
        \nonumber
        \\
        &\qquad
        +
        \frac{1}{g^2}
        \varepsilon^{\text{ijk}}
        e^{\ i}_{\text{i}}e^{\ j}_{\text{j}}e^{\ k}_{\text{k}}
        \text{Tr}
        \left[\vphantom{\frac{1}{2}}\right.
            \sqrt{2}\braket{\phi_{i}}\partial_{j}\phi_{k}   
            -
            \frac{1}{3}\braket{\phi_{i}}[\braket{\phi_{j}},\phi_{k}]
            -
            \frac{1}{3}\phi_{i}[\braket{\phi_{j}},\braket{\phi_{k}}]
        \nonumber
        \\
        &\hspace{100pt}
            -
            \frac{1}{3}\braket{\phi_{i}}[\braket{\phi_{j}},\phi_{k}]
            -
            \frac{1}{3}\braket{\phi_{i}}[\braket{\phi_{j}},\braket{\phi_{k}}]
        \left.\vphantom{\frac{1}{2}}\right]
        \\
        &\equiv
        \mathcal{W}^{(0)}
        +
        \mathcal{W}^{(F)}
        \nonumber
    \end{align}
$$
where
$$
    \begin{align}
        \mathcal{W}^{(0)}
        &=
        \frac{1}{g^2}
        \varepsilon^{\text{ijk}}
        e^{\ i}_{\text{i}}e^{\ j}_{\text{j}}e^{\ k}_{\text{k}}
        \text{Tr}
        \left[\vphantom{\frac{1}{2}}\right.
            \sqrt{2}
            \left(
                \partial_{i}\phi_{j}
                -
                \frac{1}{\sqrt{2}}[\braket{\phi_{i}},\phi_{j}]
            \right)
            \phi_{k}
            -
            \frac{2}{3}\phi_{i}\phi_{j}\phi_{k}        
        \left.\vphantom{\frac{1}{2}}\right]
        ,
        \\
        \mathcal{W}^{(F)}
        &=
        \frac{1}{g^2}
        \varepsilon^{\text{ijk}}
        e^{\ i}_{\text{i}}e^{\ j}_{\text{j}}e^{\ k}_{\text{k}}
        \text{Tr}
        \left[\vphantom{\frac{1}{2}}\right.
            \sqrt{2}\braket{\phi_{i}}\partial_{j}\phi_{k}
        \nonumber
        \\
        &\hspace{100pt}
            -
            2\phi_{i}\braket{\phi_{j}}\braket{\phi_{k}}
            -
            \frac{2}{3}\braket{\phi_{i}}\braket{\phi_{j}}\braket{\phi_{k}}
        \left.\vphantom{\frac{1}{2}}\right]
        .
    \end{align}
$$
We have used the property that the indices $i,j,k$ are totally antisymmetric because of the coefficient $\varepsilon^{\text{ijk}}$ and the cyclicity inside the trace.

### Do $\mathcal{K}^{(D)}$ and $\mathcal{W}^{(F)}$ really vanish?

We will check that $\mathcal{K}^{(D)}$ and $\mathcal{W}^{(F)}$ are vanished if we impose the SUSY condition. For the Kähler potential $\mathcal{K}^{(D)}$, only $\theta^4$ terms remains in the action $S$[^3]. Thus after taking VEV's it yields
$$
    \begin{align}
        \int\text{d}^4\theta\ \mathcal{K}^{(D)}
        &=
        \int\text{d}^4\theta\ \frac{2}{g^2}h^{\bar{i}j}\text{Tr}\ \left[\vphantom{\frac{1}{2}}\right.
            \braket{\bar{\phi}_{\bar{i}}}\braket{\phi_{j}}V
            -
            \braket{\bar{\phi}_{\bar{i}}}V\braket{\phi_{j}}
        \left.\vphantom{\frac{1}{2}}\right]
        \nonumber
        \\
        &=
        \frac{1}{g^2}h^{\bar{i}j}\text{Tr}\ \left[\vphantom{\frac{1}{2}}\right.
            \frac{1}{2}\braket{\bar{A}_{\bar{i}}}\braket{A_{j}}D
            -
            \frac{1}{2}\braket{A_{j}}  \braket{A_{\bar{i}}}D
        \left.\vphantom{\frac{1}{2}}\right]
        =
        0
    \end{align}
$$
The first term at the second line vanished because of the commutativity of the VEV's $\braket{\bar{A}_{\bar{i}}}\braket{A_{j}}=\braket{A_{j}}\braket{\bar{A}_{\bar{i}}}$. The second one also vanishes
$$
    \begin{align}
        \int\text{d}^2\theta\ 
        \mathcal{W}^{(F)}
        &=        
        \int\text{d}^2\theta\ 
        \frac{1}{g^2}
        \varepsilon^{\text{ijk}}
        e^{\ i}_{\text{i}}e^{\ j}_{\text{j}}e^{\ k}_{\text{k}}
        \text{Tr}
        \left[\vphantom{\frac{1}{2}}\right.
            \sqrt{2}\braket{\phi_{i}}\partial_{j}\phi_{k}
            -
            2\phi_{i}\braket{\phi_{j}}\braket{\phi_{k}}
        \left.\vphantom{\frac{1}{2}}\right]
        \nonumber
        \\
        &=        
        \frac{1}{g^2}
        \varepsilon^{\text{ijk}}
        e^{\ i}_{\text{i}}e^{\ j}_{\text{j}}e^{\ k}_{\text{k}}
        \text{Tr}
        \left[\vphantom{\frac{1}{2}}\right.
            \braket{A_{i}}\partial_{j}F_{k}
            -
            \frac{1}{2}
            F_{i}\braket{A_{j}}\braket{A_{k}}
        \left.\vphantom{\frac{1}{2}}\right]
        =
        0
        ,
    \end{align}
$$
because of the commutativity of the VEV too[^4].


## Effective SUGRA

The action for 4D $\mathcal{N}=1$ conformal supergravity is written as
$$
    \begin{align}
        S_{\mathcal{N}=1}
        &=
        \int\text{d}^4x\ \sqrt{-g^{C}}
            \left[\vphantom{\frac{1}{2}}\right.
            -3\int\text{d}^4\theta\ 
            \bar{C}Ce^{-K/3}
        \nonumber
        \\
        &\qquad
            +
            \left\{
                \int\text{d}^2\theta\ 
                \left(
                    \frac{1}{4}
                    \sum_{a}f_{a}W^{a,\alpha}W^{a}_{\alpha}
                    +
                    CW^3
                \right)
            +
            \text{h.c.}
            \right\}
        \left.\vphantom{\frac{1}{2}}\right]
        .
    \end{align}
$$













## Reference

1. <a name="AbeKobayashiOhkiSumita2012"></a>H. Abe, T. Kobayashi, H. Ohki, and K. Sumita, “Superfield description of 10D SYM theory with magnetized extra dimensions,” 2012, [doi: 10.1016/j.nuclphysb.2012.05.012](https://doi.org/10.1016/j.nuclphysb.2012.05.012).

2. <a name="AbeHigakiKobayashiOmura2007"></a>H. Abe, T. Higaki, T. Kobayashi, and Y. Omura, “Moduli stabilization, F-term uplifting, and soft supersymmetry breaking terms,” 2007, [doi: 10.1103/PhysRevD.75.025019](https://link.aps.org/doi/10.1103/PhysRevD.75.025019).

3. <a name="WessBagger"></a>J. Wess and J. Bagger, *"Supersymmetry and Supergravity."* Princeton, N.J: Princeton University Press, 1992.

[^1]: If there are two $V$s, for instance $\bar{\phi}_{\bar{i}}(\partial_{j}V)V$ or $\bar{\phi}_{\bar{i}}\phi_{j}V^2$, the term must not have the $D$ for the highest components. The term higher than $V^3$ should vanish by WZ gauge fixing, and no $V$ term also does not have the contribution for the equation of motion.

[^2]: Refer the exercise 2 in Section 7 in the textbook[[2](#WessBagger)].

[^3]: For example, the term not including $\theta^4$ like $\braket{\bar{\phi}_{\bar{i}}}\phi_{j}$ vanishes.

[^4]: More accurately, the term $\braket{A_{i}}\partial_{j}F_{k}$ vanishes because of the integration by parts and the fact that $\partial_{j}\braket{A_{i}}=0$. The last condition is derived from the Lorentz invariance of the flux.
