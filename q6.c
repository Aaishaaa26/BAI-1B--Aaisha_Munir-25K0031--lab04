#include <stdio.h>
int main(){
	int day;
	float total;
	printf("Enter:\n(1) if it's monday\n(2) if it's tuesday\n(3) if it's wednesday\n(4) if it's thursday\n(5) if it's friday\n(6) if it's saturday\n(7) if it's sunday\n");
	scanf("%d",&day);
	if (day ==6 || day==7){
		total = total*0.9;
		printf("%.2f",total);
	}
return 0;	
}