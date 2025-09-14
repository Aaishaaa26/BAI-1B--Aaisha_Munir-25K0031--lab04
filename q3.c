#include <stdio.h>
int main(){
	int scoops;
	float total;
	printf("How many scoops would you like?\n");
	scanf("%d",&scoops);
	switch(scoops){
		
	case 1 :
	total = total + 2.00; 
	printf("Your total for %d scoop is %.2f",scoops,total);
	break;
	
	case 2 :
	total = total + 3.50;
	printf("Your total for %d scoops is %.2f",scoops,total);
	break;
	
	case 3: 
	total = total + 4.50;
	printf("Your total for %d scoop is %.2f",scoops,total);
	break;
	}
return 0;	
}