#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE,"");
	int tab[]={12, 15, 13, 10, 8, 9, 13, 14};
	int i, ix, iy;
	int temp;
	
	printf("=== Le tableau en m�moire est : === \n \t");
	for (i = 0; i < 8; i++){
		printf("E%d : %d" , i, tab[i]);
		printf("\n \t");
	}
	printf("\n");
	printf("Vous voulez �changer les emplacements de deux valeurs du tableau.");
	printf("\n");
	printf("Pr�cisez leurs indices : \n");
	scanf("%d  %d", &ix, &iy);
	printf("\n");
	
	if (ix < 7 && ix >= 0 && iy < 7 && iy >= 0){
		temp = tab[ix];
		tab[ix] = tab[iy];
		tab[iy] = temp;
		
		printf("===== Le nouveau tableau est : =====");
		for (i = 0; i < 8; i++){
			printf("\n");
			printf("E%d : %d", i, tab[i]);
		}
	} else {
		printf("Cet emplacement n'existe pas dans le tableau !");
	}
	
}
	
