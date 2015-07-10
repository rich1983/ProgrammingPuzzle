#include <stdio.h>

int main()
{
  double a, b;
  while(2 == scanf("%lf %lf",&a, &b)) { printf("%.0lf\n", a > b ? a-b : b-a); }
  return 0;
}
