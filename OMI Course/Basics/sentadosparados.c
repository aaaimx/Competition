#include <stdio.h>
int main()
{
    unsigned int a, b, c, total;
    scanf("%u %u", &a, &b);
    scanf("%u", &c);
    total = a * b;
    printf("%u %u\n", total, c - total);
    return 0;
}