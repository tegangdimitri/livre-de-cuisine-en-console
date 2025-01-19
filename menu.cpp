#include<iostream>
enum  ChoixMenu {
    ajouter = 'a',
    rechercher = 'r',
    modifier = 'm',
    suprimer = 's'
};
void menu () ;
int main (){
     menu ();
    return 0;
}
void menu (){
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