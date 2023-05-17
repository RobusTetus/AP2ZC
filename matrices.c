/**
 * Matrix app
 *
 * @param oddeven[2] array containing count of odd and even numbers
 */
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

void printMatrix();
int sumMatrix();
int * oddevenMatrix();
int sevenMatrix();
int oddeven[2] = {0,0};

int main(){
  /**
 *
 * Main function
 *
 * @param sum Sum of all numbers in the matrix
 * @param matrix The specified matrix.
 */
  printf("Matice\n");
  
  int matrix[3][3] = {{1,77,77}, {4,5,6}, {77,8,9}};
  int sum = sumMatrix(matrix);
  oddevenMatrix(matrix);

  printf("\n");
  printMatrix(matrix);
  printf("Suma matice je %d\n", sum);
  assert(sum == 264);
  printf("77 je na %d řádcích.\n", sevenMatrix(matrix));
  assert(sevenMatrix(matrix) == 2);
  printf("Počet lichých čísel je %d\n", oddeven[0]);
  printf("Počet sudých čísel je %d\n", oddeven[1]);
  return 0;
}

void printMatrix(int matrix[3][3]){
  for(int x = 0; x < 3; x++){
    for(int y = 0; y < 3; y++){
      printf("%d, ", matrix[x][y]);
    }
    printf("\n");
  }
}

int sumMatrix(int matrix [3][3]){
  int sum = 0;
  for(int x = 0; x < 3; x++){
    for(int y = 0; y < 3; y++){
      sum+=matrix[x][y];
    }
  }
  return sum;
}

int * oddevenMatrix(int matrix[3][3]){
  for(int x = 0; x < 3; x++){
    for(int y = 0; y < 3; y++){
      if(matrix[x][y] % 2 != 0){
        oddeven[0] += 1;
      } else {
        oddeven[1] += 1;
      }
    }
  }
  return oddeven;
}

int sevenMatrix(int matrix [3][3]){
  int seven = 0;
  for(int x = 0; x < 3; x++){
    for(int y = 0; y < 3; y++){
      if (matrix[x][y] == 77){
        seven += 1;
        break;
      }
      
    }
  }
  return seven;
}
