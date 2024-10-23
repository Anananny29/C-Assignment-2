#include<stdio.h>

void main(){

	int n;

	printf("Enter a number: ");
	scanf("%d",&n);

	if(n%5==0 || n%10==0){

		printf("%d is divisible\n",n);
	}

	else{


		printf("%d is not divisible\n",n);
	}
}
