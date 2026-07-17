/**
 * @file src/wave_equation.c
 * @brief Fonction de résolution de l'équation d'onde unidimensionnelle
 *
 * Cette fonction utilise la méthode des différences finies pour résoudre l'équation
 * d'onde unidimensionnelle.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "wave_equation.h"
#include "utils.h"

/**
 * @brief Fonction de résolution de l'équation d'onde unidimensionnelle
 *
 * Cette fonction prend en entrée les paramètres suivants :
 * - x : point de résolution
 * - t : temps de résolution
 * - c : vitesse de propagation
 * - u : condition initiale
 * - u_left : condition de bord gauche
 * - u_right : condition de bord droit
 *
 * Elle retourne la valeur de la solution à l'endroit et au temps donnés.
 */
double wave_equation(double x, double t, double c, double (*u)(double), double u_left, double u_right) {
    int N = 100; // nombre de points pour la discrétisation
    double dx = (u_right - u_left) / (N - 1); // pas de discrétisation
    double dt = 0.01; // pas de temps
    int i = (int) ((x - u_left) / dx); // indice de la cellule qui contient le point de résolution
    int j = (int) (t / dt); // indice du temps de résolution
    double u_ij = u(i * dx); // valeur initiale de la solution
    for (int n = 0; n <= j; n++) {
        u_ij = u_ij + dt * (c * c / (dx * dx)) * (u(i * dx + dx) - 2 * u(i * dx) + u(i * dx - dx));
    }
    return u_ij;
}

/**
 * @brief Fonction de résolution de l'équation d'onde unidimensionnelle avec conditions de bord arbitraires
 *
 * Cette fonction est similaire à la fonction wave_equation, mais elle prend en compte
 * les conditions de bord arbitraires.
 */
double wave_equation_arbitraires(double x, double t, double c, double (*u)(double), double u_left, double u_right) {
    int N = 100; // nombre de points pour la discrétisation
    double dx = (u_right - u_left) / (N - 1); // pas de discrétisation
    double dt = 0.01; // pas de temps
    int i = (int) ((x - u_left) / dx); // indice de la cellule qui contient le point de résolution
    int j = (int) (t / dt); // indice du temps de résolution
    double u_ij = u(i * dx); // valeur initiale de la solution
    for (int n = 0; n <= j; n++) {
        u_ij = u_ij + dt * (c * c / (dx * dx)) * (u(i * dx + dx) - 2 * u(i * dx) + u(i * dx - dx));
        if (i == 0) {
            u_ij = u_left; // condition de bord gauche
        } else if (i == N - 1) {
            u_ij = u_right; // condition de bord droit
        }
    }
    return u_ij;
}
```

```c
/**
 * @file src/utils.c
 * @brief Fonctions utiles
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "utils.h"

/**
 * @brief Fonction de condition initiale
 *
 * Cette fonction prend en entrée un double et retourne une valeur de dépendance
 * linéaire en fonction de x.
 */
double condition_initiale(double x) {
    return sin(x);
}

/**
 * @brief Fonction de condition de bord gauche
 *
 * Cette fonction prend en entrée un double et retourne une valeur constante.
 */
double condition_bord_gauche(double x) {
    return 0;
}

/**
 * @brief Fonction de condition de bord droit
 *
 * Cette fonction prend en entrée un double et retourne une valeur constante.
 */
double condition_bord_droit(double x) {
    return 1;
}
```

```c
/**
 * @file src/test_wave_equation.c
 * @brief Tests unitaires de la fonction de résolution
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "wave_equation.h"
#include "utils.h"

/**
 * @brief Test de la fonction wave_equation
 */
void test_wave_equation() {
    double x = 1.0;
    double t = 0.1;
    double c = 1.0;
    double (*u)(double) = condition_initiale;
    double u_left = condition_bord_gauche(1.0);
    double u_right = condition_bord_droit(1.0);

    double result = wave_equation(x, t, c, u, u_left, u_right);
    printf("Resultat de la fonction wave_equation : %f\n", result);
}

int main() {
    test_wave_equation();
    return 0;
}
```

```c
/**
 * @file include/wave_equation.h
 * @brief En-tête pour les fonctions de résolution
 */

#ifndef WAVE_EQUATION_H
#define WAVE_EQUATION_H

/**
 * @brief Fonction de résolution de l'équation d'onde unidimensionnelle
 *
 * Cette fonction prend en entrée les paramètres suivants :
 * - x : point de résolution
 * - t : temps de résolution
 * - c : vitesse de propagation
 * - u : condition initiale
 * - u_left : condition de bord gauche
 * - u_right : condition de bord droit
 *
 * Elle retourne la valeur de la solution à l'endroit et au temps donnés.
 */
double wave_equation(double x, double t, double c, double (*u)(double), double u_left, double u_right);

/**
 * @brief Fonction de résolution de l'équation d'onde unidimensionnelle avec conditions de bord arbitraires
 *
 * Cette fonction est similaire à la fonction wave_equation, mais elle prend en compte
 * les conditions de bord arbitraires.
 */
double wave_equation_arbitraires(double x, double t, double c, double (*u)(double), double u_left, double u_right);

#endif
```

```c
/**
 * @file include/utils.h
 * @brief En-tête pour les fonctions utiles
 */

#ifndef UTILS_H
#define UTILS_H

/**
 * @brief Fonction de condition initiale
 *
 * Cette fonction prend en entrée un double et retourne une valeur de dépendance
 * linéaire en fonction de x.
 */
double condition_initiale(double x);

/**
 * @brief Fonction de condition de bord gauche
 *
 * Cette fonction prend en entrée un double et retourne une valeur constante.
 */
double condition_bord_gauche(double x);

/**
 * @brief Fonction de condition de bord droit
 *
 * Cette fonction prend en entrée un double et retourne une valeur constante.
 */
double condition_bord_droit(double x);

#endif