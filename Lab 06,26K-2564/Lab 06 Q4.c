//Q4. A library book code is valid only if it reads the same forward and backward. Write a program that checks
//whether the given number is a palindrome using a loop.

#include <stdio.h>

int main() {
	int code;
	int digit;
	int pcode; //to calculate the length
	int count = 0;
	int i=0;
	int newcode = 0;
	int c;
	int compcode;
	printf("please enter the code: ");
	scanf("%d",&code);
	pcode = code;
	while(pcode != 0) {
		pcode = pcode/10;
		count++;
	}
	compcode = code;
	c = count;
	
	for(i=0; i<c ;i++ ) {
		
		digit = code%10;
		newcode =(newcode*10 + digit); 
		code = code/10;

		
	}
	
	if (newcode==compcode) {
		printf("it is palindrome");
	}
	else {
		printf("it is not palindrome ");
	}
	
	
	
}
