// Write a C program to print the following pattern using loop
// * * * * *
// * * * *
// * * *
// * *
// * 

# include <stdio.h>
int main()
{
    for(int i = 5; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}