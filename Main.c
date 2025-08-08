#include<stdio.h>
#include<stdlib.h>
#include "Carre.h"
int main(){

	int t[NB_MAX][NB_MAX],n;
	printf("Donner l'ordre de votre carre magique:");
	scanf("%d",&n);
	while(n%2==0){
		printf("Veuillez saisir un nombre impair:");
		scanf("%d",&n);
	}
	initialiser_matrice(t,n);
	placer(t,n,n,(n+1)/2);
	printf("Le carre magique d'ordre %d:\n\n",n);
	afficher(t,n);
	printf("\n");
	if(est_magique(t,n)){
		printf("Le carre genere est bien magique.");
		printf("La constante magique est egale à:%d\n\n",(n*(n*n +1))/2);
	}
	else{
		printf("Le carre n'est pas magique\n\n");
	}
	
	
	return 0;
}
