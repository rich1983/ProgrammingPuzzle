#include <stdio.h>
#include <string.h>

int main()
{
  char str[200];
  int i,len;

  while(scanf("%s",str)==1)
  {
    for(i=0, len=strlen(str);i<len;i++) { str[i]-=7; }
    printf("%s\n",str);
  }
  return 0;
}
