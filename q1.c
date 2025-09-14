#include <stdio.h>
int main(){
	int flavour ;
	printf("enter 1 for Vanilla\nenter 2 for chocolate\nenter 3 for strawberry\n");
	scanf("%d",&flavour);
	if (flavour == 1){
		printf("Vanilla");
	}
    else if (flavour == 2){
	printf("Chocolate");
	}
	else if(flavour == 3){
	printf("Strawberry");
    }
	else{
		printf("Invalid Flavour");
	}
return 0;	
}
