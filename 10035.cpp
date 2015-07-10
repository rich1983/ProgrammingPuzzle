#include <stdio.h>

int main()
{
  int a, b, carry, carryCount;

  while(2 == scanf("%d %d",&a,&b))
  {
    if(0 == a+b) {break;}
    
    carry = carryCount = 0;
    while(a+b)
    {
      if(a%10 + b%10 + carry > 9) 
      {
	carryCount++;
	carry = 1;
      }
      else { carry = 0; }

      a /= 10;
      b /= 10;
    }

    if(carryCount)
    {
      printf("%d carry operation%s.\n",carryCount, (carryCount > 1 ? "s" : ""));
    }
    else
    {
      printf("No carry operation.\n");
    }

  }

  return 0;
}
