---
layout: default
title: Detail of the computations
---

# Detail of the computations

We feel frustrated with the challenging computations involved in studying SUSY. I will document the process of such challenging computations because no one seems to save one's calculation process. I hope this file will help you to study in this field.

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
                    \text{Tr}\ \mathcal{W}^{\alpha}\mathcal{W}  _  {\alpha}
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
                \sqrt{2}\bar{\partial _ {\bar{i}}}
                +
                \bar{\phi} _ {\bar{i}}
            )
            e^{-V}
            \right\}
            \left\{
            (
                \sqrt{2}\partial _ {j}
                +
                \phi _ {j}
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
                \bar{\partial} _ {\bar{i}}e^{-V}
            )
            (
                \partial _ {j}e^{V}
            )
        \right]
        +
        \mathcal{K} _ \text{WZW}
        ,
        \\
        \mathcal{W}
        &=
        \frac{1}{g^2}
        \varepsilon^{\text{ijk}}
        e^{\ i} _ {\text{i}}e^{\ j} _ {\text{j}}e^{\ k} _ {\text{k}}
        \text{Tr}
        \left[
            \sqrt{2}\phi _ {i}
            \left(
                \partial _ {j}\phi _ {k}
                -
                \frac{1}{3\sqrt{2}}[\phi _ {j},\phi _ {k}]
            \right)
        \right]
        .
    \end{align}
$$
The term $\mathcal{K} _ \text{WZW}$ is so called Wess-Zumino-Witten term which vanishes when we take Wess-Zumino gauge
$$
    \begin{align}
        V
        &=
        -
        \theta\sigma^{\mu}\bar{\theta}A _ {\mu}
        +
        i\overline{\theta\theta}\theta\lambda _ {0}
        -
        i\theta\theta\overline{\theta\lambda} _ {0}
        +
        \frac{1}{2}\theta\theta\overline{\theta\theta}D
        ,
        \\
        \phi _ {i}
        &=
        \frac{1}{\sqrt{2}}
        A _ i
        +
        \sqrt{2}\theta\lambda _ {i}
        +
        \theta\theta F _ {i}.
    \end{align}
$$

### SUSY condition

By carrying out the derivative for the $F _ {i}$ and $D _ {i}$, we can obtain the on-shell relation of the auxiliary fields. First, let us focus on the Kähler potential. The term inside the trace become
$$
    \begin{align}
        &\hspace{10pt}
        \left\{
            (
                \sqrt{2}\bar{\partial _ {\bar{i}}}
                +
                \bar{\phi} _ {\bar{i}}
            )
            e^{-V}
        \right\}
        \left\{
            (
                \sqrt{2}\partial _ {j}
                +
                \phi _ {j}
            )
            e^{V}
            \right\}
            +
            (
                \bar{\partial} _ {\bar{i}}e^{-V}
            )
            (
                \partial _ {j}e^{V}
            )
        \nonumber
        \\
        &=
        \left\{
            (
                \sqrt{2}\bar{\partial _ {\bar{i}}}
                +
                \bar{\phi} _ {\bar{i}}
            )
            \left(
                1-V+\frac{1}{2}V^2
            \right)
        \right\}
        \left\{
            (
                \sqrt{2}\partial _ {j}
                +
                \phi _ {j}
            )
            \left(
                1+V+\frac{1}{2}V^2
            \right)
        \right\}
        \nonumber
        \\
        &\hspace{50pt}
        +
        \bar{\partial} _ {\bar{i}}
            \left(
                1-V+\frac{1}{2}V^2
            \right)
        \partial _ {j}
            \left(
                1+V+\frac{1}{2}V^2
            \right)
        \nonumber
        \\
        &=
        \bar{\phi} _ {\bar{i}}\phi _ {j}
        -
        \sqrt{2}\bar{\phi} _ {\bar{i}}(\partial _ {j}V)
        +
        \bar{\phi} _ {\bar{i}}\phi _ {j}V
        -
        \frac{1}{\sqrt{2}}\bar{\phi} _ {\bar{i}}(\partial _ {j}V)V
        -
        \frac{1}{\sqrt{2}}\bar{\phi} _ {\bar{i}}V(\partial _ {j}V)+\frac{1}{2}\bar{\phi} _ {\bar{i}}\phi _ {j}V^2
        \nonumber
        \\
        &\quad
        -
        \sqrt{2}(\bar{\partial} _ {\bar{i}}V)\phi _ {j}
        +
        (\bar{\partial} _ {\bar{i}}V)(\partial _ {j}V)
        -
        \sqrt{2}(\bar{\partial} _ {\bar{i}}V)\phi _ {j}V
        -
        \bar{\phi} _ {\bar{i}}V\phi _ {j}
        +
        \sqrt{2}\bar{\phi} _ {\bar{i}}
        V
        \partial _ {j}V
        \nonumber
        \\
        &\quad
        -
        \bar{\phi} _ {\bar{i}}
        V
        \phi _ {j}
        V
        +
        \frac{1}{\sqrt{2}}
        (\bar{\partial} _ {\bar{i}}V)V\phi _ {j}
        +
        \frac{1}{\sqrt{2}}V(\bar{\partial} _ {\bar{i}}V)\phi _ {j}
        +
        \frac{1}{2}\bar{\phi} _ {\bar{i}}V^2\phi _ {j}
        .
    \end{align}
$$
This is the only term that contains the auxiliary $D$. Note that the action $S$ contains only the highest term $\theta^4$ from the Kähler potential $\mathcal{K}$. Thus when we take the derivative to the $D$, the term which has only one $V$ will remain[^1]. After integrating by parts, for removing the factor the derivative of vector superfield, for instance, the term $\bar{\phi} _ {\bar{i}}\partial _ {j}V$, we find
$$
    \begin{align}
        \frac{\delta \mathcal{S}}{\delta D}
        &=        
        \sqrt{-G}      
        \frac{2}{g^2}
        h^{\bar{i}j}
        \left[
            \partial _ {j}\bar{A} _ {\bar{i}}
            +
            \frac{1}{2}\bar{A} _ {\bar{i}}A _ {j}
            +
            \bar{\partial} _ {\bar{i}}A _ {j}
            -
            \frac{1}{2}A _ {j}\bar{A} _ {\bar{i}}
        \right]
        \nonumber
        \\
        &\hspace{20pt}+
        \frac{1}{4g^2}
        \frac{\delta}{\delta D}
        \int\text{d}^{10}X\sqrt{-G}
        \left[
            \int\text{d}^{2}\theta\ \text{Tr}\ \mathcal{W}^{\alpha}\mathcal{W} _ {\alpha}
            +  
            \int\text{d}^{2}\bar{\theta}\ \text{Tr}\ \overline{\mathcal{W} _ {\dot{\alpha}}\mathcal{W}^{\dot{\alpha}}}
        \right]
        .
    \end{align}
