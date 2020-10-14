#include <stdio.h>
int main()
{
    unsigned int f, b, i;
    scanf("%u", &f);
    b = f % 11;
    for (i = 0; b != 1; i++)
    {
        f *= 2;
        b = f % 11;
    }
    printf("%u %u\n", i, f);
    return 0;
}