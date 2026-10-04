//Q7. A shopping mall wants to design an LED banner in the shape of a hollow diamond.Write a C program that takes a
//number as input and prints the hollow diamond.

#include <stdio.h>

int main() {
	int lines;
	int r;
	int c;
	int s;
	printf("How many lines: ");
	scanf("%d", &lines);
	//for lines
	for( r=1; r<=lines ; r++){
	//space printing
		for(s =lines-r;s>=1;s--) {
			printf(" ");
		}
		//star printing
		for( c=1;c<=r;c++){
			if(r==1){
				printf("* ");
			}else {
				if(c==1 || c==r) {
					printf("* ");
				}else {
					printf("  ");
				}
			}
		}
		//new line 
		printf("\n");
	}
	for(r=1; r<=lines-1;r++) {
		//space printing
		for( s=1; s<=r;s++) {
			printf(" ");
		}
			//star printing
			for(c=lines-r; c>=1;c--) {
				if(r==lines-1) {
					printf("* ");
				}else {
					if(c==lines-r || c==1) {
						printf("* ");
					}else {
						printf("  ");
					}
				}
			}
		//new line
		printf("\n");
		
	}
}
