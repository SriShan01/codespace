#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int count;
    for (count=0; count<3; count ++)
    {
        printf("Meow\n");
    }

    int number = 0;
    while (number<3)
    {
        printf("Meow\n");
        number++;
    }

    int i = 0;
    do
    {
        printf("Meow\n");
        i++;
    }
    while (i<3);
}