$$
Note that we should be careful about the derivatives of the term like $\bar{\phi} _ {\bar{i}}V\phi _ {j}$. We derivate for the auxiliary $D$, but it has the indices of the gauge group, $D _ {AB}$. Therefore we obtain
$$
    \begin{align}    
        \left.
        \frac{\delta}{\delta D _ {AB}}
        \text{Tr}
        \left[\bar{\phi} _ {\bar{i}}V\phi _ {j}\right]
        \right| _ {\theta^4}
        &=
        \frac{1}{2}
        \frac{\delta}{\delta D _ {AB}} 
        (\bar{A} _ {\bar{i}}) _ {CD}    
        (D) _ {DE} 
        (A _ {j}) _ {EC}
        \nonumber
        \\
        &=
        \frac{1}{2}
        (\bar{A} _ {\bar{i}}) _ {CA}    
        (A _ {j}) _ {BC}
        =
        \frac{1}{2}
        (A _ {j}\bar{A} _ {\bar{i}}) _ {AB}
        .
    \end{align}
$$
The term including $\text{Tr}\ \mathcal{W}^{\alpha}\mathcal{W} _ {\alpha}$ and its hermitian conjugate is well-known[^2]. That is
$$
    \begin{equation}
        \text{Tr}\ 
        \mathcal{W}^{\alpha}
        \mathcal{W} _ {\alpha}
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
                \partial _ {j}\bar{A} _ {\bar{i}}
                +
                \bar{\partial} _ {\bar{i}}A _ {j}   
                +
                \frac{1}{2}[\bar{A} _ {\bar{i}},A _ {j}]
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
            \partial _ {j}\bar{A} _ {\bar{i}}
            +
            \bar{\partial} _ {\bar{i}}A _ {j}   
            +
            \frac{1}{2}[\bar{A} _ {\bar{i}},A _ {j}]
        \right)
    \end{equation}
