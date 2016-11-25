//Luisa Aimoli 10169687
//Braedan Robinson 10188414

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

//Take 4 inputs from the user. Matrix 1 #columns must = #row Matrix 2 
//If condition isn't met, reprompt user, and write to error to Dimensions
//Mismatch. If there are no numbers write to error "Invalid input" and exit with -1
//Matrix 1 2 ints rows, length
//Matrix 2 2 ints '', ''
//Matrix 1 elements
//Matrix 2 elements
//Print Matrix 1 and 2

//Incomplete
//Segmentation error when creating the matrix

//creates a new matrix, and returns a 2D pointer
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
    } }
  return newMtx;
}

//Goes through each element and prints it in a matrix fashion
void printMatrix(int **mtx, int rows, int columns, int mtxNum) {
  printf("Matrix %d:\n", mtxNum);
  for (int x = 0; x < rows; x++) {
      for (int y = 0; y < columns; y++) {
            printf("     %d", mtx[x][y]);
      }
      printf("\n");
  }  
}

//Segmentation error when creating matrix pointer newMtx
//Traces through elements held in ptr1 and ptr2, and creates a new matrix based on the rows of 
//ptr2 and the columns of ptr1
int** multiplyMatrix(int **ptr1,int **ptr2, int rows, int columns) {
  int offset;
  int *mtxStart;
  offset = rows * sizeof(int *);
  int **newMtx = malloc ( offset + rows * columns * sizeof(int));
  mtxStart = (int *)((char *)newMtx + offset);
  for (int x = 0; x < rows; x++) {
      newMtx[x] = mtxStart + x*columns;
      for (int y = 0; y < columns; y++) {
          newMtx[x][y] = ptr1[x][y] * ptr2[x][y];
          printf("Element [%d,%d] = %d\n", x,y, newMtx[x][y]);
          }
   }
  return newMtx;
} 

//checks if the input is a digit if not exits program
int checkInput(int rows, int columns) {
   if (isdigit(rows)) {
      return 0;
      }
   else {
      fprintf(stderr, "Invalid Input\n");
      exit(-1);
      }
   if (isdigit(columns)) {
      return 0;
   }
   else { 
      fprintf(stderr, "Invalid Input\n");
      exit(-1);
      }
}

int main(){
  int equal = -1;
  while (equal==-1) {
  
  int mtx_1[2];
//char mtx_1[2]; program doesn't function correctly using this but it detects if its not an int
  printf("Insert matrix 1 dimensions separated by a space: ");  
  scanf("%d %d", mtx_1, mtx_1+1);
//scanf("%s %s", mtx_1, mtx_1+1); // detects if input is an int 
//  checkInput(mtx_1[0], mtx_1[1]); faulty with un commented code
  int rows1 = mtx_1[0];
  int cols1 = mtx_1[1];

  int mtx_2[2];
//char mtx_2[2]; program doesn't function correctly using this but it detects if its not an int
  printf("Insert matrix 2 dimensions separated by a space: ");
  scanf("%d %d", mtx_2, mtx_2+1);
//scanf("%s %s", mtx_2, mtx_2+1);  detects if input is an int 
//  checkInput(mtx_2[0], mtx_2[1]); faulty with un commented code
  int rows2 = mtx_2[0];
  int cols2 = mtx_2[1];
 
  if (cols1 != rows2) {
     fprintf(stderr, "Dimensions Mismatch\n");
     continue;
} else {
     equal = 0;
}
  int **ptr1 = createArray(rows1, cols1, 1);
  int **ptr2 = createArray(rows2, cols2, 2);
  printMatrix(ptr1, rows1, cols1, 1);
  printMatrix(ptr2, rows2, cols2, 2);
  int **multMtx = multiplyMatrix(ptr1, ptr2, rows2, cols1);
  printMatrix(multMtx, rows2, cols1, 3);
free(ptr1);
free(ptr2);
}
return 0;
}
