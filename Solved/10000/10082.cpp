#include <stdio.h>
#include <string.h>

int main()
{
  char str[500];
  int i=0,len;


    while(gets(str))
    {
        for(i=0,len=strlen(str);i<len;i++)
        {
        if(str[i]==' ')
            printf(" ");
        else
        {
            if(str[i]=='1')
                printf("%c",'`');
            else if(str[i]=='2')
                printf("%c",'1');
            else if(str[i]=='3')
                printf("%c",'2');
            else if(str[i]=='4')
                printf("%c",'3');
            else if(str[i]=='5')
                printf("%c",'4');
            else if(str[i]=='6')
                printf("%c",'5');
            else if(str[i]=='7')
                printf("%c",'6');
            else if(str[i]=='8')
                printf("%c",'7');
            else if(str[i]=='9')
                printf("%c",'8');
            else if(str[i]=='0')
                printf("%c",'9');
            else if(str[i]=='-')
                printf("%c",'0');
            else if(str[i]=='=')
                printf("%c",'-');
            else if(str[i]=='W')
                printf("%c",'Q');
            else if(str[i]=='E')
                printf("%c",'W');
            else if(str[i]=='R')
                printf("%c",'E');
            else if(str[i]=='T')
                printf("%c",'R');
            else if(str[i]=='Y')
                printf("%c",'T');
            else if(str[i]=='U')
                printf("%c",'Y');
            else if(str[i]=='I')
                printf("%c",'U');
            else if(str[i]=='O')
                printf("%c",'I');
            else if(str[i]=='P')
                printf("%c",'O');
            else if(str[i]=='[')
                printf("%c",'P');
            else if(str[i]==']')
                printf("%c",'[');
            else if(str[i]=='\\')
                printf("%c",']');
            else if(str[i]=='S')
                printf("%c",'A');
            else if(str[i]=='D')
                printf("%c",'S');
            else if(str[i]=='F')
                printf("%c",'D');
            else if(str[i]=='G')
               printf("%c",'F');
            else if(str[i]=='H')
                printf("%c",'G');
            else if(str[i]=='J')
                printf("%c",'H');
            else if(str[i]=='K')
                printf("%c",'J');
            else if(str[i]=='L')
                printf("%c",'K');
            else if(str[i]==';')
                printf("%c",'L');
            else if(str[i]=='\'')
                printf("%c",';');
            else if(str[i]=='X')
                printf("%c",'Z');
            else if(str[i]=='C')
                printf("%c",'X');
            else if(str[i]=='V')
                printf("%c",'C');
            else if(str[i]=='B')
                printf("%c",'V');
            else if(str[i]=='N')
                printf("%c",'B');
            else if(str[i]=='M')
                printf("%c",'N');
            else if(str[i]==',')
                printf("%c",'M');
            else if(str[i]=='.')
                printf("%c",',');
            else if(str[i]=='/')
                printf("%c",'.');
            else if(str[i]==8)
                printf("%c",'=');
        }
        }
        printf("\n");
    }
    return 0;
}
