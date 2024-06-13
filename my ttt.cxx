#include<stdio.h>
char arr[10] = {'0' , '1' , '2', '3', '4', '5','6','7','8','9'};
void printboard();
int main()
{
  char x,o;
  int player;
  printf("      TIC TAC TOE\n");
  printboard();
  if(player)
  printf("Player %c's turn",x);
  return 0;
}
void printboard()
{
    printf("      |        |      \n");
    printf("   %c  |   %c    |   %c   \n",arr[1],arr[2],arr[3]);
    printf("      |        |      \n");
    printf("________________________\n");
    printf("      |        |      \n");
    printf("  %c   |   %c    |   %c   \n",arr[4],arr[5],arr[6]);
    printf("      |        |      \n");
    printf("________________________\n");
    printf("      |        |      \n");
    printf("  %c   |   %c    |   %c   \n",arr[7],arr[8],arr[9]);
    printf("      |        |      \n");
}