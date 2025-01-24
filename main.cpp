
#include <iostream>
#include <stdio.h>
//#include "declaration.h"
#include "header.h" 


struct Recettes recette[100];
int index_recette=0;//pour les recette de 1-100
string NomRecherche ;
string line =" ";
char mot[100];//pour avoir le titre et lingredient au niveau e la recherche
int main(){
    //fstream LeLivre("cuisine.txt", ios :: out | ios:: in | ios :: app);
    std::cout<<"\n === === LIVRE DE RECETTES === === \n";
    std :: cout <<"Bien venue dans le livre de cuisine\n";
    std ::cout <<"a --> ajouter\n";
    std :: cout <<"r --> rechercher\n";
    std :: cout <<"m --> modifier\n";
    std :: cout <<"s --> suprimer\n";
    std :: cout <<"af --> afficher\n";
    std :: cout <<"e --> exits\n";
    char entre ; /*l'emtrer de lutilisateur*/
    cin >> entre ;
    switch(entre){

        case ('a'|'A'):{
        ajouter_recette(recette,index_recette);
        index_recette++;
        break;
        };

        case ('r'):{
            std::cout<<"vous avez choisir l'option rechercher .\n";
            std::cout<<"vous voulez rechercher par noms(1) ou par ingredients(0)\n ";
            int option;
            std::cin>>option;
            if(option==1){
                 std::cout<<"enter nom de la recherche :";
                std::cin>>mot;

            }
            else if(option==0){
                std::cout<<"enter lingredient :";
                std::cin>>mot; 
               rechercher_par_ind(recette,index_recette,mot);

            }
            else{
                std::cout<<"erreur d'entre \n";
            }

        }
        
        case ('m'):{
            std::cout<<"vous voulez modifier  1. le Titre \n2. les ingredient \n3. les etapes\n";
            modifier_recette(recette);
            break;


        }
    

    }
    return 0; 
}




































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