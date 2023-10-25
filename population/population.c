#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int startsize;
    do
    {
        startsize = get_int("start size: ");
    }
    while (startsize < 9);

    // TODO: Prompt for end size
    int endsize;
    do
    {
        endsize = get_int("end size: ");
    }
    while (endsize < startsize);

    // TODO: Calculate number of years until we reach threshold

    int n = startsize;
    int years = 0;

    while (n < endsize)
    {
       n = n + n/3 - n/4;
       years++;
    }

    // TODO: Print number of years
    printf("years: %i\n", years);
}
