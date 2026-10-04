//Q2. A cinema app wants to reverse ticket numbers entered by users. Write a program that takes an integer as input
//and prints the reversed number using a loop.

#include <stdio.h>

int main() {
	int ticketnum;
	int ticket=0; //reversed values
	int digit= 0; // to add the digits
	printf("please enter your ticket number : ");
	scanf("%d", &ticketnum);
	while (ticketnum != 0) {
		digit = ticketnum%10;
		ticket = ticket*10 + digit;
		ticketnum =ticketnum/10;		
	}
	printf("Renversed number is: %d", ticket);
	
	
}



