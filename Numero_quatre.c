#include <stdio.h>

int main(){
	int tab[]={12, 15, 13, 10, 8, 9, 13, 14};
	int x, i, ix;
	int rep = 0;
	
	printf("Le tableau en memoire est : \n \t");
	for (i = 0; i < 8; i++){
		printf("E%d : %d" , i, tab[i]);
		printf("\n \t");
	}
	printf("\n");
	printf("Veuillez entrer votre entier : ");
	scanf("%d", &x);
	printf("\n");
	printf("Dans quel emplacement faut-il le mettre ? ");
	scanf("%d", &ix);
	printf("\n");
	
	if (ix < 7 && ix >= 0){
		tab[ix] = x;
		
		printf("Le nouveau tableau est : ");
		for (i = 0; i < 8; i++){
			printf("\n");
			printf("E%d : %d", i, tab[i]);
		}
	} else {
		printf("Cet emplacement n'existe pas dans le tableau !");
	}
	
}
	
