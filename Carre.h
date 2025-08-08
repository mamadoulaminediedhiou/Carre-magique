#ifndef _Carre_h
#define _Carre_h
#define NB_MAX 20

/*Fonction d'initialisation de la matrice*/
void initialiser_matrice(int t[NB_MAX][NB_MAX],int n);

/*Fonction recursive pour construire le carre magique*/
void placer(int t[NB_MAX][NB_MAX],int n,int i,int j);
void placer_etape(int t[NB_MAX][NB_MAX],int n,int i,int j);

/*Fonction qui verifie si la matrice est magique*/
int  est_magique(int t[NB_MAX][NB_MAX],int n);

/*Fonction d'affichage de la matrice*/
void afficher(int t[NB_MAX][NB_MAX],int n);

#endif
