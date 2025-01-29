#include <iostream>
#include <fstream>
#include <string>

using namespace std ;

/*strucrure representant une recette*/
struct Recettes{
    string nom;
    string ingredient[100];
    string etape[100];
    int nbri;//nombre d'ingredient
    int nbre; // nombre d'etape
};





