//Q8. Write a C program that:
//1. Creates an integer array of 8 elements.
//2. Takes all 8 elements from the user.
//3. Prints the complete array.
//4. Finds the largest and smallest element.
//5. Searches for a number entered by the user and prints its index.
//6. Inserts a new number at a specific index.
//7. Deletes an element from a specific index.
//8. Prints the final array.

#include <stdio.h>

#include <limits.h>

int main() {
	int arr[10] = {};
	int search;
	int i = 0;
	int large = INT_MIN;
	int small = INT_MAX;
	int searchindex = -1;
	int insert;
	int num;
	int erase;
	int del;
	int size = 8;
	for(i=0; i<8;i++) {
		printf("enter the value: ");
		scanf("%d", &arr[i]);
		if(large < arr[i]) {
			large = arr[i];
		}
		if(small> arr[i]) {
			small = arr[i];
		}
	}
	i=0;
	printf("the orignal array is: ");
	for(i=0; i<8;i++) {
		printf("|");
		printf("%d",arr[i]);
		printf("|");
		
	}
	printf("the largest value is %d: ", large);
	printf("\nthe smallest value is %d: ", small);
	printf("\nenter the search value: ");
	scanf("%d", &search);
	i = 0;
	for(i=0;i<size;i++) {
		if(search == arr[i]) {
			searchindex = i;
		}
	}
	printf("\nThe search index(-1 means not found) is %d: ", searchindex);
	printf("which index do you want to insert the value(0 to 8 index): ");
	scanf("%d",&insert);
	printf("enter the value you want to insert: ");
	scanf("%d", &num);
	i =8;
	for(i=8;i>=insert;i--) {
	arr[i+1] = arr[i];	
		if(insert == i) {	
			arr[i] = num;
			size++;
			break;
		}
	}
	printf("which index value do you want to delete: ");
	scanf("%d", &erase);
	i =0; 
	for(i=erase; i < size-1 ; i++) {
		arr[i] =arr[i+1];
	}
	size--;
	i=0;
	for(i=0;i<size;i++) {
	printf("|");
	printf("%d", arr[i]);
	printf("|\n");
	}
}
