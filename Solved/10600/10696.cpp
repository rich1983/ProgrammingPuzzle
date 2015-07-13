#include <stdio.h>

int f91(int n)
{
  return n > 100 ? (n - 10) : f91(f91(n+11));
  return 0;
}

int main()
{
  int n;
  while(1 == scanf("%d",&n) && n) { printf("f91(%d) = %d\n", n, f91(n)); }
  return 0;
}
