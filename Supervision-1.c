#include<stdio.h>
void main()
{
	// Write a Program to write even & odd numbers from 50 to 70 into two separate files
	
	FILE *even, *odd;
    int i;

    even = fopen("D://even.txt", "w");
    odd = fopen("D://odd.txt", "w");

    if(even == NULL || odd == NULL)
	{
        printf("can't open file\n");
    }
    for(i = 50; i <= 70; i++)
	{
        if(i % 2 == 0)
		{
            fprintf(even,"%d\n", i);
        }
		else
		{
            fprintf(odd,"%d\n", i);
        }
    }

    printf("Successfully added  numbers to files\n");
}