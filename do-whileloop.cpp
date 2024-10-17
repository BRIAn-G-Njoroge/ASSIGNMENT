//do-while loop
#include<stdio.h>
int main(){
	int i=0,sum=0;
	do{
		printf("%d\n",i);
		i++;
		sum+=1;		
	}while(i<=50);
	printf("the sum is %d",sum);
	return 0;
}