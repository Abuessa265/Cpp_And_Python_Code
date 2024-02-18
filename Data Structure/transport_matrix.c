#include <stdio.h>
 
int main()
{
printf("Name: Sadia Kabir Mouly.\n"); 
  int  c, d, matrix[10][10], transpose[10][10];
 
  int row=6,col=7;
  printf("Enter elements of the matrix : \n");
 
  for (c = 0; c < row; c++)
    for (d = 0; d < col; d++)
      scanf("%d", &matrix[c][d]);

printf("Normal matrix:\n");
 
  for (c = 0; c < row; c++) {
    for (d = 0; d < col; d++)
      printf("%d\t", matrix[c][d]);
    printf("\n");
  }
 
 printf("\n");

  for (c = 0; c < row; c++)
    for (d = 0; d < col; d++)
      transpose[d][c] = matrix[c][d];
 
  printf("Transpose of the matrix:\n");
 
  for (c = 0; c < col; c++) {
    for (d = 0; d < row; d++)
      printf("%d\t", transpose[c][d]);
    printf("\n");
  }
printf("\nId: 20234103321");
  return 0;
}