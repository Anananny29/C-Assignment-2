#include<stdio.h>

void main(){


	char ch ;
	printf("Enter a character : ");
	scanf("%c",&ch);

	if(65 <= ch && ch<=90){


		printf("UPPERCASE Character\n");
	}

	else if(97<=ch && ch<=122){


		printf("LOWERCASE Character\n");
	}
	else{

		printf("Different Character\n");
	}
}
