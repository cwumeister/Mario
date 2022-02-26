#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while ( n < 1 || n > 8 );

    int counter = 1;

    for ( int i = 0; i < n; i ++)
    {
        for (int j = 0; j < n; j ++ )
        {
            if (j < n - counter)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }

        printf("..");

        for (int k = 0; k < n; k++)
        {
            if (k  < counter)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }

        counter += 1;
        printf("\n");

    }
}