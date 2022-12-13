#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	int i;
	
	printf("Enter the string : ");
	scanf("%s",a);
	
	for(i = 0 ;a[i] != '\0';i++);
	
	printf("Length of string : %d ",i);
	
	
	return 0;
}