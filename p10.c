#include<stdio.h>

void main(){

	int a,b,c;

	printf("Enter first angle : ");
	scanf("%d",&a);
	printf("Enter second angle : ");
	scanf("%d",&b);
	printf("Enter third angle : ");
	scanf("%d",&c);

	
	if(a>0 && b>0 && c>0 && a+b+c ==180){
	
		printf("The triangle is valid\n");
	}
	else{
		printf("Triangle not valid\n");
	
	}
}
