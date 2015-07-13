#include <stdio.h>

int main()
{
  int set, students, i;
  int scores[1005], sum, above;
  double avg;
  for(scanf("%d",&set);set;set--)
  {
    scanf("%d",&students);
    for(i=0, sum=0;i<students;i++) 
    {
      scanf("%d",&scores[i]);
      sum += scores[i];
    }

    avg = (double)sum / (double)students;
    for(i=0, above=0;i<students;i++) {if(scores[i] > avg) {above++;}}
    printf("%.3lf%%\n", 100.0 * above / students);
  }
  
  return 0;
}
