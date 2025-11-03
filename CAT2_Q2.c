/*Valerian Sarange
PA106/G/28839/25
hours worked and weekly wage*/

#include<stdio.h>
int main(){
	double hours,rate;
	double gross_pay,taxes,net_pay;
	
	printf("enter hours worked in a week\n");
	scanf("%lf", &hours);
	
	printf("enter hourly wage\n");
	scanf("%lf", &rate);
	
	if(hours <= 40){
		gross_pay = hours * rate;
		}else{
			gross_pay = (40 * rate) + ((hours - 40) * rate * 1.5);
		}
	
		if(gross_pay <= 600){
			taxes = gross_pay * 0.15;
		}else{
			taxes = (600 * 0.15) + ((gross_pay - 600) * 0.20);
		}
		
		net_pay = gross_pay - taxes;
		
		printf("\npayment salary\n");
		printf("gross_pay:$%.2lf\n", gross_pay);
		printf("taxes:$%.2lf\n", taxes);
		printf("net_pay:$%.2lf\n", net_pay);
		
		return 0;	
}