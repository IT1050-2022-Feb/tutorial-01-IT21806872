/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include<stdio.h>
int main(void)
{
	int mark1,mark2;
	float avg;
	
	printf("enter the mark 1:");
	scanf("%d",&mark1);
	
	printf("enter the mark 2:");
	scanf("%d",&mark2);
	
	avg=(mark1+mark2)/2;
	
	printf("average is:%.2f",avg);
	
	return 0;
}

