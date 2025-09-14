#include <stdio.h>
int main(){
	char coneType;
	float total;
	printf("Would you like a regular(r) cone or waffle(w) cone?\n");
	scanf("%c",&coneType);
	if (coneType == 'r' ){
		total = total + 0.50;
		printf("Your total is %.2f",total);
	}
	else if (coneType == 'w' ){
		total = total + 1.00;
		printf("Your total is %.2f",total);
	}
	else {
        printf("Invalid choice");
    }
return 0;	
}
