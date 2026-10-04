//Q3. In a classroom of 30 students, a teacher wants to calculate how many students are present and absent. Write a C
//program using a for loop that runs exactly 15 times. During each iteration, the user should enter 1 if a student is
//present and 0 if absent. The program should count the total number of present students and then calculate the
//number of absent students. Finally, display both totals


#include <stdio.h>

int main() {
	int i = 0;
	int presentcount = 0;
	int absentcount = 0;
	int student;
	
	for(i = 0; i <15 ;i++) {
		printf("\n Is the student present or absent(1 for present, 0 for absent): ");
		scanf("%d",&student);
		while(student != 0 && student != 1) {
			printf("\n PLease re-enter(1 for present, 0 for absent): ");
			scanf("%d",&student);
		}
		if(student) {
			presentcount++;
			printf("Thanky you for your punctuality");
		}
		else {
			absentcount++;
			printf("Counting it as a absent");
		}
		
	}	
	printf("Total present students are: %d", presentcount);
	printf("Total absent students are: %d",absentcount);

}
