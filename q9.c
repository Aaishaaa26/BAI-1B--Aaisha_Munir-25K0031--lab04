#include <stdio.h>
int main(){
	int payment_method;
	float total;
	printf("Enter:\n(1) for payment by cash\n(2) for paymentby card\n");
	scanf("%d",&payment_method);
	if (payment_method == 2){
		total = total + 0.50;
	}
return 0;	
}
