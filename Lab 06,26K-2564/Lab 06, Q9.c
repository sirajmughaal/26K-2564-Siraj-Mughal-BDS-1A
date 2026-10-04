//Q9. Write a C program that takes a word in a 1D char array and:
//1. Prints the original word.
//2. Finds its length without strlen().
//3. Reverses the word.
//4. Checks whether the word is a palindrome.
//5. Counts the number of vowels.
//6. Counts the number of consonants.


#include <stdio.h>


int main(){
	char n[100];
	int vowels = 0 , consonants = 0;
	int flag = 1;
	int i=0;
	int length = 0;
	printf("Enter a word: ");
	scanf("%s", &n);
	printf("Orignal word : %s", n);
	while(n[length] != '\0') {
		length++;
	}
	printf("\nlength of the word: %d", length);
	printf("\nRevserved word: ");
	for(i= length-1; i>=0 ;i--) {
		printf("%c", n[i]);
	}
	printf("\n");
	for(i=0; i<length/2;i++) {
		if(n[i] != n[length -1 -i]) {
			flag =0; 
			break;
		}
	}
	if(flag ==1) {
		printf("\nthe word is a palindrome\n");
	} else {
		printf("\nthe word is not palindrome");
	}
	for(i=0; i<length;i++) {
		char ch = n[i];
		if (ch== 'a' || ch== 'e' || ch== 'i' || ch== 'o' || ch== 'u' || ch == 'A' || ch== 'E' || ch== 'I' || ch=='O' || ch =='U') {
			vowels++;
		} else if((ch>='a' && ch<= 'z') || (ch>= 'A' && ch<= 'Z')) {
			consonants++;
		}
	}	
		printf("\nNumber of vowels: %d",vowels);
		printf("\nNumber of consonants: %d", consonants);

	
	
	
	
}
