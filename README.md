# solver_equation_wave_1d
[![C](https://img.shields.io/badge/Langue-C-blue.svg)](https://fr.wikipedia.org/wiki/C_(langage_de_programmation))
[![MIT License](https://img.shields.io/badge/Licence-MIT-orange.svg)](https://opensource.org/licenses/MIT)
[![CI](https://github.com/tony-mk/solver_equation_wave_1d/actions/workflows/main.yml/badge.svg)](https://github.com/tony-mk/solver_equation_wave_1d/actions/workflows/main.yml)

## Description

Le projet solver_equation_wave_1d est une implémentation numérique de l'équation d'onde unidimensionnelle. L'équation d'onde est une équation différentielle qui décrit la propagation d'une onde dans un milieu linéaire. Cette équation est essentielle en physique pour décrire des phénomènes tels que la propagation des ondes sonores, électromagnétiques ou encore en mécanique quantique.

## Fonctionnalités

- Résolution numérique de l'équation d'onde unidimensionnelle
- Implémentation en C pour une exécution rapide
- Tests unitaires pour garantir la qualité du code

## Installation

Pour installer le projet, vous devez disposer d'un environnement de développement avec un compilateur C (par exemple, GCC). Vous pouvez cloner le dépôt en utilisant la commande suivante :
```bash
git clone https://github.com/tony-mk/solver_equation_wave_1d.git
```
Une fois le dépôt cloné, vous pouvez compiler le code en exécutant la commande suivante :
```bash
make
```
Cela compilera le code source et générera un exécutable nommé `solver_equation_wave_1d`.

## Usage avec exemples

Pour utiliser le programme, vous pouvez exécuter le suivant :
```bash
./solver_equation_wave_1d -h
```
Cela affichera l'aide et les options disponibles.

Vous pouvez également utiliser le programme avec un exemple d'entrée :
```bash
./solver_equation_wave_1d -i example_input.txt
```
Cela exécutera le programme avec l'entrée contenue dans le fichier `example_input.txt`.

## Architecture du projet

Le projet est composé de plusieurs fichiers :

- `src/main.c` : Fichier principal qui contient la fonction principale de l'application.
- `src/wave_equation.c` : Fichier qui contient la fonction de résolution de l'équation d'onde.
- `src/utils.c` : Fichier qui contient les fonctions utiles (initialisation, affichage).
- `src/test_wave_equation.c` : Fichier qui contient les tests unitaires de la fonction de résolution.
- `include/wave_equation.h` : En-tête pour les fonctions de résolution.
- `include/utils.h` : En-tête pour les fonctions utiles.

## Contribuer

Pour contribuer au projet, vous pouvez cloner le dépôt et soumettre des pull requests avec vos modifications. Nous suivons les règles de codage et de documentation suivantes :

- Code de niveau production, jamais de prototypes
- Complexité cyclomatique < 10 par fonction
- Longueur des fonctions < 50 lignes
- Documentation : 100% des fonctions publiques documentées
- Tests : Couverture minimale 80%

## Licence

Ce projet est sous licence MIT. Vous pouvez utiliser, modifier et distribuer le code sous les conditions suivantes :

* Vous devez inclure une copie de la licence dans toutes les copies ou modifications du code.
* Vous ne pouvez pas utiliser le nom de l'auteur ou le nom du projet pour promouvoir des produits ou services non liés au projet.

Nous apprécions votre contribution et nous vous remercions d'avoir utilisé notre code !