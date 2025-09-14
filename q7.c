#include <stdio.h>
int main(){
	int age;
	float total;
	printf("How old are you?\n");
	scanf("%d",&age);
	if (age < 12){
		total = total - 1.00;
		printf("%.2f",total);
	}
return 0;	
}