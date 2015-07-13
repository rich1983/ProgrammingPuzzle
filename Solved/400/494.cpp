#include <stdio.h>
#include <string.h>

int main()
{
  char line[200];
  int count=0, len=0;
  bool inWord = false, isAlphabet = false;

  while(gets(line))
  {
    len=strlen(line);
    isAlphabet = inWord = false;
    count = 0;
    for(int i=0;i<len;i++)
    {
      isAlphabet = (line[i] >='A' && line[i] <= 'Z') || (line[i] >= 'a' && line[i] <= 'z');
      if( (!inWord) && isAlphabet) {count++; inWord = true;}
      inWord = isAlphabet;
    }
    printf("%d\n",count);
  }

  return 0;
}
