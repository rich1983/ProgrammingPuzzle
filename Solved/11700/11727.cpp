#include <stdio.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))

int main()
{
  int i, set;
  int a, b, c;
  for(scanf("%d", &set), i=0;i<set;i++)
  {
    scanf("%d %d %d", &a, &b, &c);
    printf("Case %d: %d\n", i+1, a + b + c - max(max(a,b),c) - min(min(a,b),c));
  }

  return 0;
}
