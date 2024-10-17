/*
//3D-arrays
Author:Brian Njoroge
Reg no:CT101/G/23290/24
Date:17/10/24
*/
#include<stdio.h>
int main(){
	int i,j,k;
	int marks[3][3][3]={{45,65,25},{60,50,38},{80,90,70}};
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				printf("marks[%d][%d][%d]=%d\n",i,j,k,marks[i][j][k]);
			}
		}
	}
	return 0;
}