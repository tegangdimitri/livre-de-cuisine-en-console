#include <iostream>
#include <fstream>
#include <cstring>
#include "declaration.h"
#include <string>
#include <stdio.h>

#ifndef __header_H__
#define __header_H__ 

struct Recettes recette[100];
int index_recette=0; //index des recette de 1 a 100
string NomRecherche ;
string line =" ";
char mot[100];//pour avoir un ;ot qu nivequ des different rechercher 

// *****************************************************************************
// Nom : import_recette_a_file
// Description : stocker le recette dans un fichier
// Paramètres : recette and i for index
// *****************************************************************************
void import_recette_a_file(struct Recettes recette[100],int i){

	const std::string fileName = "data.txt";
	std::ofstream file;
	
	file.open(fileName, std::ios::app);//ouvir le fichier en ;ode append
	
	file<<"{"<<"\n";
	file<<"Titre"<<recette[i].nom<<"\n";
	file<<"vous avez besion de "<<recette[i].nbri;
	file<<"Ingredients";//recette[i].nbri 
    for (int j=0 ; j< recette[i].nbri; j++){
        file<<recette[i].ingredient[j]<<"," ;
        }
	file<<"suiver les "<<recette[i].nbre<<"etape suivants";	
	file<<"Etapes"<<"\n";

    for (int j= 0 ; j <recette[i].nbre ; j++){            
    file<<recette[i].etape[j] ;

    file << "te;ps necessaire :" <<recette[i].temps;
    file<< "}";
    } 	 
}

// *****************************************************************************
// Nom : ajouter_recette
// Description : add recette to the structure 
// Paramètres : recette and i
// *****************************************************************************
void ajouter_recette(struct Recettes recette[100],int i)
{
	cout <<"Entrer le nom de la recette \n ";
    std::cin.ignore();
    getline(std::cin, recette[i].nom);
    cout <<"Entrer le nombre dingredient\n";
    cin >> recette[i].nbri ;
    for (int j=0 ; j<(recette[i].nbri); j++){
        cout << "Entrer le nom de  ingriedients"<< j+1 <<" \n";
         std::cin.ignore();
        getline(std::cin, recette[i].ingredient[j]);
        }
    cout <<" \n entrer le nombre d'etapes\n";
    cin >> recette[i].nbre;
    for (int j= 0 ; j <(recette[i].nbre) ; j++){            
	cout << "entrer l'etape  "<< j+1 <<" \n";
    std::cin.ignore();
      getline(std::cin, recette[i].etape[j]);
    }
    cout<< "enter le temps necessaire (en minute ) :";
	cin>>recette[i].temps;
}

// *****************************************************************************
// Nom : rechercher_par_ind
// Description : to seqrch for a recette with a particular ingridients
// Paramètres : recette ,i,m
// *****************************************************************************
void rechercher_par_ind(struct Recettes recette[100],int i,char m[100]){
	int j,k;
	bool trouver_recette_ing =false;
	for(j=0;j<i;j++){
		for(k=0; k<(recette[j].nbri) ;k++){
			if(strcmp(recette[j].ingredient[k].c_str(),m)==1)
			{
                trouver_recette_ing =true;
                cout<<"Titre :"<<recette[j].nom ;
                cout<<"No ingredients :"<<recette[j].nbri ;
				cout<<"les ingredients\n";
                for (int n=0 ; n<(recette[i].nbri); n++){
                cout<<recette[j].ingredient[n] ;
				}    
                cout<<"Etapes\n";
                for (int n= 0 ; n<(recette[i].nbre) ; n++){            
	            cout<<"Etape "<<+1<<"\n"<<recette[j].etape[n] ;
               }
		    }
		}
	}
    if(trouver_recette_ing =false){
        std::cout<<"Nous nqvons pqs trouver de recette contenant "<<m;
    }
}

// *****************************************************************************
// Nom : ;odifier_recette 
// Description : to changr specific things on q rectte such as name ,steps
// Paramètres :recette
// *****************************************************************************
void modifier_recette(struct Recettes recette[100]){
	int option;
	int i;
    std::cin>>option;
	std::cout<<"Entre Id de lq recette ";
	std::cin>>i;
	if(option==1){//le titre

		std::cout<<"Enter le nouveau titre :";
        std::cin.ignore();
		getline(std::cin, recette[i].nom);
		std::cout<<"titre modifier \n";
	}
	else if(option==2){// les ingredients
	 cout <<"Entrer le nombre dingredient\n";
    cin >> recette[i].nbri ;
    for (int j=0 ; j<(recette[i].nbri); j++){
        cout << "Entrer le nom de  ingriedients"<< j+1 <<" \n";
        std::cin.ignore();
          getline(std::cin, recette[i].ingredient[j]); 
        }
	}

	else if(option==3){//les etapes
	cout <<" \n entrer le nombre d'etapes\n";
    cin >> recette[i].nbre;
    for (int j= 0 ; j <(recette[i].nbre) ; j++){            
	cout << "entrer l'etape  "<< j+1 <<" \n";
    cin.ignore();
      getline(std::cin,recette[i].etape[j]);
	}
 //import_recette_a_file(recette,i);
    }
}

