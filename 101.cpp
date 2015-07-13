#include <stdio.h>

struct Stack
{
  int length;
  int container[30];
};

int pos[30];
Stack stack[30];

void resetAbove(int n)
{
  int posN = pos[n], t;
  while((t = stack[posN].container[stack[posN].length-1]) != n)
  {
    pos[t] = stack[t].container[stack[t].length++] = t;
    stack[posN].length--;
  }
}

void moveAll(int a, int b)
{
  int from = 0, cur;
  int posA = pos[a], posB = pos[b];
  while(stack[posA].container[from] != a) {from++;}
  
  for(cur = from; cur<stack[posA].length; cur++)
  { pos[stack[posB].container[stack[posB].length++] = stack[posA].container[cur]] = posB; }

  stack[posA].length = from;
}

void moveOnto(int a, int b) 
{
  resetAbove(a); 
  resetAbove(b);

  stack[pos[a]].length--;
  pos[stack[pos[b]].container[stack[pos[b]].length++] = a] = pos[b];
}

void moveOver(int a, int b) 
{
  resetAbove(a);

  stack[pos[a]].length--;
  pos[stack[pos[b]].container[stack[pos[b]].length++] = a] = pos[b];
}

void pileOnto(int a, int b) 
{
  resetAbove(b);
  moveAll(a,b);
}

void pileOver(int a, int b) 
{ moveAll(a,b); }

void showAll(int n)
{
  for(int i=0;i<n;i++)
  {
    printf("%d:",i);
    for(int j=0;j<stack[i].length;j++) { printf(" %d",stack[i].container[j]); }
    printf("\n");
  }
}

int main()
{
  int n, i, a, b;
  char ins[5], mod[5];

  while(1 == scanf("%d",&n))
  {
    for(i=0;i<n;i++) {pos[i] = i; stack[i].length = 1; stack[i].container[0] = i;}
    
    while(scanf("%s",ins) && 'q' != ins[0])
    {
      scanf("%d %s %d", &a, mod, &b);
      if(a == b || pos[a] == pos[b]) {continue;}

      if('m' == ins[0] ) { 'o' == mod[3] ? moveOnto(a, b) : moveOver(a,b); }
      else               { 'o' == mod[3] ? pileOnto(a, b) : pileOver(a,b); }
    }
    showAll(n);
  }

  return 0;
}
