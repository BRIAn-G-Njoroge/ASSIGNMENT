/*program based on loan
author:Brian Njoroge
reg no:CT101/G/23290/24
*/
#include<stdio.h>
int main(){
	int age;
	float salary;
	//prompt the user to enter the age
	printf("enter the age:");
	scanf("%d",&age);
	//prompt the user to enter the salary
	printf("enter the salary:");
	scanf("%f",&salary);
	if (age>=21&&salary>=21000){
		printf("congratulations");
	}
	else
	{
		printf("unfortunately");
	}
	return 0;
}