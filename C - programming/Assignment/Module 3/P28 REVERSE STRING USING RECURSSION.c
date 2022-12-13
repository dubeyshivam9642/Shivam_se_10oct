#include<stdio.h>

void strRev();

int main()
{
	printf("\nEnter the sentence : ");
	strRev();
	return 0;
}

void strRev(){
	char c;
	scanf("%c",&c);
	if(c != '\n')
	{
		strRev();
		printf("%c",c);
	}
}