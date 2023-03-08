#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("Type x value: ");
    int y = get_int("Type y value: ");

    if (x<y)
    {
        printf("x is less than y");
    }
    else if (x>y)
    {
        printf("x is greater than y");
    }
    else
    {
        printf("x is equal to y");
    }
}