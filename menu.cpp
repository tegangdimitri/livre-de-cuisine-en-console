#include "declaration.h"


/*cette fonction vas permetre a lutilisateur de faire un choix */
enum  ChoixMenu menu (char choix , enum ChoixMenu choixdefine ){
   
    
    if (choix==static_cast<char>(ChoixMenu::ajouter) || choix == static_cast<char>(ChoixMenu::rechercher) || choix== static_cast<char>(ChoixMenu::modifier)|| choix == static_cast<char>(ChoixMenu::suprimer)){
        choix = static_cast <enum ChoixMenu>(choixdefine);
        return choixdefine;
    }
    
}