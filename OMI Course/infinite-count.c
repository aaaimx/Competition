#include <stdio.h>
int main()
{
   unsigned int i, n;
   scanf("%d", &n);
   if (1 <= n & n <=10000) {
      for (i=1; i<=n; ++i )
      printf("%d\n", i );
   }
   return 0;
}