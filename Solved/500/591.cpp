#include <stdio.h>
#include <stdlib.h>

int main()
{
  int set = 1;
  int cols, colsArray[60];
  int i, sum, avg;
  for(;scanf("%d",&cols);set++)
  {
    if(0 == cols) {break;}

    printf("Set #%d\n",set);

    for(sum = i = 0;i<cols; i++)
    {
      scanf("%d",&colsArray[i]);
      sum += colsArray[i];
    }
    avg = sum / cols;

    for(sum=0, i=0;i<cols;i++) { sum += (colsArray[i] > avg ? colsArray[i] - avg : 0); }

    printf("The minimum number of moves is %d.\n\n", sum);
  }

  return 0;
}
