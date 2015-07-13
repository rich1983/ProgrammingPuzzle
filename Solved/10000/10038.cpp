#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
  int set, cur,pre, dif, i;
  bool isJolly = true;
  bool flags[3005];

  while(1 == scanf("%d",&set))
  {
    for(scanf("%d",&pre), isJolly = true, i=1, memset(flags,0, sizeof(flags));i<set;i++, pre = cur)
    {
      scanf("%d",&cur);
      if(isJolly)
      {
	dif = abs(cur - pre);
	if(dif >= set || 0 == dif)  {isJolly = false;  }
	else if(flags[dif])	    {isJolly = false;  }
	else			    {flags[dif] = true;}
      }
    }
    if(isJolly) {printf("Jolly\n");}
    else        {printf("Not jolly\n");}
  }
  return 0;
}

