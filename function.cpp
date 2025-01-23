#include <iostream>
#include <fstream>
#include <cstring>
#include "donnee.h"




// *****************************************************************************
// Nom : menu
// Description : afficher les differents operation a lutilisatuer
// Paramètres :
//-------------------------
// *****************************************************************************
void menu (){
    std::cout<<"=== === LIVRE DE RECETTES === === \n";
    std :: cout <<static_cast<char>(ChoixMenu::ajouter)<<" --> ajouter\n";
    std :: cout <<static_cast<char>(ChoixMenu::rechercher)<<" --> rechercher\n";
    std :: cout <<static_cast<char>(ChoixMenu::modifier)<<" --> modifier\n";
    std :: cout <<static_cast<char>(ChoixMenu::suprimer)<<" --> suprimer\n";
    enum ChoixMenu choixdefine ;
    char choix ;
    std :: cin >>  choix;
    if (choix=static_cast<char>(ChoixMenu::ajouter) || choix == static_cast<char>(ChoixMenu::rechercher) || choix== static_cast<char>(ChoixMenu::modifier)|| choix == static_cast<char>(ChoixMenu::suprimer)){
        choix = static_cast <enum ChoixMenu>(choixdefine);
    }
}


// *****************************************************************************
// Nom : ajouter
// Description : Ajoute une recette 
// Paramètres :
//-------------------------
// *****************************************************************************
void ajouter(recettes Recettes)
{
	int i;
	int n=0;
	Recettes.count++;
	std::cout<<"enter le titre de la nouvelle recette : \n";
	std::cin.getline(Recettes.aux.nom,sizeof(Recettes.aux.nom));
	std::cout<<"entrer les ingredients \n";
	std::cin.getline(Recettes.aux.ingerdients,sizeof(Recettes.aux.ingerdients));
	std::cout<<"entre le nombre detape necessaire \n";
	std::cin>>n;
	std::cout<<"enter les instruction pour chaque etape\n";
	for(i=1;i<=n;i++)
	{
		std::cout<<"Etape "<<i;
		std::cin>>Recettes.aux.etapes[Recettes.count][i];
	}
}


// *****************************************************************************
// Nom : rechercher_nom
// Description : recherche un recette a partir de son nom 
// Paramètres :
//-------------------------
// *****************************************************************************
void rechercher_nom(){
    
}


// *****************************************************************************
// Nom : rechercher_ingredients
// Description : rechercher une recette a parti de cest ingredients
// Paramètres :
//-------------------------
// *****************************************************************************
void rechercher_ingredients(){

}


// *****************************************************************************
// Nom : modifier
// Description : modifi une recette
// Paramètres :
//-------------------------
// *****************************************************************************
void modifier(){

}


// *****************************************************************************
// Nom : suppprimer
// Description : supprime une recette
// Paramètres :
//-------------------------
// *****************************************************************************
void supprimer(){

}
 /*
 
 fonction pour liste 


 */

nnnn
