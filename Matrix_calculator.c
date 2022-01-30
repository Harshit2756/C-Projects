// Harshit khnadelwal
/*Write a program to accept details of two matrices. Add and multiply given matrices and print the result.*/
#include <stdio.h>
int main()
{
  int m, n, p, q, Multi;
  int a[100][100], b[100][100];
  // matrix a
start:
  printf("No of rows and column in a : \n");
  scanf("%d %d", &m, &n);

  printf("Enter the elements of matrix a :\n");
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d ", &a[i][j]);
    }
  }
  // matrix b
  printf("No of rows and column in b :\n");
  scanf("%d %d", &p, &q);

  printf("Enter the elements of matrix b :\n");
  for (int i = 0; i < p; i++)
  {
    for (int j = 0; j < q; j++)
    {
      scanf("%d", &b[i][j]);
    }
  }

  if (m != p || n != q)
  {
    printf("These matrice can't be added pls redifine them.\n");
    goto start;
  }
  else if (n != p)
  {
    printf("These matrice can't be mutliplyed pls redifine them.\n");
    goto start;
  }
  else
  { // matrix Addition
    printf("addition of two matrix is :\n");
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        printf("%d \t", a[i][j] + b[i][j]);
      }
      printf("\n");
    }

    // matrix Multiplication

    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < q; j++)
      {
        Multi = 0;
        for (int k = 0; k < n; k++)
        {
          Multi += a[i][k] * b[k][j];
        }
      }
    }
    printf("Multiplication of two matrix is :\n");
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < q; j++)
      {
        printf("%d \t", Multi);
      }
      printf("\n");
    }
  }
  return 0;
}