$$
for the equation of motion for the auxiliary $D$. Let us move on to the computation for the auxiliary $F _ i$. $F _ {i}$ is included by the superfield $\phi _ {i}$ that appears only in Kähler potential $\mathcal{K}$ and super potential $\mathcal{W}$, not in field strength $\mathcal{W}^{\alpha}$. The highest component containing the auxiliary $F _ {i}$ comes from the term $\bar{\phi} _ {\bar{i}}\phi _ {j}$ in Kähler potential. Thus the Kähler potential including $F$ is
$$
    \begin{equation}
        \mathcal{K}
        \rightarrow
        \frac{2}{g^2} h^{\bar{i}j}
        \text{Tr}
        \left[
            \bar{F} _ {\bar{i}}F _ {j}
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
        e^{\ i} _ {\text{i}}e^{\ j} _ {\text{j}}e^{\ k} _ {\text{k}}
        \text{Tr}
        \left[
            \sqrt{2}\phi _ {i}
            \left(
                \partial _ {j}\phi _ {k}
                -
                \frac{1}{3\sqrt{2}}[\phi _ {j},\phi _ {k}]
            \right)
        \right]
        \nonumber
        \\
        &\rightarrow
        \frac{1}{g^2}
        \varepsilon^{\text{ijk}}
        e^{\ i} _ {\text{i}}e^{\ j} _ {\text{j}}e^{\ k} _ {\text{k}}
        \text{Tr}
        \left[
            \vphantom{\frac{1}{6}}
            A _ {i}\partial _ {j}F _ {k}
            +
            F _ {i}\partial _ {j}A _ {k}
        \right.
        \nonumber
        \\
        &\hspace{50pt}
        \left.
            -
            \frac{1}{6}
            \left(
                F _ {i}[A _ {j},A _ {k}]
                +
                A _ {i}[F _ {j},A _ {k}]
                +
                A _ {i}[A _ {j},F _ {k}]
            \right)
        \right]
        ,
        \\
        \overline{\mathcal{W}}
        &\rightarrow
        \frac{1}{g^2}
        \varepsilon^{\bar{\text{i}}\bar{\text{j}}\bar{\text{k}}}
        e^{\ \bar{i}} _ {\bar{\text{i}}}e^{\ \bar{j}} _ {\bar{\text{j}}}e^{\ \bar{k}} _ {\bar{\text{k}}}
        \text{Tr}
        \left[
            \vphantom{\frac{1}{6}}
            \bar{A} _ {\bar{i}}\bar{\partial} _ {\bar{j}}\bar{F} _ {\bar{k}}
            +
            \bar{F} _ {\bar{i}}\bar{\partial} _ {\bar{j}}\bar{F} _ {\bar{k}}
        \right.
        \nonumber
        \\
        &\hspace{50pt}
        \left.
            -
            \frac{1}{6}
            \left(
                \bar{F} _ {\bar{i}}[\bar{A} _ {\bar{j}},\bar{A} _ {\bar{k}}]
                +
                \bar{A} _ {\bar{i}}[\bar{F} _ {\bar{j}},\bar{A} _ {\bar{k}}]
                +
                \bar{A} _ {\bar{i}}[\bar{A} _ {\bar{j}},\bar{F} _ {\bar{k}}]
            \right)
        \right]
        .
    \end{align}
$$
By derivating to the $F _ {i}$, the term in the action become separately
$$
    \begin{align}
        \frac{\delta}{\delta F _ {i}}
        \int\text{d}^{10}X\sqrt{-G}\int\text{d}^{4}\theta\ \mathcal{K}
        &=
        \sqrt{-G}\frac{2}{g^2}
        \frac{\delta}{\delta F _ {i}}
        h^{\bar{a}b}\text{Tr}\ 
        \bar{F} _ {\bar{a}}F _ {b}    
        \nonumber    
        \\
        &=
        \sqrt{-G}\frac{2}{g^2}
        h^{\bar{j}i}
        \text{Tr}\ \bar{F} _ {\bar{j}}
        ,
        \\
        \frac{\delta}{\delta F _ {i}}
        \int\text{d}^{10}X\sqrt{-G}\int\text{d}^{2}\theta\ \mathcal{W}
        &=
        \sqrt{-G}\frac{1}{g^2}
        \varepsilon^{\text{ijk}}
        e^{\ i} _ {\text{i}}e^{\ j} _ {\text{j}}e^{\ k} _ {\text{k}}        
        \frac{\delta}{\delta F _ {i}}
        \text{Tr}\ 
        \left[
            \vphantom{\frac{1}{6}}
            A _ {i}\partial _ {j}F _ {k}
            +
            F _ {i}\partial _ {j}A _ {k}
        \right.
        \nonumber
        \\
        &\hspace{30pt}
        \left.
            -
            \frac{1}{6}
            \left(
                F _ {i}[A _ {j},A _ {k}]
                +
                A _ {i}[F _ {j},A _ {k}]
                +
                A _ {i}[A _ {j},F _ {k}]
            \right)
        \right]
        \nonumber
        \\
        &=
        \sqrt{-G}\frac{1}{g^2}
        \varepsilon^{\text{ijk}}
        e^{\ i} _ {\text{i}}e^{\ j} _ {\text{j}}e^{\ k} _ {\text{k}} 
        \text{Tr}\ 
        \left[
            2\partial _ {j}A _ {k}
            -
            \frac{1}{2}[A _ {j},A _ {k}]
        \right]
        .
    \end{align}
$$
Note that we have interchanged the dummy indices several times after derivating. At last, the equation of motion for the $F _ {i}$
$$
    \begin{equation}
        h^{\bar{j}i}\bar{F} _ {\bar{j}}
        +        
        \varepsilon^{\text{ijk}}
        e^{\ i} _ {\text{i}}e^{\ j} _ {\text{j}}e^{\ k} _ {\text{k}} 
        \left[
            \partial _ {j}A _ {k}
            -
            \frac{1}{4}[A _ {j},A _ {k}]     
        \right]
        =
        0   
    \end{equation}
$$
or equivalently
$$
    \begin{equation}
        \bar{F} _ {\bar{i}}
        =
        -
        h _ {j\bar{i}}
        \varepsilon^{\text{jkl}}
        e^{\ j} _ {\text{j}}e^{\ k} _ {\text{k}}e^{\ l} _ {\text{l}}
        \left[
            \partial _ {k}A _ {l}
            -
            \frac{1}{4}[A _ {k},A _ {l}]     
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
        \braket{\phi _ {i}}
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
            \underline{\bar{\phi} _ {\bar{i}}\phi _ {j}}
            +
            \braket{\bar{\phi} _ {\bar{i}}}\phi _ {j}
            +        
            \bar{\phi} _ {\bar{i}}\braket{\phi _ {j}}
            +
            \braket{\bar{\phi} _ {\bar{i}}}\braket{\phi _ {j}}
            -
            \underline{\sqrt{2}\bar{\phi} _ {\bar{i}}(\partial _ {j}V)}
            -
            \underline{\sqrt{2}\braket{\bar{\phi} _ {\bar{i}}}(\partial _ {j}V)}
        \nonumber
        \\
        &\qquad
            +
            \underline{\bar{\phi} _ {\bar{i}}\phi _ {j}V}
            +
            \underline{\braket{\bar{\phi} _ {\bar{i}}}\phi _ {j}V}
            +
            \underline{\bar{\phi} _ {\bar{i}}\braket{\phi _ {j}}V}
            +
            \braket{\bar{\phi} _ {\bar{i}}}\braket{\phi _ {j}}V
            -
            \underline{\frac{1}{\sqrt{2}}\bar{\phi} _ {\bar{i}}(\partial _ {j}V)V}
            -
            \underline{\frac{1}{\sqrt{2}}\braket{\bar{\phi} _ {\bar{i}}}(\partial _ {j}V)V}
        \nonumber
        \\
        &\qquad
            -
            \underline{\frac{1}{\sqrt{2}}\bar{\phi} _ {\bar{i}}V(\partial _ {j}V)}
            -
            \underline{\frac{1}{\sqrt{2}}\braket{\bar{\phi} _ {\bar{i}}}V(\partial _ {j}V)}
            +
            \underline{\frac{1}{2}\bar{\phi} _ {\bar{i}}\phi _ {j}V^2}
            +
            \underline{\frac{1}{2}\braket{\bar{\phi} _ {\bar{i}}}\phi _ {j}V^2}
            +
            \underline{\frac{1}{2}\bar{\phi} _ {\bar{i}}\braket{\phi _ {j}}V^2}
            +
            \underline{\frac{1}{2}\braket{\bar{\phi} _ {\bar{i}}}\braket{\phi _ {j}}V^2}
        \nonumber
    \end{align}
$$

$$
    \begin{align}
        &\qquad
            -
            \underline{\sqrt{2}(\bar{\partial} _ {\bar{i}}V)\phi _ {j}}
            -
            \underline{\sqrt{2}(\bar{\partial} _ {\bar{i}}V)\braket{\phi _ {j}}}
            +
            \underline{(\bar{\partial} _ {\bar{i}}V)(\partial _ {j}V)}
            -
            \underline{\sqrt{2}(\bar{\partial} _ {\bar{i}}V)\phi _ {j}V}
            -
            \underline{\sqrt{2}(\bar{\partial} _ {\bar{i}}V)\braket{\phi _ {j}}V}
            -
            \underline{\bar{\phi} _ {\bar{i}}V\phi _ {j}}
        \nonumber
        \\
        &\qquad
            -
            \underline{\braket{\bar{\phi} _ {\bar{i}}}V\phi _ {j}}
            -
            \underline{\bar{\phi} _ {\bar{i}}V\braket{\phi _ {j}}}
            -
            \braket{\bar{\phi} _ {\bar{i}}}V\braket{\phi _ {j}}
            +
            \underline{\sqrt{2}\bar{\phi} _ {\bar{i}}
            V
            \partial _ {j}V}
            +
            \underline{\sqrt{2}\braket{\bar{\phi} _ {\bar{i}}}
            V
            \partial _ {j}V}
            -
            \underline{\bar{\phi} _ {\bar{i}}
            V
            \phi _ {j}
            V}
            -
            \underline{\braket{\bar{\phi} _ {\bar{i}}}
            V
            \phi _ {j}
            V}
        \nonumber
        \\
        &\qquad
            -
            \underline{\bar{\phi} _ {\bar{i}}
            V
            \braket{\phi _ {j}}
            V}
            -
            \underline{\braket{\bar{\phi} _ {\bar{i}}}
            V
            \braket{\phi _ {j}}}
            V
            +
            \underline{\frac{1}{\sqrt{2}}
            (\bar{\partial} _ {\bar{i}}V)V\phi _ {j}}
            +
            \underline{\frac{1}{\sqrt{2}}
            (\bar{\partial} _ {\bar{i}}V)V\braket{\phi _ {j}}}
        \nonumber
        \\
        &\qquad
            +
            \underline{\frac{1}{\sqrt{2}}V(\bar{\partial} _ {\bar{i}}V)\phi _ {j}}
            +
            \underline{\frac{1}{\sqrt{2}}V(\bar{\partial} _ {\bar{i}}V)\braket{\phi _ {j}}}
            +
            \underline{\frac{1}{2}\bar{\phi} _ {\bar{i}}V^2\phi _ {j}}
            +
            \underline{\frac{1}{2}\braket{\bar{\phi} _ {\bar{i}}}V^2\phi _ {j}}
            +
            \underline{\frac{1}{2}\bar{\phi} _ {\bar{i}}V^2\braket{\phi _ {j}}}
            +
            \underline{\frac{1}{2}\braket{\bar{\phi} _ {\bar{i}}}V^2\braket{\phi _ {j}}}
        \left.\vphantom{\frac{1}{2}}
        \right]
        \nonumber
    \end{align}
$$
and at last
$$
    \begin{align}
        &=
        \frac{2}{g^2}h^{\bar{i}j}\text{Tr}\left[\vphantom{\frac{1}{2}}\right.
            \bar{\phi} _ {\bar{i}}\phi _ {j}
            +
            \sqrt{2}(\bar{\partial} _ {\bar{i}}\phi _ {j}+\partial _ {j}\bar{\phi} _ {\bar{i}})V
            +
            [\bar{\phi} _ {\bar{i}},\phi _ {j}]V
        \nonumber
        \\
        &\qquad
            +
            \sqrt{2}
            \left\{
                \left(
                    \bar{\partial} _ {\bar{i}}\phi _ {j}
                    +
                    \frac{1}{\sqrt{2}}[\braket{\bar{\phi} _ {\bar{i}}},\phi _ {j}]
                \right)
                +
                \left(
                    \partial _ {j}\bar{\phi} _ {\bar{i}}
                    -
                    \frac{1}{\sqrt{2}}[\braket{\phi _ {j}},\bar{\phi} _ {\bar{i}}]
                \right)
            \right\}
            V
        \nonumber
        \\
        &\qquad
            +
            \left(
                \bar{\partial} _ {\bar{i}}V
                +
                \frac{1}{\sqrt{2}}[\braket{\bar{\phi} _ {\bar{i}}},V]
                +
                \frac{1}{\sqrt{2}}[\bar{\phi} _ {\bar{i}},V]
            \right)
            \left(
                \partial _ {j}V
                -
                \frac{1}{\sqrt{2}}[\braket{\phi _ {j}},V]
                -
                \frac{1}{\sqrt{2}}[\phi _ {j},V]
            \right)
        \left.\vphantom{\frac{1}{2}}\right]
        \nonumber
        \\
        &\quad
        +
        \frac{2}{g^2}h^{\bar{i}j}\text{Tr}\ \left[\vphantom{\frac{1}{2}}\right.
            \braket{\bar{\phi} _ {\bar{i}}}\phi _ {j}
            +        
            \bar{\phi} _ {\bar{i}}\braket{\phi _ {j}}
            +
            \braket{\bar{\phi} _ {\bar{i}}}\braket{\phi _ {j}}
            +
            \braket{\bar{\phi} _ {\bar{i}}}\braket{\phi _ {j}}V
            -
            \braket{\bar{\phi} _ {\bar{i}}}V\braket{\phi _ {j}}
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
            \bar{\phi} _ {\bar{i}}\phi _ {j}
            +
            \sqrt{2}(\bar{\partial} _ {\bar{i}}\phi _ {j}+\partial _ {j}\bar{\phi} _ {\bar{i}})V
            +
            [\bar{\phi} _ {\bar{i}},\phi _ {j}]V
        \nonumber
        \\
        &\hspace{5pt}
            +
            \sqrt{2}
            \left\{
                \left(
                    \bar{\partial} _ {\bar{i}}\phi _ {j}
                    +
                    \frac{1}{\sqrt{2}}[\braket{\bar{\phi} _ {\bar{i}}},\phi _ {j}]
                \right)
                +
                \left(
                    \partial _ {j}\bar{\phi} _ {\bar{i}}
                    -
                    \frac{1}{\sqrt{2}}[\braket{\phi _ {j}},\bar{\phi} _ {\bar{i}}]
                \right)
            \right\}
            V
        \nonumber
        \\
        &\hspace{5pt}
            +
            \left(
                \bar{\partial} _ {\bar{i}}V
                +
                \frac{1}{\sqrt{2}}[\braket{\bar{\phi} _ {\bar{i}}},V]
                +
                \frac{1}{\sqrt{2}}[\bar{\phi} _ {\bar{i}},V]
            \right)
            \left(
                \partial _ {j}V
                -
                \frac{1}{\sqrt{2}}[\braket{\phi _ {j}},V]
                -
                \frac{1}{\sqrt{2}}[\phi _ {j},V]
            \right)
        \left.\vphantom{\frac{1}{2}}\right]
        \nonumber
        \\
        \mathcal{K}^{(D)}
        &=        
        \frac{2}{g^2}h^{\bar{i}j}\text{Tr}\ \left[\vphantom{\frac{1}{2}}\right.
            \braket{\bar{\phi} _ {\bar{i}}}\phi _ {j}
            +        
            \bar{\phi} _ {\bar{i}}\braket{\phi _ {j}}
            +
            \braket{\bar{\phi} _ {\bar{i}}}\braket{\phi _ {j}}
        \nonumber
        \\
        &\hspace{100pt}
            +
            \braket{\bar{\phi} _ {\bar{i}}}\braket{\phi _ {j}}V
            -
            \braket{\bar{\phi} _ {\bar{i}}}V\braket{\phi _ {j}}
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
        e^{\ i} _ {\text{i}}e^{\ j} _ {\text{j}}e^{\ k} _ {\text{k}}
        \text{Tr}
        \left[\vphantom{\frac{1}{2}}\right.
            \sqrt{2}(\phi _ {i}+\braket{\phi _ {i}})\partial _ {j}\phi _ {k}
        \\
        &\qquad
            -
            \frac{1}{3}(\phi _ {i}+\braket{\phi _ {i}})[\phi _ {j}+\braket{\phi _ {j}},\phi _ {k}+\braket{\phi _ {k}}]
        \left.\vphantom{\frac{1}{2}}\right] 
        \nonumber
        \\
        &=
        \frac{1}{g^2}
        \varepsilon^{\text{ijk}}
        e^{\ i} _ {\text{i}}e^{\ j} _ {\text{j}}e^{\ k} _ {\text{k}}
        \text{Tr}
        \left[\vphantom{\frac{1}{2}}\right.
            \underline{\sqrt{2}\phi _ {i}\partial _ {j}\phi _ {k}}
            +
            \sqrt{2}\braket{\phi _ {i}}\partial _ {j}\phi _ {k}
        \nonumber
        \\
        &\qquad
            -
            \underline{\frac{1}{3}\phi _ {i}[\phi _ {j},\phi _ {k}]}
            -
            \underline{\frac{1}{3}\phi _ {i}[\braket{\phi _ {j}},\phi _ {k}]}
            -
            \underline{\frac{1}{3}\phi _ {i}[\phi _ {j},\braket{\phi _ {k}}]}
            -
            \frac{1}{3}\phi _ {i}[\braket{\phi _ {j}},\braket{\phi _ {k}}]
        \nonumber
        \\
        &\qquad
            -
            \underline{\frac{1}{3}\braket{\phi _ {i}}[\phi _ {j},\phi _ {k}]}
            -
            \frac{1}{3}\braket{\phi _ {i}}[\braket{\phi _ {j}},\phi _ {k}]
        \nonumber
        \\
        &\qquad
            -
            \frac{1}{3}\braket{\phi _ {i}}[\phi _ {j},\braket{\phi _ {k}}]
            -
            \frac{1}{3}\braket{\phi _ {i}}[\braket{\phi _ {j}},\braket{\phi _ {k}}]
        \left.\vphantom{\frac{1}{2}}\right] 
        \nonumber
        \\
        &=
        \frac{1}{g^2}
        \varepsilon^{\text{ijk}}
        e^{\ i} _ {\text{i}}e^{\ j} _ {\text{j}}e^{\ k} _ {\text{k}}
        \text{Tr}
        \left[\vphantom{\frac{1}{2}}\right.
            \sqrt{2}
            \left(
                \partial _ {i}\phi _ {j}
                -
                \frac{1}{\sqrt{2}}[\braket{\phi _ {i}},\phi _ {j}]
            \right)
            \phi _ {k}
            -
            \frac{2}{3}\phi _ {i}\phi _ {j}\phi _ {k}        
        \left.\vphantom{\frac{1}{2}}\right]
        \nonumber
        \\
        &\qquad
        +
        \frac{1}{g^2}
        \varepsilon^{\text{ijk}}
        e^{\ i} _ {\text{i}}e^{\ j} _ {\text{j}}e^{\ k} _ {\text{k}}
        \text{Tr}
        \left[\vphantom{\frac{1}{2}}\right.
            \sqrt{2}\braket{\phi _ {i}}\partial _ {j}\phi _ {k}   
            -
            \frac{1}{3}\braket{\phi _ {i}}[\braket{\phi _ {j}},\phi _ {k}]
            -
            \frac{1}{3}\phi _ {i}[\braket{\phi _ {j}},\braket{\phi _ {k}}]
        \nonumber
        \\
        &\hspace{100pt}
            -
            \frac{1}{3}\braket{\phi _ {i}}[\braket{\phi _ {j}},\phi _ {k}]
            -
            \frac{1}{3}\braket{\phi _ {i}}[\braket{\phi _ {j}},\braket{\phi _ {k}}]
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
        e^{\ i} _ {\text{i}}e^{\ j} _ {\text{j}}e^{\ k} _ {\text{k}}
        \text{Tr}
        \left[\vphantom{\frac{1}{2}}\right.
            \sqrt{2}
            \left(
                \partial _ {i}\phi _ {j}
                -
                \frac{1}{\sqrt{2}}[\braket{\phi _ {i}},\phi _ {j}]
            \right)
            \phi _ {k}
            -
            \frac{2}{3}\phi _ {i}\phi _ {j}\phi _ {k}        
        \left.\vphantom{\frac{1}{2}}\right]
        ,
        \\
        \mathcal{W}^{(F)}
        &=
        \frac{1}{g^2}
        \varepsilon^{\text{ijk}}
        e^{\ i} _ {\text{i}}e^{\ j} _ {\text{j}}e^{\ k} _ {\text{k}}
        \text{Tr}
        \left[\vphantom{\frac{1}{2}}\right.
            \sqrt{2}\braket{\phi _ {i}}\partial _ {j}\phi _ {k}
        \nonumber
        \\
        &\hspace{100pt}
            -
            2\phi _ {i}\braket{\phi _ {j}}\braket{\phi _ {k}}
            -
            \frac{2}{3}\braket{\phi _ {i}}\braket{\phi _ {j}}\braket{\phi _ {k}}
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
            \braket{\bar{\phi} _ {\bar{i}}}\braket{\phi _ {j}}V
            -
            \braket{\bar{\phi} _ {\bar{i}}}V\braket{\phi _ {j}}
        \left.\vphantom{\frac{1}{2}}\right]
        \nonumber
        \\
        &=
        \frac{1}{g^2}h^{\bar{i}j}\text{Tr}\ \left[\vphantom{\frac{1}{2}}\right.
            \frac{1}{2}\braket{\bar{A} _ {\bar{i}}}\braket{A _ {j}}D
            -
            \frac{1}{2}\braket{A _ {j}}  \braket{A _ {\bar{i}}}D
        \left.\vphantom{\frac{1}{2}}\right]
        =
        0
    \end{align}
$$
The first term at the second line vanished because of the commutativity of the VEV's $\braket{\bar{A} _ {\bar{i}}}\braket{A _ {j}}=\braket{A _ {j}}\braket{\bar{A} _ {\bar{i}}}$. The second one also vanishes
$$
    \begin{align}
        \int\text{d}^2\theta\ 
        \mathcal{W}^{(F)}
        &=        
        \int\text{d}^2\theta\ 
        \frac{1}{g^2}
        \varepsilon^{\text{ijk}}
        e^{\ i} _ {\text{i}}e^{\ j} _ {\text{j}}e^{\ k} _ {\text{k}}
        \text{Tr}
        \left[\vphantom{\frac{1}{2}}\right.
            \sqrt{2}\braket{\phi _ {i}}\partial _ {j}\phi _ {k}
            -
            2\phi _ {i}\braket{\phi _ {j}}\braket{\phi _ {k}}
        \left.\vphantom{\frac{1}{2}}\right]
        \nonumber
        \\
        &=        
        \frac{1}{g^2}
        \varepsilon^{\text{ijk}}
        e^{\ i} _ {\text{i}}e^{\ j} _ {\text{j}}e^{\ k} _ {\text{k}}
        \text{Tr}
        \left[\vphantom{\frac{1}{2}}\right.
            \braket{A _ {i}}\partial _ {j}F _ {k}
            -
            \frac{1}{2}
            F _ {i}\braket{A _ {j}}\braket{A _ {k}}
        \left.\vphantom{\frac{1}{2}}\right]
        =
        0
        ,
    \end{align}
$$
because of the commutativity of the VEV too[^4].


## 4D $\mathcal{N}=1$ SUGRA

The action for 4D $\mathcal{N}=1$ conformal supergravity is written as
<a name="sugra _ action"></a>
$$
    \begin{align}
        S _ {\mathcal{N}=1}
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
                    \sum _ {a}f _ {a}W^{a,\alpha}W^{a} _ {\alpha}
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


### Scalar potential

We will derive the scalar potential from the action ([28](#sugra _ action)). To derive the scalar potential, we have to only pay attention to scalar fields. From the term without compensators like
$$
    \begin{equation}
        \int\text{d}^2\theta\ 
        \frac{1}{4}\sum _ {a}f _ {a}W^{a\alpha}W^{a} _ {\alpha}
        +
        \text{h.c.}
        ,
    \end{equation}
$$
we can obtain $D$-terms. Thus, we will focus on remaining terms
<a name="F-term1"></a>
$$
    \begin{equation}
        -3
        \int\text{d}^4\theta\ \bar{C}Ce^{-K/3}
        +
        \int\text{d}^2\theta\  C^{3}W
        +
        \int\text{d}^2\bar{\theta}\  \bar{C}^{3}\bar{W}
        .
    \end{equation}
$$
Let us discuss the latter two terms. Since $C$ and $\bar{C}$ are chiral superfields, we find the expansion
$$
    \begin{align}
        \left.
            C^{3} W
        \right| _ {\theta\theta}
        &=
        C _ {0}^{3}W _ {\theta\theta}
        +
        3C _ {0}^2
        \left.
            C
        \right| _ {\theta\theta}
        W _ {0}
        \nonumber
        \\
        &=
        C _ {0}^3W _ {I}F^{I}
        +
        3C _ {0}^{2}F^{C}W _ {0}
        ,
    \end{align}
$$
where $W _ {I}, F^{I}, F^{C}$ are defined as
<a name="chiral"></a>
$$
    \begin{align}
        W _ {I}
        &
        \equiv
        \frac{\partial}{\partial\Phi^{I}}W
        ,
        \\
        \Phi^{I}
        &=
        \phi^{I}
        +
        \cdots
        +
        \theta\theta F^{I}
        ,
        \\
        C
        &=
        \phi^{C}
        +
        \cdots
        +
        \theta\theta F^{C}
        .
    \end{align}
$$
We can expand $\Phi, C$ like ([33](#chiral)), ([34](#chiral)) because they are chiral superfields. Similarly, we get its hermitian conjugate term as
$$
    \begin{align}
        \left.\bar{C}^{3}\bar{W}\right| _ {\overline{\theta\theta}}
        &=
        \bar{C} _ {0}^{3}\bar{W} _ {\bar{J}}^{\bar{J}}
        +
        3\bar{C} _ {0}^{2}\bar{F}^{C}W _ {0}
        .
    \end{align}
$$
From Kähler potential, we obtain
$$
    \begin{align}
    &
    -3
    \left.
        \bar{C}Ce^{-K/3}
    \right| _ {\theta\theta\overline{\theta\theta}}
    \nonumber
    \\
    &=
    -3
    \bar{F}^{C}F^{C}
    \left.
        e^{-K/3}
    \right| _ {0}
    -3
    \bar{F}^{C}C _ {0}
    \left.
        e^{-K/3}
    \right| _ {\theta\theta}
    \nonumber
    \\
    &\qquad
    -3
    \bar{C} _ {0}F^{C}
    \left.
        e^{-K/3}
    \right| _ {\overline{\theta\theta}}
    -3
    \bar{C} _ {0}C _ {0}
    \left.
        e^{-K/3}
    \right| _ {\theta\theta\overline{\theta\theta}}
    \nonumber
    \\
    &=
    -3\bar{F}^{C}F^{C}e^{-K _ {0}/3}
    +
    \bar{F}^{C}C _ {0}e^{-K _ {0}/3}\partial _ {I}K _ {0}F^{I}
    \nonumber
    \\
    &\qquad
    +
    \bar{C} _ {0}F^{C}e^{-K _ {0}/3}\partial _ {\bar{J}}K _ {0}F^{\bar{J}}
    \nonumber
    \\
    &\qquad
    +
    e^{-K _ {0}/3}|C _ {0}|^2
    \left(
        \partial _ {I\bar{J}}K _ {0}F^{I}F^{\bar{J}}
        -
        \frac{1}{3}\partial _ {I}K _ {0}\partial _ {\bar{J}}K _ {0}F^{I}F^{\bar{J}}
    \right)
    .
    \end{align}
$$
Thus we found $F$-term ([30](#F-term1)) as
<a name="F-term2"></a>
$$
    \begin{align}
    &
    -3\bar{F}^{C}F^{C}e^{-K _ {0}/3}
    +
    \bar{F}^{C}C _ {0}e^{-K _ {0}/3}K _ {I}F^{I}
    \nonumber
    \\
    &\qquad
    +
    \bar{C} _ {0}F^{C}e^{-K _ {0}/3}K _ {\bar{J}}F^{\bar{J}}
    \nonumber
    \\
    &\qquad
    +
    e^{-K _ {0}/3}
    |C _ {0}|^2
    \left(
        K _ {I\bar{J}}F^{I}F^{\bar{J}}
        -
        \frac{1}{3}K _ {I}K _ {\bar{J}}F^{I}F^{\bar{J}}
    \right)       
    \nonumber
    \\
    &\qquad
    +
    C _ {0}^3W _ {I}F^{I}
    +
    3C _ {0}^{2}F^{C}W _ {0}
    \nonumber
    \\
    &\qquad
    +
    \bar{C} _ {0}^{3}\bar{W} _ {\bar{J}}F^{\bar{J}}
    +
    3\bar{C} _ {0}^{2}\bar{F}^{C}W _ {0}
    .
    \end{align}
$$
The equation of motion with respect to $F^{C}$ and $\bar{F}^{C}$ are
$$
    \begin{equation}
        \left\{ 
        \begin{alignedat}{1}
            F^{C}
            &=
            \frac{1}{3}C _ {0}K _ {I}F^{I}
            +
            \bar{C} _ {0}^{2}\bar{W} _ {0}e^{K _ {0}/3}
            ,
            \\
            \bar{F}^{C}
            &=
            \frac{1}{3}\bar{C} _ {0}K _ {\bar{J}}F^{\bar{J}}
            +
            C _ {0}^{2}W _ {0}e^{K _ {0}/3}
            .            
        \end{alignedat}
        \right.
    \end{equation}
$$
Inserting those relations into the eq. ([37](#F-term2)), we get
$$
    \begin{align}
    &
        -3
        \left(
            \frac{1}{3}C _ {0}K _ {I}F^{I}
            +
            \bar{C} _ {0}^{2}\bar{W} _ {0}e^{K _ {0}/3}            
        \right)
        \left(
            \frac{1}{3}\bar{C} _ {0}K _ {\bar{J}}F^{\bar{J}}
            +
            C _ {0}^{2}W _ {0}e^{K _ {0}/3}
        \right)
        e^{-K _ {0}/3}
    \nonumber
    \\
    &\qquad
        +
        \left(
            \frac{1}{3}\bar{C} _ {0}K _ {\bar{J}}F^{\bar{J}}
            +
            C _ {0}^{2}W _ {0}e^{K _ {0}/3}
        \right)
        C _ {0}e^{-K _ {0}/3}K _ {I}F^{I}
    \nonumber
    \\
    &\qquad
        +
        \bar{C} _ {0}
        \left(
            \frac{1}{3}C _ {0}K _ {I}F^{I}
            +
            \bar{C} _ {0}^{2}\bar{W} _ {0}e^{K _ {0}/3}            
        \right)
        e^{-K _ {0}/3}K _ {\bar{J}}F^{\bar{J}}
    \nonumber
    \\
    &\qquad
        +
        e^{-K _ {0}/3}|C _ {0}|^2
        \left(
            K _ {I\bar{J}}F^{I}F^{\bar{J}}
            -
            \frac{1}{3}K _ {I}K _ {\bar{J}}F^{I}F^{\bar{J}}
        \right)
    \nonumber   
    \\
    &\qquad
        +
        C _ {0}^{3}W _ {I}F^{I}
        +
        \bar{C} _ {0}^{3}\bar{W} _ {\bar{J}}F^{\bar{J}}
    \nonumber   
    \\
    &\qquad
        +
        3C _ {0}^2
        \left(
            \frac{1}{3}C _ {0}K _ {I}F^{I}
            +
            \bar{C} _ {0}^{2}\bar{W} _ {0}e^{K _ {0}/3}
        \right)
        W _ {0}
    \nonumber   
    \\
    &\qquad
        +
        3\bar{C} _ {0}^2
        \left(
            \frac{1}{3}\bar{C} _ {0}K _ {\bar{J}}F^{\bar{J}}
            +
            C _ {0}^{2}W _ {0}e^{K _ {0}/3}
        \right)
        \bar{W} _ {0}
    \nonumber
    \\
    &=
    C _ {0}^{3}W _ {0}K _ {I}F^{I}
    +
    \bar{C} _ {0}^{3}\bar{W} _ {0}K _ {\bar{J}}F^{\bar{J}}
    \nonumber
    \\
    &\qquad
    +
    e^{-K _ {0}/3}
    |C _ {0}|^2K _ {I\bar{J}}F^{I}F^{\bar{J}}
    +
    3
    |C _ {0}|^{4}|W _ {0}|^{2}e^{K _ {0}/3}
    \nonumber
    \\
    &\qquad
    +
    C _ {0}^{3}W _ {I}F^{I}
    +
    \bar{C} _ {0}^3\bar{W} _ {\bar{J}}F^{\bar{J}}
    .
    \end{align}
$$
Again, EOM to the $F^{I}, F^{\bar{J}}$ are
$$
    \begin{equation}
        \left\{
        \begin{alignedat}{1}
            F^{\bar{J}}
            &=
            \frac{C _ {0}^{3}}{|C _ {0}|^{2}}e^{K _ {0}/3}K^{I\bar{J}}
            \left(
                -
                W _ {0}K _ {I}
                -
                W _ {I}
            \right)
            ,
            \\
            F^{I}
            &=
            \frac{\bar{C} _ {0}^{3}}{|C _ {0}|^2}e^{K _ {0}/3}K^{I\bar{J}}
            \left(
                -
                \bar{W} _ {0}K _ {\bar{J}}
                -
                W _ {\bar{J}}
            \right)
            .            
        \end{alignedat}
        \right.
    \end{equation}
$$
Thus, we obtain
$$
    \begin{align}
    &
    C _ {0}^{3}
    W _ {0}K _ {I}
    \cdot
        \frac{\bar{C} _ {0}^{3}}{|C _ {0}|^2}e^{K _ {0}/3}K^{I\bar{J}}
        \left(
            -
            \bar{W} _ {0}K _ {\bar{J}}
            -
            W _ {\bar{J}}
        \right)
    \nonumber
    \\
    &\quad
    +\bar{C} _ {0}^{3}\bar{W} _ {0}K _ {\bar{J}}
    \cdot
        \frac{C _ {0}^{3}}{|C _ {0}|^{2}}e^{K _ {0}/3}K^{I\bar{J}}
        \left(
            -
            W _ {0}K _ {I}
            -
            W _ {I}
        \right)
    \nonumber
    \\
    &\quad
    +
    e^{K _ {0}/3}|C _ {0}|^{4}K _ {I\bar{J}}K^{I\bar{J^{\prime}}}K^{I^{\prime}\bar{J}}
        \left(
            -
            \bar{W} _ {0}K _ {\bar{J^{\prime}}}
            -
            W _ {\bar{J^{\prime}}}
        \right)
        \left(
            -
            W _ {0}K _ {I^{\prime}}
            -
            W _ {I^{\prime}}
        \right)
    \nonumber   
    \\
    &\quad
    +
    3
    e^{K _ {0}}|C _ {0}|^{4}|W _ {0}|^2
    \nonumber   
    \\
    &\quad
    +
    C _ {0}^{3}W _ {I}
    \cdot
        \frac{\bar{C} _ {0}^{3}}{|C _ {0}|^2}e^{K _ {0}/3}K^{I\bar{J}}
        \left(
            -
            \bar{W} _ {0}K _ {\bar{J}}
            -
            W _ {\bar{J}}
        \right)
    \nonumber
    \\
    &\quad
    +
    \bar{C}^{0}W _ {\bar{J}}
    \cdot
        \frac{C _ {0}^{3}}{|C _ {0}|^{2}}e^{K _ {0}/3}K^{I\bar{J}}
        \left(
            -
            W _ {0}K _ {I}
            -
            W _ {I}
        \right)
    \nonumber   
    \\
    &=
    -
    e^{K _ {0}/3}|C _ {0}|^{4}\left[\vphantom{\dfrac{1}{2}}\right.
        K^{I\bar{J}}W _ {I}W _ {\bar{J}}
        +
        K^{I\bar{J}}W _ {I}K _ {\bar{J}}\bar{W} _ {0}
    \nonumber
    \\
    &\qquad
    +
    K^{I\bar{J}}K _ {I}W _ {\bar{J}}W _ {0}
    +
    K^{I\bar{J}}K _ {I}K _ {\bar{J}}|W _ {0}|^2
    -
    3|W _ {0}|^2
    \left.\vphantom{\dfrac{1}{2}}\right]
    \nonumber
    \\
    &\equiv
    -
    e^{K _ 0}
    \left(
        K^{I\bar{J}}
        (D _ {I}W _ {0})(D _ {\bar{J}}W _ {0})
        -
        3|W _ {0}|^2
    \right)    
    \end{align}
$$
where
$$
    \begin{equation}
        D _ {I}W _ {0}
        \equiv
        W _ {I}
        +
        K _ {I}W _ {0}
    \end{equation}
$$
and at the last line (i.e. eq. (42)) we fixed the gauge as 
$$
    \begin{equation}
        C _ {0}
        =
        \bar{C} _ {0}
        =
        e^{K _ {0}/6}
        .
    \end{equation}
$$


### Supplement and some notes

We list the relation which we did not mention in the previous discussion: 
$$
    \begin{align}
        W _ {\theta\theta}
        &=
        W _ {I}F^{I}
        ,
        \\
        \left.K\right| _ {\theta\theta}
        &=
        K _ {I}F^{I}
        ,
        \\
        \left.K\right| _ {\theta\theta\overline{\theta\theta}}
        &=        
        K _ {I\bar{J}}F^{I}F^{\bar{J}}
        ,
        \\
        \left.e^{-K/3}\right| _ {\theta\theta\overline{\theta\theta}}
        &=
        -\frac{1}{3}e^{-K _ {0}/3}
        \left(
            K _ {I\bar{J}}F^{I}F^{\bar{J}}
            -
            \frac{1}{3}K _ {I}K _ {\bar{J}}F^{I}F^{\bar{J}}
        \right)
        .
    \end{align}
$$














## Reference

1. <a name="AbeKobayashiOhkiSumita2012"></a>H. Abe, T. Kobayashi, H. Ohki, and K. Sumita, *“Superfield description of 10D SYM theory with magnetized extra dimensions,”* 2012, [doi: 10.1016/j.nuclphysb.2012.05.012](https://doi.org/10.1016/j.nuclphysb.2012.05.012).

2. <a name="AbeHigakiKobayashiOmura2007"></a>H. Abe, T. Higaki, T. Kobayashi, and Y. Omura, *“Moduli stabilization, F-term uplifting, and soft supersymmetry breaking terms,”* 2007, [doi: 10.1103/PhysRevD.75.025019](https://link.aps.org/doi/10.1103/PhysRevD.75.025019).

3. <a name="WessBagger"></a>J. Wess and J. Bagger, *"Supersymmetry and Supergravity."* Princeton, N.J: Princeton University Press, 1992.

[^1]: If there are two $V$s, for instance $\bar{\phi} _ {\bar{i}}(\partial _ {j}V)V$ or $\bar{\phi} _ {\bar{i}}\phi _ {j}V^2$, the term must not have the $D$ for the highest components. The term higher than $V^3$ should vanish by WZ gauge fixing, and no $V$ term also does not have the contribution for the equation of motion.

[^2]: Refer the exercise 2 in Section 7 in the textbook[[2](#WessBagger)].

[^3]: For example, the term not including $\theta^4$ like $\braket{\bar{\phi} _ {\bar{i}}}\phi _ {j}$ vanishes.

[^4]: More accurately, the term $\braket{A _ {i}}\partial _ {j}F _ {k}$ vanishes because of the integration by parts and the fact that $\partial _ {j}\braket{A _ {i}}=0$. The last condition is derived from the Lorentz invariance of the flux.
