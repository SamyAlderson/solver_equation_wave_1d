/**
 * @file src/test_wave_equation.c
 * @brief Tests unitaires de la fonction de résolution de l'équation d'onde unidimensionnelle
 */

#include "utils.h"
#include "wave_equation.h"

/**
 * @brief Test de la fonction de résolution de l'équation d'onde
 * 
 * @return int 0 si le test est réussi, non 0 sinon
 */
int test_wave_equation() {
    // Initialisation des paramètres de la simulation
    int n = 100;    // Nombre de points de discrétisation
    double L = 1.0; // Longueur de la zone de simulation
    double c = 1.0; // vitesse de propagation

    // Création d'un tableau de valeurs initiales
    double *u = malloc(n * sizeof(double));
    for (int i = 0; i < n; i++) {
        u[i] = 0.0; // Valeur initiale arbitraire
    }

    // Appel de la fonction de résolution
    wave_equation(u, n, L, c);

    // Vérification des résultats
    for (int i = 0; i < n; i++) {
        if (fabs(u[i] - i / n) > 1e-6) {
            printf("Test échoué : u[%d] = %f (attendu : %f)\n", i, u[i], i / n);
            return 1;
        }
    }

    free(u);
    return 0;
}

/**
 * @brief Test de la fonction de résolution avec des conditions de bord arbitraires
 * 
 * @return int 0 si le test est réussi, non 0 sinon
 */
int test_wave_equation_boundary_conditions() {
    // Initialisation des paramètres de la simulation
    int n = 100;    // Nombre de points de discrétisation
    double L = 1.0; // Longueur de la zone de simulation
    double c = 1.0; // vitesse de propagation

    // Création d'un tableau de valeurs initiales
    double *u = malloc(n * sizeof(double));
    for (int i = 0; i < n; i++) {
        u[i] = 0.0; // Valeur initiale arbitraire
    }

    // Appel de la fonction de résolution avec des conditions de bord arbitraires
    wave_equation(u, n, L, c, 0.0, 1.0, 2.0); // Conditions de bord arbitraires

    // Vérification des résultats
    for (int i = 0; i < n; i++) {
        if (fabs(u[i] - i / n) > 1e-6) {
            printf("Test échoué : u[%d] = %f (attendu : %f)\n", i, u[i], i / n);
            return 1;
        }
    }

    free(u);
    return 0;
}

int main() {
    printf("Test de la fonction de résolution de l'équation d'onde : %d\n", test_wave_equation());
    printf("Test de la fonction de résolution avec des conditions de bord arbitraires : %d\n", test_wave_equation_boundary_conditions());
    return 0;
}
```

```c
/**
 * @file include/wave_equation.h
 * @brief En-tête pour les fonctions de résolution de l'équation d'onde
 */

#ifndef WAVE_EQUATION_H
#define WAVE_EQUATION_H

/**
 * @brief Fonction de résolution de l'équation d'onde
 * 
 * @param u Tableau de valeurs initiales
 * @param n Nombre de points de discrétisation
 * @param L Longueur de la zone de simulation
 * @param c Vitesse de propagation
 * @param u_left Condition de bord gauche
 * @param u_right Condition de bord droit
 * @param u_center Condition de bord central
 */
void wave_equation(double *u, int n, double L, double c, double u_left, double u_right, double u_center);

#endif // WAVE_EQUATION_H
```

```c
/**
 * @file include/utils.h
 * @brief En-tête pour les fonctions utiles
 */

#ifndef UTILS_H
#define UTILS_H

/**
 * @brief Fonction d'allocation de mémoire pour un tableau de doubles
 * 
 * @param n Nombre d'éléments à allouer
 * @return void* Pointeur vers le tableau alloué
 */
void *malloc_double_array(int n);

/**
 * @brief Fonction de vérification de l'erreur
 * 
 * @param code erreur à vérifier
 * @return int 0 si l'erreur est réussie, non 0 sinon
 */
int check_error(int code);

#endif // UTILS_H