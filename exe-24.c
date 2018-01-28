#include <stdio.h>
#include <stdlib.h>

int main()
{
    char i;

    printf("LETRA   |   ASCII");
    for (i = 'a'; i <= 'z'; i++)
    {
        printf("\n  %c     =    %d", i, i);
    }
    return 0;
}
