#include "declaration.h"

struct Recettes recette;
int main(){
    fstream LeLivre("cuisine.txt", ios :: out | ios:: in | ios :: app);
    fstream livre("affichage.txt" , ios :: out | ios :: in | ios :: app); // elle vas permetre l'affichage du livre 
    std :: cout <<"bien venue dans le notre livre se cuisine\n";
     std ::cout <<"a --> ajouter\n";
    std :: cout <<"r --> rechercher\n";
    std :: cout <<"m --> modifier\n";
    std :: cout <<"s --> suprimer\n";
    char entre ; /*l'emtrer de lutilisateur*/
    cin >> entre ;
    switch (entre){
        // *****************************************************************************
// Nom : ajouter
// Description : Ajoute une recette 
// Paramètres : permet a un utilisateur d'ajouter une recette
//-------------------------
// *****************************************************************************
        case 'a':
        /*ici on rempli l'enregistrement d'une recette*/
        if (LeLivre.is_open()){
                cout <<"Entrer le nom de la recette \n ";
                cin >> recette.nom ;
                LeLivre <<"{\n";
                LeLivre <<"  Recette : {\n   nom : "<<recette.nom <<"\n "; 
                livre << recette.nom << "\n";
                cout <<" entrer le nombre dingredient\n";
                int nbri ; //nombre d'ingredient
                cin >> nbri ;
                LeLivre <<"  Ingredients : [\n ";   
                for (int i=0 ; i< nbri; i++){
                    cout << "entrer le nom de l'ingredient en position "<< i+1 <<" \n";
                    cin >> recette.ingredient[i] ;
                    LeLivre <<"   {\n      "<< recette.ingredient[i]<< "\n  }\n " ;
                    livre << recette.ingredient[i] <<"\n" ;

                }
                LeLivre <<"]\n ";
                LeLivre << "  Etapes : [\n";
                cout <<" \n entrer le nombre d'etapes\n";
                int nbre ; // nombre d'etape 
                cin >> nbre;
                for (int i = 0 ; i < nbre ; i++){
                    cout << "entrer l'etape en position "<< i <<"\n";
                    cin >> recette.etape[i] ;
                    LeLivre  <<"   {\n    "<<recette.etape[i] <<"\n   }\n";
                    livre << recette.etape <<"\n";
                    livre<< "/";
                }
                LeLivre <<"]\n";
            }
            break ;
            // *****************************************************************************
// Nom : rechercher_nom
// Description : recherche un recette a partir de son nom si elle existe un message est afficher a l'utilisateur
// Paramètres : l'utilisateur entre le non de la reccete qu'il recherche
//-------------------------
// *****************************************************************************
        case 'r':
            cout <<"entrer le nom de la recette\n";
            string NomRecherche ;
            cin >> NomRecherche ;
            string line ="";
            int i=0 ; 
            while( getline(livre , line  )){
                if(line ==  NomRecherche  ){
                    cout << "la recette chercher existe\n"<<i;
                    string affiche="";
                    cout<<line<<endl;
                    break;
                    
                    
                }
                std::string name{" "};
                    livre >>name;
                    cout << name;
                i=i+1 ;
            }
        
        string affiche;
            
       while(getline(LeLivre , line)){
        getline(LeLivre , line) >> affiche ;
       }     



    }
    return 0; 
}       