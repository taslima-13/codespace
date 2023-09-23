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

    int year = 0;

    for (int i = startsize; i < endsize; i = i + (i / 3) - (i / 4))
    {
        year++;
    }

    // TODO: Print number of years
    printf("years: %i\n", year);
}
