/*The code calculates perimeter and area of the pentagon */

#include<stdio.h>
#include<math.h>

int main(){
	
	float length;
	float perimeter;
	float area;
		
	printf("Please enter the length of the pentagon:");
	scanf("%f",&length);
	
	perimeter= 5*length;
	area= (sqrt(25+(10*sqrt(5))))*length*length/4;
	
	printf("The perimeter of the pentagon :%.3f\n",perimeter);
	printf("The area of the pentagon :%.4f\n",area);
	
	return 0;
	
}
