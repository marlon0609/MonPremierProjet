#include <stdio.h>

int main(){
	int tab[]={12, 15, 13, 10, 8, 9, 13, 14};
	int x, i, ix;
	int rep = 0;
	
	printf("Veuillez entrer votre entier : ");
	scanf("%d", &x);
	for (i = 0; i < 8; i++) {
		if (x == tab[i]){
			rep = 1;
			ix = i;
		} 
	}
	
	if (rep == 1){
		printf("Votre entier appartient au tableau et iL EST SITUE EN POSITION %d !", ix);
	}
	
}