// *****************************************************************************
// Nom : import_file_to_recette
// Description : to add recette fro; q file to the structure 
// *****************************************************************************
void import_file_to_recette(struct Recettes recette[100],int i){




}	

// *****************************************************************************
// Nom : supprimer_recette
// Description : to delete a recette
// *****************************************************************************
void supprimer_recette(struct Recettes recette[100],int i){
	int j;
	std :: cout <<"Enter le titre de la recette \n";
	char a[100];
	for(j=0;j<i;j++){
		if(strcmp((recette[j].nom),a)==0){
			strcpy(recette[j].nom,recette[j+1].nom);
			recette[j].nbre=recette[j+1].nbre;
			recette[j].nbri=recette[j+1].nbri;
			recette[j].etape=recette[j+1].etape;
		}
	}
}

// *****************************************************************************
// Nom : affichier_recette
// Description : afficher les recette q lutilisateur-
// *****************************************************************************
void  affichier_recette(struct Recettes recette[100],int i){
	int j,k,l;
	for(j=0;j<i;j++){
		std::cout<<"Recette : ";
		std::cout<<recette[j].nom<<"/";
		std::cout<<"Ingredients :";
		for(k=0;k<recette[j].nbri;k++){
			std::cout<<recette[j].ingredient[k];
		}
		std::cout<<"/"<<"\n";
		std::cout<<"Temp necessaire "<<recette[j].temps;
		std::cout<<"Etapes \n";
		for(k=0;k<recette[j].nbre;k++){
			std::cout<<recette[j].etape[k];
		}
	}

}

// *****************************************************************************
// Nom : rechercher_par_nom
// Description : pour rechercher une recette qvec un nom specific
// Paramètres :
// *****************************************************************************
void rechercher_par_nom(struct Recettes recette[100],int i,char m[100]){




}

// *****************************************************************************
// Nom : tri_par_nom
// Description : pour effectue un tri des rectte a partir de leur noms
// Paramètres :
//-------------------------
// *****************************************************************************
void tri_par_nom(struct Recettes recette[100],int i,char m[100]){
    int j,k;
    for(j=0;j<(i-1);j++){
        for(k=0;k<i;k++){
            if(strcmp(recette[j].nom,recette[k].nom)==0){
                char a[100];
                strcpy(a,recette[j].nom);
                strcpy(recette[j].nom,recette[k].nom);
                strcpy(recette[k].nom,a);
            }
        }
    }

}

// *****************************************************************************
// Nom : tri_par_temps
// Description : pour effectue un tri qpqrtir du temps de preparatio0n
// Paramètres :
// *****************************************************************************
void tri_par_temps(struct Recettes recette[100],int i,char m[100]){
   int j,k;
    for(j=0;j<(i-1);j++){
        for(k=0;k<i;k++){
            if(strcmp(recette[j].temps,recette[k].temps)==0){
                int a;
                strcpy(a,recette[j].temps);
                strcpy(recette[j].temps,recette[k].temps);
                strcpy(recette[k].temps,a);
            }
        }
    }    
}

// *****************************************************************************
// Nom : menu
// Description : afficher les differents operation a lutilisatuer
// *****************************************************************************
bool menu_recette(){
std::cout<<"\n === === LIVRE DE RECETTES === === \n";
    std :: cout <<"Bien venue dans le livre de cuisine\n";
    std ::cout <<"1 --> ajouter une recette \n";
    std :: cout <<"2 --> rechercher \n";
    std :: cout <<"3 --> modifier une recette (nom/ingredients/etqpes)\n";
    std :: cout <<"4 --> suprimer\n";
    std :: cout <<"5 --> afficher\n";
    std :: cout <<"6 --> Sauvegarder\n";
    std :: cout <<"7 --> Effectue un tri\n";
    std :: cout <<"8 --> Exits\n";
    int entre ; /*l'emtrer de lutilisateur*/
    cin >> entre ;
    switch(entre){

        case 1:{
        ajouter_recette(recette,index_recette);
        index_recette++;
        return false;
        };

        case 2:{
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
			return false;
        }
        
        case 3:{
            std::cout<<"vous voulez modifier  1. le Titre \n2. les ingredient \n3. les etapes\n";
            modifier_recette(recette);
            return false;
        }

        case 4:{
            supprimer_recette(recette,index_recette);
            return false;
        }

        case 5:{
            affichier_recette(recette,index_recette);
            return false;
        }

        case 6:{
            return false;
        }

        case 7:{
        return true;
        }

        default:{
            std::cout<<"choiux invqlide \n";
            return false;
        }
    }
    return false;
}

#endif

/*
LeLivre << i+1 <<") "<<recette.etape[i] <<","
LeLivre << "/ Etapes : ";
 LeLivre << recette.ingredient[i]<< ", " ;
LeLivre <<"Ingredients : ";  
 LeLivre <<"Recette :\n"<<recette.nom <<"/ "; 
*/

// *****************************************************************************
// Nom : ajouter
// Description : Ajoute une recette 
// Paramètres :
//-------------------------
// *****************************************************************************
/*void ajouter(recettes Recettes)
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
*/