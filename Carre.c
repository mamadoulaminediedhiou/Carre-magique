#include<stdio.h>
#include<stdlib.h>
#include "Carre.h"
/*Fonction d'initialisation de la matrice*/
void initialiser_matrice(int t[NB_MAX][NB_MAX],int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			t[i][j]=0;
		}
	}
	t[n][(n+1)/2]=1;
}

/*Fonction recursive pour construire le carre magique*/
void placer(int t[NB_MAX][NB_MAX],int n,int i,int j){
	
	
	if(est_magique(t,n)){
		return;
	}
	int k=t[i][j];
	int i1=i;
	int j1=j;
	
	if(i==n){
		i=0;
	}
	if(j==n){
		j=0;
	}
	/*Si la case est vide on place le nombre suivante*/
	if(t[i+1][j+1]==0){
		t[i+1][j+1]=k+1;
		//afficher(t,n);
		//printf("\n");
		placer(t,n,i+1,j+1);
	}
	/*Sinon le nombre suivant est placé à la case d'indice (i-1,j)*/
	else{
		t[i1-1][j1]=k+1;
		//afficher(t,n);
		//printf("\n");
		placer(t,n,i1-1,j1);
	}
}

/*Fonction qui verifie si la matrice est magique*/
int  est_magique(int t[NB_MAX][NB_MAX],int n){

	int const_magique=(n*((n*n) +1))/2;
	int i,j,som_h=0;
	int som_v=0;
	
	for(i=1;i<=n;i++){
		som_h=0;	/*Somme des elements qui se trouve sur la meme ligne horizontale*/
		som_v=0; /*Somme des elements qui se trouve sur la meme ligne verticale*/
		for(j=1;j<=n;j++){
		
			som_h+=t[i][j];/*Somme des elements qui se trouve sur la meme ligne horizontale*/
			som_v+=t[j][i]; /*Somme des elements qui se trouve sur la meme ligne verticale*/
			
			
		}
		
		if(som_h!=const_magique || som_v!=const_magique){
			return 0;
		}
	}
	int som_d1 = 0, som_d2 = 0;
    	for (i=1;i<=n;i++){
        	som_d1+=t[i][i];            // Diagonale principale
        	som_d2+=t[i][n-i+1];    // Diagonale secondaire
    	}
    	if (som_d1!=const_magique || som_d2!=const_magique) {
        return 0;
    	}

	
	
	return 1;
}

	
/*Fonction d'affichage de la matrice*/
void afficher(int t[NB_MAX][NB_MAX],int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%d ",t[i][j]);
		}
		printf("\n");
	}
}
	

















