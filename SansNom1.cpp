#include<stdio.h>

int main(){
	int tab[]={12, 15, 13, 10, 8, 9, 13, 14};
	int i, j, a;
	printf("veuillez saisir un entier : ");
	scanf("%d",&a);
	for(i=0; i<8; i++){
		if(a == tab[i]){
			j = i;
		}
	} 
	printf("l'indice est : ",j);
}
