#include <iostream>
#include <fstream>
#include <cstring>
#include "declaration.h"
#include <string>
#ifndef __header_H__
#define __header_H__ 

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
    } 	 
}

void ajouter_recette(struct Recettes recette[100],int i)
{
	cout <<"Entrer le nom de la recette \n ";
    cin >> recette[i].nom ;
    cout <<"Entrer le nombre dingredient\n";
    cin >> recette[i].nbri ;
    for (int j=0 ; j<(recette[i].nbri); j++){
        cout << "Entrer le nom de  ingriedients"<< j+1 <<" \n";
        cin >> recette[i].ingredient[j] ;
        }
    cout <<" \n entrer le nombre d'etapes\n";
     
    cin >> recette[i].nbre;
    for (int j= 0 ; j <(recette[i].nbre) ; j++){            
	cout << "entrer l'etape  "<< j+1 <<" \n";
    cin >> recette[i].etape[j] ;
    import_recette_a_file(recette,i);
    }
}

void rechercher_par_ind(struct Recettes recette[100],int i,char m[100]){
	int j,k;
	
	for(j=0;j<i;j++){
		for(k=0; k<(recette[j].nbri) ;k++){
			if(true)//strcmp(recette[j].ingredient[k],m)==1)
			{
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



}

void modifier_recette(struct Recettes recette[100]){
	int option;
	int i;
    std::cin>>option;
	std::cout<<"Entre Id de lq recette ";
	std::cin>>i;
	if(option==1){//le titre

		std::cout<<"Enter le nouveau titre :";
		cin>>recette[i].nom;

		std::cout<<"titre modifier \n";
	}

	else if(option==2){// les ingredients
	 cout <<"Entrer le nombre dingredient\n";
    cin >> recette[i].nbri ;
    for (int j=0 ; j<(recette[i].nbri); j++){
        cout << "Entrer le nom de  ingriedients"<< j+1 <<" \n";
        cin >> recette[i].ingredient[j] ;
        }
	}

	else if(option==3){//les etapes
	cout <<" \n entrer le nombre d'etapes\n";
    cin >> recette[i].nbre;
    for (int j= 0 ; j <(recette[i].nbre) ; j++){            
	cout << "entrer l'etape  "<< j+1 <<" \n";
    cin >> recette[i].etape[j] ;
	}
 //import_recette_a_file(recette,i);
    }
}
//void import_file_to_recette(struct Recettes recette[100],int i){}	
#endif

/*
LeLivre << i+1 <<") "<<recette.etape[i] <<","
LeLivre << "/ Etapes : ";
 LeLivre << recette.ingredient[i]<< ", " ;
LeLivre <<"Ingredients : ";  
 LeLivre <<"Recette :\n"<<recette.nom <<"/ "; 
*/



























// *****************************************************************************
// Nom : menu
// Description : afficher les differents operation a lutilisatuer
// Paramètres :
//-------------------------
// *****************************************************************************
/*
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