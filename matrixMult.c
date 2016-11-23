#include<stdio.h>

//Take 4 inputs from the user. Matrix 1 #columns must = #row Matrix 2 
//If condition isn't met, reprompt user, and write to error to Dimensions
//Mismatch. If there are no numbers write to error "Invalid input" and exit with -1
//Matrix 1 2 ints rows, length
//Matrix 2 2 ints '', ''
//Matrix 1 elements
//Matrix 2 elements
//Print Matrix 1 and 2
int main(){
  int mtx_1[2];
  printf("Insert matrix 1 dimensions separated by a space: ");
  scanf("%d %d", mtx_1, mtx_1+1);

  int mtx_2[2];
  printf("Insert matrix 2 dimensions separated by a space: ");
  scanf("%d %d", mtx_2, mtx_2+1);

  printf("Matrix 1 dims = %d %d\n", *mtx_1, *(mtx_1+1));
  printf("Matrix 2 dims = %d %d\n", *mtx_2, *(mtx_2+1));


return 0;
}
