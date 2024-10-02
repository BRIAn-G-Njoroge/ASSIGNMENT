/*
//program to calculate simple interest
Author:Brian Njoroge
Reg no:CT101/G/23290/24
Date:28/9/24
*/
#include<stdio.h>
#include<math.h>
int main(){
	float principle,time,rate,interest;
	//prompt the user to enter the principle
	printf("enter the principle:");
	scanf("%f",&principle);
	//prompt the user to enter the time
	printf("enter the time:");
	scanf("%f",&time);
	//prompt the user to enter the rate
	printf("enter the rate:");
	scanf("%f",&rate);
	//calculate the interest
	interest=principle*time*rate/100;
	printf("the interest is:%f",interest);
	return 0;
}