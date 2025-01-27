
#include <iostream>
#include <stdio.h>
//#include "declaration.h"
#include "header.h" 




int main(){
    while(true){
        menu_recette();

        if(menu_recette()){
            break;
        }
    }
    return 0; 
}
//fstream LeLivre("cuisine.txt", ios :: out | ios:: in | ios :: app);




































/*ici on rempli l'enregistrement d'une recette*/
/*
 if (LeLivre.is_open()){
                cout <<"Entrer le nom de la recette \n ";
                cin >> recette.nom ;
                LeLivre <<"Recette :\n"<<recette.nom <<"/ "; 

                cout <<" entrer le nombre dingredient\n";
                int nbri ; //nombre d'ingredient
                cin >> nbri ;
                LeLivre <<"Ingredients : ";   
                for (int i=0 ; i< nbri; i++){
                    cout << "entrer le nom de l'ingredient en position "<< i+1 <<" \n";
                    cin >> recette.ingredient[i] ;
                    LeLivre << recette.ingredient[i]<< ", " ;

                }
                LeLivre << "/ Etapes : ";
                cout <<" \n entrer le nombre d'etapes\n";
                int nbre ; // nombre d'etape 
                cin >> nbre;
                for (int i = 0 ; i < nbre ; i++){
                    cout << "entrer l'etape en position "<< i <<" \n";
                    cin >> recette.etape[i] ;
                    LeLivre << i+1 <<") "<<recette.etape[i] <<",";
                }
                LeLivre <<"\n";
            }
            break ;
            */