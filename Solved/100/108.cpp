#include <stdio.h>

int main()
{
  int base[105][105];
  int d, x, y, dx, dy, tmp, curSum;
  int totalMax;

  while(1 == scanf("%d",&d))
  {
    totalMax = -128;
		for(y=1;y<=d;y++)
		{
			for(x=1;x<=d;x++)
			{
				scanf("%d",&base[y][x]);
        totalMax = totalMax > base[y][x] ? totalMax : base[y][x];
				base[y][x] += base[y-1][x] + base[y][x-1] - base[y-1][x-1];

				for(dy = 1;dy<y;dy++)
				{
					for(dx=1; dx<x;dx++)
					{ totalMax = ((tmp = base[y][x] - (base[dy-1][x] + base[y][dx-1] - base[dy-1][dx-1])) > totalMax) ? tmp : totalMax; }
				}
			}
		}
		printf("%d\n",totalMax);
  }

  return 0;
}
