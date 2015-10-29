#ifndef tp3_h
#define tp3_h

//Structures
typedef struct Livre T_Livre;
struct Livre
{
    char titre[50];
    char auteur[50];
    char edition[50];
    unsigned short int disponible;
    T_Livre *suivant;
};


typedef struct Rayon T_Rayon;
struct Rayon
{
    char theme_rayon[50];
    unsigned short int nombre_livres;
    T_Livre *premier;
    T_Rayon *suivant;
};



typedef struct Biblio T_Biblio;
struct Biblio
{
    char nom[50];
    T_Rayon *premier;
};






//prototypes
T_Livre *creerLivre (char *titre, char *auteur, char *edition);
T_Rayon *creerRayon(char *theme);
T_Biblio *creerBiblio (char *nom);

int ajouterLivre(T_Rayon *rayon, T_Livre *livre);
int ajouterRayon(T_Biblio *biblio, T_Rayon *rayon);
void afficherBiblio(T_Biblio *biblio);
void afficherRayon(T_Rayon *rayon);
int emprunterLivre(T_Rayon *rayon, char* titre);
int supprimerLivre(T_Rayon *rayon, char* titre);
void supprimerRayon(T_Biblio *biblio, char *nom_rayon);
void trierTableau(char ***tab, int tailleTab);
void rechercherLivres(T_Biblio *biblio, char* critereTitre);




#endif /* tp3_h */






