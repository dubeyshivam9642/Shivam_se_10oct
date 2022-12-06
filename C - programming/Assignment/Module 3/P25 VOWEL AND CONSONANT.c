#include<stdio.h>
void main()
{
	char w;
	printf("Write the word to know if it is vowel or consonant\n");
	scanf("%c",&w);
	switch(w)
	{
		case 'a':printf("Vowel");
		break;
		case 'e':printf("Vowel");
		break;
		case 'i':printf("Vowel");
		break;
		case 'o':printf("Vowel");
		break;
		case 'u':printf("Vowel");
		break;
		default:printf("Consonant");
	}
}
