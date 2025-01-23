#include "declaration.h"
using namespace std;
/*strucrure representant une recette*/
struct Recettes{
    string nom;
    string ingredient[100];
    string etape[100];
};
struct Recettes recette;
int main(){
    ofstream LeLivre("cuisine.txt");
    std :: cout <<"bien venue dans le notre livre se cuisine\n";
     std :: cout <</*static_cast<char>(ChoixMenu::ajouter)<<*/"a --> ajouter\n";
    std :: cout <</*static_cast<char>(ChoixMenu::rechercher)<<*/"r --> rechercher\n";
    std :: cout <</*static_cast<char>(ChoixMenu::modifier)<<*/" m--> modifier\n";
    std :: cout <</*static_cast<char>(ChoixMenu::suprimer)<<*/" s--> suprimer\n";
    char entre ; /*l'emtrer de lutilisateur*/
    cin >> entre ;
    switch (entre){
        /*ici */
        case 'a':
        /*ici on rempli l'enregistrement d'une recette*/
            cout <<"Entrer le nom de la recette \n ";
            cin >> recette.nom ;
            LeLivre <<recette.nom <<"\n\n"; 

            cout <<" entrer le nombre dingredient\n";
            int nbri ; //nombre d'ingredient
            cin >> nbri ;

            for (int i=0 ; i< nbri; i++){
                cout << "entrer le nom de l'ingredient en position "<< i <<" \n";
                cin >> recette.ingredient[i] ;
                LeLivre << recette.ingredient[i]<< "\n" ;

            }
            
             cout <<" \n entrer le nombre d'etapes\n";
             int nbre ; // nombre d'etape 
             cin >> nbre;
             for (int i = 0 ; i < nbre ; i++){
                cout << "entrer l'etape en position "<< i <<" \n";
                cin >> recette.etape[i] ;
                LeLivre << recette.etape[i] <<"\n";
            }
    }
    return 0; 
}