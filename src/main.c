#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "wave_equation.h"
#include "utils.h"

/**
 * Fonction principale pour la résolution numérique de l'équation d'onde unidimensionnelle.
 *
 * @param argc Nombre d'arguments passés à la fonction (inclus le nom du programme).
 * @param argv Tableau d'arguments passés à la fonction (inclus le nom du programme).
 * @return Code de retour de l'exécution de la fonction (0 signifiant succès, 1 signifiant échec).
 */
int main(int argc, char **argv) {
    // Vérification de l'appel correct de la fonction (au moins un argument requis)
    if (argc < 2) {
        fprintf(stderr, "Erreur : pas assez d'arguments\n");
        return 1;
    }

    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    // Récupération des paramètres d'entrée
    char *param_file = argv[1];
    int nx = get_param_int(param_file, "nx", 100);
    int nt = get_param_int(param_file, "nt", 100);
    double L = get_param_double(param_file, "L", 1.0);
    double c = get_param_double(param_file, "c", 1.0);

    // Résolution de l'équation d'onde
    double *u = solve_wave_equation(nx, nt, L, c);

    // Affichage des résultats
    printf("Résolution numérique de l'équation d'onde unidimensionnelle\n");
    printf("Taille de la grille : %d\n", nx);
    printf("Nombre de pas de temps : %d\n", nt);
    printf("Longueur de la grille : %f\n", L);
    printf("Vitesse de propagation : %f\n", c);
    printf("Résolution :\n");
    print_array(u, nx);

    // Libération de la mémoire allouée pour la grille
    free(u);

    return 0;
}