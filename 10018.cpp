#include <stdio.h>

unsigned int reverseN(unsigned int n)
{
  unsigned int rn = 0;
  while(n) { rn *= 10; rn += n%10; n /=10; }
  return rn;
}


int main()
{
  int set;
  unsigned int n, rn, count;

  for(scanf("%d",&set);set;set--)
  {
    scanf("%d",&n);
    count = 1;

    n += reverseN(n);
    while(n != (rn = reverseN(n)))
    {
      n += rn;
      count++;
    }

    printf("%u %u\n",count, n);
  }

  return 0;
}
