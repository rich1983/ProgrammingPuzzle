#include <stdio.h>


int inc_sum(int a)
{ return (a + 1) * a / 2; }

int main()
{
  int set,i;
  int a, b, ans;

  for(scanf("%d",&set),i=0;i<set;i++)
  {
    scanf("%d",&a); scanf("%d",&b);
    printf("Case %d: ", i+1);
    if(a == b) {printf("0\n");}
    else
    {
      ans = ( inc_sum(b) - inc_sum(b/2)*2 ) - ( inc_sum(a) - inc_sum(a/2)*2 ) + ( a * (a%2) );
      printf("%d\n",ans);
    }
  }

  return 0;
}
