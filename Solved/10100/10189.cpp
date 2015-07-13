#include <stdio.h>
#include <string.h>

int main()
{
  int h, w, set = 1;
  int x, y, dx, dy;
  int puzzle[105][105];
  char line[105];
  while(2 == scanf("%d %d", &h, &w))
  {
    if(0 == (w + h)) {break;}
    memset(puzzle, 0, sizeof(puzzle));

    for(y=0;y<h;y++)
    { 
      for(scanf("%s",line), x = 0; x < w; x++)
      {
	if('*' == line[x])
	{ 
	  for(dx = -1; dx < 2; dx++) { for(dy = -1; dy < 2; dy++)
	  { if(-1 != puzzle[y+dy+1][x + dx + 1] ) { puzzle[y+dy+1][x + dx + 1]++; }}}

	  puzzle[y+1][x+1] = -1;
	}
      }
    }
    
    if(set > 1) {printf("\n");}
    printf("Field #%d:\n",set++);
    for(y=1; y<=h;y++)
    {
      for(x=1;x<=w;x++)
      {
	if(-1 == puzzle[y][x]) {printf("*");}
	else                   {printf("%d",puzzle[y][x]);}
      }
      printf("\n");
    }
  }
}
