#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string first = get_string("Please type your first name? ");
    string last = get_string("Please type your last name? ");
    printf("hello %s %s\n", first, last);

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