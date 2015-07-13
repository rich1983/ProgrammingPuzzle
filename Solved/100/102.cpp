#include <stdio.h>

int main()
{
  int bk[3][3];
  unsigned int move, minMove;
  int b = 0, g = 1, c = 2;
  char ans[4];

  while(9 == scanf("%d %d %d %d %d %d %d %d %d",&bk[0][0],&bk[0][1],&bk[0][2], &bk[1][0],&bk[1][1],&bk[1][2], &bk[2][0],&bk[2][1],&bk[2][2]))
  {
    minMove = 2147483648;

    // -- BCG --
    move = (bk[1][b] + bk[2][b]) + (bk[0][c] + bk[2][c]) + (bk[0][g] + bk[1][g]);
    if(move < minMove) {minMove = move; sprintf(ans,"BCG");}

    // BGC
    move = (bk[1][b] + bk[2][b]) + (bk[0][g] + bk[2][g]) + (bk[0][c] + bk[1][c]);
    if(move < minMove) {minMove = move; sprintf(ans,"BGC");}

    // CBG
    move = (bk[1][c] + bk[2][c]) + (bk[0][b] + bk[2][b]) + (bk[0][g] + bk[1][g]);
    if(move < minMove) {minMove = move; sprintf(ans,"CBG");}

    // CGB
    move = (bk[1][c] + bk[2][c]) + (bk[0][g] + bk[2][g]) + (bk[0][b] + bk[1][b]);
    if(move < minMove) {minMove = move; sprintf(ans,"CGB");}

    // GBC
    move = (bk[1][g] + bk[2][g]) + (bk[0][b] + bk[2][b]) + (bk[0][c] + bk[1][c]);
    if(move < minMove) {minMove = move; sprintf(ans,"GBC");}

    // GCB
    move = (bk[1][g] + bk[2][g]) + (bk[0][c] + bk[2][c]) + (bk[0][b] + bk[1][b]);
    if(move < minMove) {minMove = move; sprintf(ans,"GCB");}

    printf("%s %d\n",ans, minMove);
  }
  


  return 0;
}
