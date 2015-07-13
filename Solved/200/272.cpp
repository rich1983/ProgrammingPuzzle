#include <stdio.h>
#include <string.h>

int main()
{
  char line[500];
  int len;
  bool isOdd = true;
  while(gets(line))
  {
    len = strlen(line);
    for(int i=0;i<len;i++)
    {
      if(line[i] == '"') { printf("%s", isOdd ? "``" : "''"); isOdd = !isOdd;}
      else               { printf("%c",line[i]);}
    }
    printf("\n");
  }

  return 0;
}

