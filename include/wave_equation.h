#ifndef WAVE_EQUATION_H
#define WAVE_EQUATION_H

/**
 * @file wave_equation.h
 * @brief En-tête pour les fonctions de résolution de l'équation d'onde unidimensionnelle
 */

/**
 * @defgroup wave_equation Fonctions de résolution de l'équation d'onde
 * @{
 */

/**
 * @brief Structure représentant les paramètres de l'équation d'onde
 */
typedef struct {
    double c; /**< Vitesse de propagation */
    double L; /**< Longueur de la zone étudiée */
    int N;    /**< Nombre de points de discrétisation */
} wave_parameters_t;

/**
 * @brief Fonction de résolution de l'équation d'onde
 *
 * @param params Paramètres de l'équation d'onde
 * @param u Initialisation des valeurs initiales de l'équation d'onde
 * @param t Temps de simulation
 *
 * @return 0 si la résolution est réussie, erreur sinon
 */
int wave_equation(wave_parameters_t params, double (*u)(int, int), double* t);

/**
 * @brief Fonction de mise à jour des conditions de bord
 *
 * @param params Paramètres de l'équation d'onde
 * @param u Valeurs actuelles de l'équation d'onde
 *
 * @return 0 si la mise à jour est réussie, erreur sinon
 */
int update_boundary_conditions(wave_parameters_t params, double (*u)(int, int));

/**
 * @brief Fonction de mise à jour des valeurs de l'équation d'onde
 *
 * @param params Paramètres de l'équation d'onde
 * @param u Valeurs actuelles de l'équation d'onde
 *
 * @return 0 si la mise à jour est réussie, erreur sinon
 */
int update_wave_equation(wave_parameters_t params, double (*u)(int, int));

/**
 * @}
 */

#endif /* WAVE_EQUATION_H */