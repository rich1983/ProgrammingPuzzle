#include <stdio.h>

int main()
{
  int set = 0;
  int a, b;
  for(scanf("%d",&set);set;set--)
  {
    scanf("%d %d",&a, &b);
    if(a > b)      {printf(">\n");}
    else if(a < b) {printf("<\n");}
    else           {printf("=\n");}
  }

  return 0;
}
