#include <stdio.h>
#define abs(a) ( (a) > 0 ? (a) : (-a) )

int main()
{
  int h, m;
  double angH, angM, ang;
  while(2 == scanf("%d:%d",&h, &m) && (h + m))
  {
    ang = abs(((30 * h) +  (0.5 * m) - (6 * m)));
    printf("%.3lf\n", (ang > 180 ? 360 - ang : ang));
  }
  return 0;
}
