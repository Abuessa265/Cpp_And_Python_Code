
#include <stdio.h>

int main ()
{
  int mat1[5][5] = { {0, 1, 2,3,4}, {1,2,3, 4, 5}, {1,2,6, 7, 8},{1,2,3,4,5},{1,2,3,4,5} };
  int mat2[5][5] = { {10, 11, 12,13,14}, {11,12,13, 14, 15}, {11,12,16, 17, 18},{11,12,13,14,15},{11,12,13,14,15} };
  int sum[5][5], i, j;
printf("Name: Sadia Kabir Mouly.\n"); 
  printf ("matrix 1 is :\n");
  for (i = 0; i < 5; i++)
    {
      for (j = 0; j < 5; j++)
	{
	  printf ("%d   ", mat1[i][j]);
	  if (j == 5 - 1)
	    {
	      printf ("\n\n");
	    }
	}
    }

  printf ("matrix 2 is :\n");
  for (i = 0; i < 5; i++)
    {
      for (j = 0; j < 5; j++)
	{
	  printf ("%d   ", mat2[i][j]);
	  if (j == 5 - 1)
	    {
	      printf ("\n");
	    }
	}
    }
  for (i = 0; i < 5; i++)
    for (j = 0; j < 5; j++)
      {
	sum[i][j] = mat1[i][j] + mat2[i][j];
      }

  printf ("\nSum of two matrices: \n");
  for (i = 0; i < 5; i++)
    {
      for (j = 0; j < 5; j++)
	{
	  printf ("%d   ", sum[i][j]);
	  if (j == 5 - 1)
	    {
	      printf ("\n");
	    }
	}
    }
 printf("\nId: 20234103321"); 
  return 0;
}


