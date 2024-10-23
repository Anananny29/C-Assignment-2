#include<stdio.h>

void main(){


	int n;
	printf("Enter number : ");
	scanf("%d",&n);

	if(n%7==0){

		if(n<21){

		
			printf("Number is divisible by 7 and less than 21\n");
		}else{


			printf("Number is divisible by 7 and greater than 21\n");
		}
	}	
	else{

	
		printf("Number is not divisible by 7\n");
	}
	

	

}
