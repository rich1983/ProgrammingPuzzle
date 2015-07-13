#include <stdio.h>
#include <math.h>

int main()
{
  double n, p;
  while(2 == scanf("%lf %lf", &n, &p))
  {
    printf("%.0lf\n",pow(p, 1/n));
  }
}
