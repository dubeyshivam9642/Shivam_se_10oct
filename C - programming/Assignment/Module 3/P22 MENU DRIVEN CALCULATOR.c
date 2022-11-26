#include<stdio.h>
void main()
{
	int i=1,a,b,c; // Initialization of loop and declaring variables
	
	while(i) //Condition of loop = True
  {	
	printf("\n\n-----------MENU-----------\n");

	printf("\n1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n");
	
	printf("\n\nEnter Your choice : ");
 	scanf("%d",&c);
	
	if(c<=4) //Conditional statement for choice of calculation mode
    { 	
	printf("\nEnter first number  : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);	

	switch(c) // Diffrentiates values as per required input and displays answer
 		{
			case 1 : printf("\nAddition = %d\n\nCalculation %d Completed",(a+b),i);
			break;
			case 2 : printf("\nSubstraction = %d\n\nCalculation %d Completed",(a-b),i);
			break;
			case 3 : printf("\nMultiplication = %d\n\nCalculation %d Completed",(a*b),i);
			break;
			case 4 : printf("\nDivision = %.2f\n\nCalculation %d Completed",((float)a/b),i);
			break;
			default: printf("\n\nInvalid choice \n\nTry again\n\n !!!!\n\nCalculation %d Failed",i);
			break; 	
		}
    }
    else // For displaying error in choice 
    {
   		printf("\n\nInvalid choice \n\nTry again !!!!\n\nCalculation %d Failed",i);	
	} 
	i++; //Updation of loop as to display numbers of calculation
  }
}