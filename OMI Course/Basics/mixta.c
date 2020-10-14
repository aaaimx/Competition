#include <stdio.h>
int main()
{
    unsigned int n, m, b;
    scanf("%u %u", &n, &m);
    b = n % m;
    if (b == 0)
        printf("%u\n", n / m);
    else
        printf("%u %u/%u\n", n / m, b, m);
    return 0;
}