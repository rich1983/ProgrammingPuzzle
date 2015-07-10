#include <stdio.h>

int main()
{
  int set, lines;
  int a, b, c, ans;

  for(scanf("%d",&set);set;set--)
  {
    for(scanf("%d", &lines), ans = 0;lines;lines--)
    {
      scanf("%d %d %d",&a, &b, &c); 
      ans += a*c;
    }
    printf("%d\n",ans);
  }
}
