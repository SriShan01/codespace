#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i =0;
    for (i=0; i<3; i++)
    {
        printf("#");
    }
    printf("\n");

    int j =0;
    for (j=0; j<3; j++)
    {
        printf("#");
    }
    printf("\n");

    int k =0;
    for (k=0; k<3; k++)
    {
        printf("#");
    }
    printf("\n");

    int x= 0;
    for (x=0; x<3; x++)
    {
        int y = 0;
        for (y=0; y<3; y++)
        {
            int z = 0;
            for (z=0; z<3; z++)
            {
                printf("#");
            }
            printf("\n");
        }
        printf("\n");
    }
}