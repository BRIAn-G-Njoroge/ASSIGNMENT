/*program to calculate the fine for overdue library books
author:Brian Njoroge
reg no:CT101/G/23290/24
*/
#include<stdio.h>
int main(){
	int bookID,dueDate,returnDate,daysOverdue,fineRate,fineAmount;
	//prompt the user to enter the bookID
	printf("enter the bookID:");
	scanf("%d",&bookID);
	//prompt the user to enter the returnDate
	printf("enter the returnDate:");
	scanf("%d",&returnDate);
	//prompt the user to enter the dueDate
	printf("enter the dueDate:");
	scanf("%d",&dueDate);
	//prompt the user to enter the daysOverdue
	printf("enter the daysOverdue:");
	scanf("%d",&daysOverdue);
	//prompt the user to enter the fineRate
	printf("enter the fineRate:");
	scanf("%d",&fineRate);
	//prompt the user to enter the fineAmount
	printf("enter the fineAmount:");
	scanf("%d",&fineAmount);
	if(daysOverdue<=7){
		fineRate=20;
		fineAmount=(daysOverdue*fineRate);
	}
	else if(daysOverdue<15){
		fineRate=50;
		fineAmount=(daysOverdue*fineRate);
	}
	else{
		fineRate=100;
		fineAmount=(daysOverdue*fineRate);
	}
	return 0;
}