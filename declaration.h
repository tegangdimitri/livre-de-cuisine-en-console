#include <iostream>
#include <fstream>
#include <string>
using namespace std ;
/*ennumeration permetant a l'utilisateur de faire un choix*/
enum  ChoixMenu {
    ajout = 'a',
    rechercher = 'r',
    modifier = 'm',
    suprimer = 's'
};

enum  ChoixMenu menu (char choix);
void ajouter(char c);