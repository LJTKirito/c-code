#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr1[3][4],arr2[4][3],arr[3][3],i,j,n,s=0;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
		arr1[i][j]=rand()%10;
		printf("%d ",arr1[i][j]);		 
		}
		printf("\n"); 
	}
	printf("\n");
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
		arr2[i][j]=rand()%10;
		printf("%d ",arr2[i][j]);		 
		}
		printf("\n"); 
	}
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(n=0;n<4;n++){
				s+=arr1[j][n]*arr2[n][j]; //arr[i][j]��һ��������arr[i][j]һ����ֵ���ܱ仯�� 
			}
			arr[i][j]=s;
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
 } 
