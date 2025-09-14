#include <stdio.h>
int main(){
	int scoops;
	printf("How many scoops would you like?\n");
	scanf("%d",&scoops);
	if (scoops == 1){
		printf("Your total is $2.00");
	}
	else if (scoops > 1){
		printf("Please see our multi-scoop offers.");
	}
return 0;	
}