#include<stdio.h>
main()
{
	char ch;
	printf("\n enter charcter from this r,b,g,w = ");
	scanf("%c",&ch);
	if (ch=='r')
	{
		printf("\n Red");
	}
	else if(ch=='b')
	{
		printf("\n Blue");
	}
	else if(ch=='g')
	{
		printf("\n Green");
	}
	else if (ch== 'w')
	{
		printf("\n White");
	}
	else
	{
		printf("\n enter valid character");
	}
}
