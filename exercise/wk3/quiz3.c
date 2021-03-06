/* Instructions:
 *
 *1. Write a program to return the grade associated with a range of marks.
  2. The range of marks and the associated grades are as follows:
     a. 97-100 = A+
	 b. 90-97 = A
     c. 81-89 = B
     d. 71-80 = C
     e. less than or equal to 70 is a fail grade and should be given an F
     e. greater than 100 is invalid and your code should print "Invalid"
  
  3. Use the skeleton code provided below to create a new function "printGrade" with its appropriate 
     data type for input of marks. For example, printGrade(<data type> marks). 
  
  4. Use print statements in your function to display the grade. For example, if the input marks is 77, the output should read: 
	"Your grade is : C"
  5. Please adhere to standard C syntax conventions and use comments to explain your code. Failure to do so will result in a penalty.
 *
 *
 * */


#include<stdio.h>

int main(void){

	char ch;
	do{
		printf("Enter marks:" );
		printGrade(marks);
		printf("\nDo you want to continue? (Y/N)");
		scanf(" %c",&ch); //do not modify this.
	}while(ch == 'y'|| ch == 'Y');
	return 0;
}
