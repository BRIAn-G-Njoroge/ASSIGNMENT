/*
Program to print the electric bills for customers
Author:Brian Njoroge
Reg No:CT101\G\23290\24
Date:9\10\24
*/
#include <stdio.h>
#include <math.h>
int main(){
	int customerID;
	char customerName;
	float unitsConsumed,Charges_per_unit,Total_bill;
	printf("enter the custmerID:");
	scanf("%d",&customerID);
	printf("enter the customerName:");
	scanf("%s", &customerName);
	printf("enter the unitsConsumed:");
	scanf("%f",&unitsConsumed);
	if(unitsConsumed<=199){
		Charges_per_unit=1.20;
		Total_bill=unitsConsumed*Charges_per_unit;
		}
	else if(unitsConsumed<400){
		Charges_per_unit=1.50;
		Total_bill=unitsConsumed*Charges_per_unit;
	}
	else if(unitsConsumed<600){
		Charges_per_unit=1.80;
		Total_bill=unitsConsumed*Charges_per_unit;
	}
	else{
		Charges_per_unit=2.00;
		Total_bill=unitsConsumed*Charges_per_unit;
	}
	float surcharge,Total_amount_to_pay;
	if(Total_bill>400){
		surcharge=Total_bill*0.15;
	}
	else{
		surcharge=0;}
		printf("Charges_per_unit is:%f\n",Charges_per_unit);
    printf("Total_bill is:%f\n",Total_bill);
	//calculate Total_amount_to_pay
	Total_amount_to_pay=Total_bill+surcharge;
	printf("Total_amount_to_pay is:%f", Total_amount_to_pay);
	if(Total_bill<100){Total_bill=100;}
	return 0;
	}