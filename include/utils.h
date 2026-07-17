/**
 * @file utils.h
 * @brief En-tête pour les fonctions utiles
 *
 * @author [Votre nom]
 * @date [La date]
 */

#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * @brief Affiche un message d'erreur à l'écran
 *
 * @param message Le message d'erreur à afficher
 */
void erreur(const char *message);

/**
 * @brief Vérifie que la valeur entière est non négative
 *
 * @param value La valeur à vérifier
 * @return true Si la valeur est non négative, false sinon
 */
bool est_non_negatif(int value);

/**
 * @brief Vérifie que la valeur flottante est dans l'intervalle [0, 1]
 *
 * @param value La valeur à vérifier
 * @return true Si la valeur est dans l'intervalle [0, 1], false sinon
 */
bool est_dans_intervalle(double value);

/**
 * @brief Alloue dynamiquement un tableau de taille n
 *
 * @param n La taille du tableau à allouer
 * @return Un pointeur sur le tableau alloué, ou NULL si l'allocation a échoué
 */
void *allouer_tableau(int n);

/**
 * @brief Libère un tableau alloué dynamiquement
 *
 * @param tableau Le tableau à libérer
 */
void liberer_tableau(void *tableau);

#endif /* UTILS_H */