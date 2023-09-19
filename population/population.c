#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("start size:");
    }
    while (start<9);

    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("end size:");
    }
    while (end<start);

    // TODO: Calculate number of years until we reach threshold

    int years;
    do
    {
        start
    }


    // TODO: Print number of years
    printf("years: %i\n", years);
}
