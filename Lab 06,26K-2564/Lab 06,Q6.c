//Q6. An electricity meter stores readings digit by digit. Write a program that takes a number and counts how many of
//its digits are even and how many are odd.
#include <stdio.h>


int main() {
	int digit;
	int num;
	int count = 0;
	int evencount = 0;
	int oddcount = 0;
	printf("Enter the value: ");
	scanf("%d", &num);
	
	while(num !=0) {
		digit = num%10;
		num = num/10;
		if(digit%2== 0) {
			evencount++;
		}
		else{
			oddcount++;
		}
		
		
	} 
	printf("The number of even digits are: %d ", evencount);
	printf("The number of odd digits are: %d ", oddcount);
	
	
	
}
