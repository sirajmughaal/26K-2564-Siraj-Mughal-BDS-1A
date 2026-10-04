//Q5. We define the Catalan series as a sequence of natural numbers with value n. Write a C program that takes an
//integer n as input and prints Catalan number . The formula for the nth Catalan number is:

#include <stdio.h>

int main() {
	int catalannum;
	int n;
	int i= 0;
	float calc= 0;
	int calc2= 1;
	float calc3=1;
	int x=0;
	printf("Enter the value: "); 
	scanf("%d", &n);
	calc =1.0/(n+1);
	for(i=0; i<2*n;i++){
	calc2 =  calc2* ((2*n)-i);
	}
	for(x=0;x<n;x++) {
	calc3 = calc3 * 1.0/((n-x)*(n-x));
	}
	catalannum = calc *calc2*calc3;
	printf("the catalan number is %d", catalannum);
}
