#include <stdio.h>

int main(){
	int tab[]={12, 15, 13, 10, 8, 9, 13, 14};
	int x, i;
	int rep = 0;
	
	printf("Veuillez entrer votre entier : ");
	scanf("%d", &x);
	for (i = 0; i < 8; i++) {
		if (x == tab[i]){
			rep = 1;
		} 
	}
	
	if (rep == 1){
		printf("OUI.");
	} else {
		printf("NON.");		
	} 
	
}
