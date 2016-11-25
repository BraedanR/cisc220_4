//Luisa Aimoli 10169687
//Braedan Robinson 10188414

#include<string.h>
#include<stdio.h>
#include<stdlib.h>

//Take 4 inputs from the user. Matrix 1 #columns must = #row Matrix 2 
//If condition isn't met, reprompt user, and write to error to Dimensions
//Mismatch. If there are no numbers write to error "Invalid input" and exit with -1
//Matrix 1 2 ints rows, length
//Matrix 2 2 ints '', ''
//Matrix 1 elements
//Matrix 2 elements
//Print Matrix 1 and 2

int** createArray(int rows, int columns, int mtxNum) { 
  int **newMtx;
  int x,y,offset;
  int *mtxStart;
  offset = rows * sizeof(int *);
  newMtx = malloc( offset  + rows * columns * sizeof(int));
  mtxStart = (int *)((char *)newMtx + offset);
  printf("Insert matrix %d elements separated by a space: ",mtxNum);
  for (x = 0; x < rows; x++) {
      newMtx[x] = mtxStart + x*columns;
      for( y = 0; y < columns; y ++) {
         scanf("%d", &newMtx[x][y]);
    }  }
  return newMtx;
}

int main(){
  int equal = -1;
  while (equal==-1) {
  int mtx_1[2];
  printf("Insert matrix 1 dimensions separated by a space: ");
  scanf("%d %d", mtx_1, mtx_1+1); 
  int rows1 = mtx_1[0];
  int cols1 = mtx_1[1];

  int mtx_2[2];
  printf("Insert matrix 2 dimensions separated by a space: ");
  scanf("%d %d", mtx_2, mtx_2+1);
  int rows2 = mtx_2[0];
  int cols2 = mtx_2[1];
  
  if (cols1 != rows2) {
     printf("The columns in matrix 1 do not equal the rows in matrix 2\n");
     continue;
} else {
     equal = 0;
}
  int **ptr1 = createArray(rows1, cols1, 1);
  int **ptr2 = createArray(rows2, cols2, 2);
 
free(ptr1);
free(ptr2);
}
return 0;
}
