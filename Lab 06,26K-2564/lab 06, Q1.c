//Q1. A bank system requires verifying whether the sum of digits of a PIN is greater than 10. Write a program that
//takes a 4-digit PIN as input and keeps calculating the sum of digits using a loop. Print whether it is a Strong PIN (sum
//is greater than 10) else print Weak PIN.

#include <stdio.h>

int main() {
	int digit;
	int pin;
	int count= 0; 
	int sum = 0;
	int testpin;  //to test if it is 4 digits or not
	
	while(count != 4) {
		printf("your pin should be of 4 digits please enter: ");
		scanf("%d",&pin);
		count= 0;
		testpin = pin;
		while(testpin != 0) {
			testpin =testpin/10;
			count++;	
		}
	}
	
	while(pin != 0) {
		digit = pin%10;
		sum = sum + digit;
		pin = pin/10;
	}
	
	if (sum>10) {
		printf("your pin is strong");
	}
	else {
		printf("you have weak pin");
		
	}
}
