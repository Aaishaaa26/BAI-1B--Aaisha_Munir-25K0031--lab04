#include <stdio.h>
int main(){
	char sprinkles;
	float total;
	printf("Do you want sprinkles? (Y/N)\n");
	scanf("%c",&sprinkles);
	if (sprinkles =='Y'){
		total = total + 0.75;
	}
return 0;	
}
