/*
//program to calculate compound interest
Author:Brian Njoroge
Reg no:CT101/G/23290/24
Date:28/9/24
*/
#include<stdio.h>
#include<math.h>
int main(){
	float amount,principle,rate,time,n,compound_interest;
	//prompt the user to enter the principle
	printf("enter the principle:");
	scanf("%f",&principle);
	//prompt the user to enter the time
	printf("enter the time:");
	scanf("%f",&time);
	//prompt the user to enter the amount
	printf("enter the amount:");
	scanf("%f",&amount);
	//prompt the user to enter the rate
	printf("enter the rate:");
	scanf("%f",&rate);
	//prompt the user to enter the n
	printf("enter the n:");
	scanf("%f",&n);
	//calculate the compound the interest
	compound_interest=principle*pow((1+(rate/(100*n))),n*time)-principle;
	return 0;
}