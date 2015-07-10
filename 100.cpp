#include <stdio.h>

int getCycle(int n) 
{ 
  if(1 == n) {return 1;}

  if(n % 2) {return (2 + getCycle(n + (n/2) + 1));}
  else      {return (1 + getCycle(n/2));}
}



int main()
{
  int i, j;
  int m, c;

  while(2 == scanf("%d %d",&i, &j))
  {
    printf("%d %d", i, j);
    if(i > j) {c = i, i = j; j = c;}
    for(m = 0;i<=j;i++) { m = ( (c = getCycle(i)) > m ? c : m); }
    printf(" %d\n",m);
  }
  return 0;
}
