#include <stdio.h>

int main(){
	int tab[]={12, 15, 13, 10, 8, 9, 13, 14};
	int x, i, ix;
	int rep = 0;
	
	printf("Veuillez entrer votre entier : ");
	scanf("%d", &x);
	for (i = 8; i >= 0; i--) {
		if (x == tab[i]){
			rep = 1;
			ix = i;
		} 
	}
	
	if (rep == 1){
		printf("OUI. IL EST SITUE EN POSITION %d !", ix);
	} else {
		printf("NON.");		
	} 
	
}
