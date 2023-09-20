#include <stdio.h>

char grade (int a);
 int main(){
 	int diem;
 	printf("Enter marks: ");
 	scanf("%d", &diem);
 	char result = grade(diem);
 	printf("Grade: %c", result);
 }
char grade (int a){
	char b;
	if (a >= 90){
		b = 'A';
		return b;
	}
	else if (a < 90 && a > 60){
		b = 'B';
		return b;
	}
	else if (a <= 60 && a > 30){
		b = 'C';
		return b;
	}
	else{
		b = 'F';
		return b;
	} 
	   
} 

