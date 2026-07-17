#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

/**
 * @brief Initialise les paramètres de calcul
 *
 * @param params Structure contenant les paramètres de calcul
 * @param num_points Nombre de points de calcul
 * @param dx Ecart entre les points de calcul
 * @param dt Pas de temps entre les itérations
 * @param c Vitesse de propagation
 * @param L Longueur de la chaîne
 * @param u Condition initiale
 *
 * @return 0 si l'initialisation est réussie, -1 sinon
 */
int init_params(struct params *params, int num_points, double dx, double dt, double c, double L, double *u) {
    params->num_points = num_points;
    params->dx = dx;
    params->dt = dt;
    params->c = c;
    params->L = L;
    params->u = (double *)malloc(num_points * sizeof(double));
    if (params->u == NULL) {
        fprintf(stderr, "Erreur d'allocation de mémoire\n");
        return -1;
    }
    memcpy(params->u, u, num_points * sizeof(double));
    return 0;
}

/**
 * @brief Affiche les paramètres de calcul
 *
 * @param params Structure contenant les paramètres de calcul
 */
void affiche_params(struct params *params) {
    printf("Paramètres de calcul :\n");
    printf("Nombre de points : %d\n", params->num_points);
    printf("Ecart entre les points : %f\n", params->dx);
    printf("Pas de temps : %f\n", params->dt);
    printf("Vitesse de propagation : %f\n", params->c);
    printf("Longueur de la chaîne : %f\n", params->L);
}

/**
 * @brief Affiche les valeurs de la fonction
 *
 * @param u Tableau contenant les valeurs de la fonction
 * @param num_points Nombre de points de calcul
 */
void affiche_u(double *u, int num_points) {
    printf("Valeurs de la fonction :\n");
    for (int i = 0; i < num_points; i++) {
        printf("%f ", u[i]);
    }
    printf("\n");
}