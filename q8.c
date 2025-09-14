#include <stdio.h>
int main(){
	int scoops;
	char coneType;
	printf("How many scoops would you like?\n");
	scanf("%d",&scoops);
	printf("Would you like a regular(r) cone or waffle(w) cone?\n");
	fflush(stdin);
	scanf("%c",&coneType);
	if (scoops ==3 && coneType == 'w'){
	printf("You get free toppings");
	}
return 0;	
}
