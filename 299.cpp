#include <stdio.h>

int main()
{
  int set, i, j, t;
  int count;
  int trains, trainArray[55];
  for(scanf("%d",&set);set;set--)
  {
    for(i=0, count=0, scanf("%d",&trains);i<trains;i++) { scanf("%d",&trainArray[i]); }

    for(i=0;i<trains;i++)
    {
      for(j=i+1;j<trains;j++)
      {
	if(trainArray[i]>trainArray[j]) { count++,t=trainArray[i],trainArray[i]=trainArray[j],trainArray[j]=t; }
      }
    }

    printf("Optimal train swapping takes %d swaps.\n",count);
  }
}
