#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter numbers\n");
	scanf("%d\n%d",&a,&b);
	printf("\nPress 1 for Addition\nPress 2 for Substraction\nPress 3 for Multiplication\nPress 4 for Division\n");
	scanf("%d",&c);
	
	switch(c)
	{
		case 1 : printf("\nAddition of %d and %d = %d",a,b,(a+b));
		break;
		case 2 : printf("\nSubstraction of %d and %d = %d",a,b,(a-b));
		break;
		case 3 : printf("\nMultiplication of %d and %d = %d",a,b,(a*b));
		break;	
		case 4 : printf("\nDivision of %d and %d = %.2f",a,b,((float)a/b));
		break;			    
		default : printf("\nINVALID TRY AGAIN");
		break;	
	}
}
