#include <stdio.h>
int main(){
	int flavour, scoops, age, payment_method,day;
	float total;
	char coneType,sprinkles;
	printf("enter 1 for Vanilla\nenter 2 for chocolate\nenter 3 for strawberry\n");
	scanf("%d",&flavour);
	printf("How many scoops would you like?\n");
    fflush(stdin);
	scanf("%d",&scoops);
    printf("Would you like a regular(r) cone or waffle(w) cone?\n");
    fflush(stdin);
	scanf("%c",&coneType); 
	printf("How old are you?\n");
	fflush(stdin);
	scanf("%d",&age);
	printf("Do you want sprinkles? (Y/N)\n");
	fflush(stdin);
	scanf("%c",&sprinkles);
	printf("Enter:\n(1) for payment by cash\n(2) for paymentby card\n");
	fflush(stdin);
	scanf("%d",&payment_method);
	printf("Enter:\n(1) if it's monday\n(2) if it's tuesday\n(3) if it's wednesday\n(4) if it's thursday\n(5) if it's friday\n(6) if it's saturday\n(7) if it's sunday\n");
	fflush(stdin);
	scanf("%d",&day);
	
    switch(scoops){
	case 1 :
	total = total + 2.00; 
	break;
	case 2 :
	total = total + 3.50;
	break;
	case 3: 
	total = total + 4.50;
	break;
	}
	
	if (coneType == 'r' ){
		total = total + 0.50;
	}
	else if (coneType == 'w' ){
		total = total + 1.00;
	}
	
	if (age < 12){
		total = total - 1.00;
	}
	if (scoops ==3 && coneType == 'w'){
	total = total + 0.00;
	}
	else {

	if (sprinkles =='Y'){
		total = total + 0.75;
	}
	}
	
	if (payment_method == 2){
		total = total + 0.50;
	}
	
	if (day ==6 || day==7){
		total = total*0.9;
	}
	if (flavour == 1){
		printf("Flavour: Vanilla\n");
	}
    else if (flavour == 2){
	printf("Flavour: Chocolate\n");
	}
	else if(flavour == 3){
	printf("Flavour: Strawberry\n");
    }
    switch(scoops){
	case 1 : 
	printf("%d scoop: $2.00\n",scoops);
	break;
	case 2 :
	printf("%d scoops: $3.50\n",scoops);
	break;
	case 3: 
	printf("%d scoops: $4.50\n",scoops);
	break;
    }
    if (coneType == 'r' ){
		printf("Regular Cone: $0.50\n");
	}
	else if (coneType == 'w' ){
		printf("Waffle cone: $1.00\n");
	}
    if (scoops ==3 && coneType == 'w'){
	printf("You got free toppings\n");
	}
	else {
    if (sprinkles =='Y'){
    	printf("Toppings: $0.75\n");
	}
	}
	if (age < 12){
	printf("Age below 12: -$1.00\n");
    }
    if (payment_method == 2){
		printf("card processing fee: $0.50\n");
	}
	if (day ==6 || day==7){
		printf("weekend discount: 10%%\n");
	}
	printf("Your Total is: $%.2f",total);
	return 0;	
}
