#include <stdio.h>
int main()
{
	int marks;
	int chocolates;
	char markstring[10];

	printf("Enter your Marks :");
	gets(markstring);

	marks = atoi(markstring);
	if( marks == 0 )
	{
		printf("Sorry you are not eligible for bonus, work hard next time\n");
	}
	else
	{
		if(marks > 50)
		{
			chocolates = 5;
		}
		else
		{
			chocolates = 1;
		}
		printf("On %d marks , you get %d chocolates\n", marks, chocolates );
	}
	return 0;
}