#include <iostream>
#include <fstream>
#include <string>
using namespace std ;
/*strucrure representant une recette*/
struct Recettes{
    string nom;
    string ingredient[100];
    string etape[100];
};
/*ennumeration permetant a l'utilisateur de faire un choix*/
enum  ChoixMenu {
    ajoute = 'a',
    rechercher = 'r',
    modifier = 'm',
    suprimer = 's'
};


void ajouter(struct Recettes recette);