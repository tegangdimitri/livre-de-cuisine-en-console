// *****************************************************************************
// Nom : ChoixMenu
// Description : enumeration pour choix utilisateur 
// *****************************************************************************
enum  ChoixMenu {
    ajouter = 'a',
    rechercher = 'r',
    modifier = 'm',
    suprimer = 's'
};

// *****************************************************************************
// Nom : recette
// Description : Structure représentant une recette
// *****************************************************************************
struct recette
{
	char nom[100];
	char ingerdients[200];
	int temps;
	char etapes[100][100];
	//etc
};


// *****************************************************************************
// Nom : recettes
// Description : Structure représentant un livre recette
// *****************************************************************************
struct recettes
{
    recette aux;
	int count=0;
	//etc
};