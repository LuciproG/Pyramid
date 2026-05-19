#include <cs50.h>
#include <stdio.h>

void pyramid(int height);
void row(int height);
void column(void);
void space(int height);
void block(int height);

int nofrows = 0;

int main(void)
{
    while (true)
    {
        int n = get_int("How tall the pyramid must be?: ");

        if (n > 0 && n <= 8)
        {
            pyramid(n);
            break;
        }
        else
        {
            printf("The pyramid must be between 1 and 8 tall.\n");
        }
    }
}

void pyramid(int height)
{
    // print a row then go to next column height amount of times
    for (int i = 0; i < height; i++)
    {
        row(height);
        column();
    }
}

void row(int height)
{
    nofrows++;
    space(height - nofrows);
    block(nofrows);
    space(2);
    block(nofrows);
}

void column(void)
{
    printf("\n");
}

void space(int height)
{
    // print space for height amount of times
    for (int i = 0; i < height; i++)
    {
        printf(" ");
    }
}

void block(int height)
{
    // print block for height amount of times
    for (int i = 0; i < height; i++)
    {
        printf("#");
    }
}
