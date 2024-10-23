#include<stdio.h>

void main(){

	int n1,n2;
	printf("Enter 1 number :");
	scanf("%d",&n1);

	printf("Enter 2 number :");
        scanf("%d",&n2);

	if(n1>n2){

		printf("%d is greater than %d\n",n1,n2);
	}
	else if(n1<n2){

		printf("%d is greater than %d\n",n2,n1);
	}else{

		printf("Numbers are equal\n");
	}
}
