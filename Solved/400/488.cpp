#include <stdio.h>

int main()
{
  int set, h, t, i, j;
  for(scanf("%d", &set);set;set--)
  {
    scanf("%d", &h);
    for(scanf("%d",&t);t;t--)
    {
      for(i=1;i<h;i++) { for(j=0;j<i;j++) { printf("%d",i); } printf("\n"); }
      for(i=h;i;i--)   { for(j=0;j<i;j++) { printf("%d",i); } printf("\n"); }

      if(t-1) { printf("\n"); }
    }

    if(set-1)
    {
      printf("\n");
    }
  }
}
