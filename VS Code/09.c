#include<stdio.h>


int main(void) {
  int a1, a2, b1, b2;
  printf("Enter the size of the first array (nxn): ");
  scanf("%d %d", &a1, &a2);

  printf("Enter the size of the second array (nxn): ");
  scanf("%d %d", &b1, &b2);

  if(a1 != b1 && a2 != b2) {
    printf("Matrix Addition not possible!\n");
    return 0;
  }

  int A[a1][a2], B[b1][b1], C[a1][a2];

  printf("\nEnter the elements for Matrix A\n");
  for(int i = 0; i < a1; i++) {
    for(int j = 0; j < a2; j++) {
       printf("For element A[%d][%d]: ", i+1, j+1);
       scanf("%d", &A[i][j]);
    }
  }
  printf("\nEnter the elements for matrix B:\n");
  for(int i = 0; i < a1; i++) {
    for (int j = 0; j < a2; j++) {
       printf("For element B[%d][%d]: ", i+1, j+1);
       scanf("%d", &B[i][j]);
    }
  }

  for(int i = 0; i < a1; i++) {
    for(int j = 0; j < a2; j++) {
      C[i][j] = A[i][j] + B[i][j];
    }
  }
  
  printf("\nMatrix A:\n");
  for(int i = 0; i < a1; i++) {
    for(int j = 0; j < a2; j++) {
       printf("%d ", A[i][j]);
    }
    printf("\n");
  }

  printf("\nMatrix B:\n");
  for (int i = 0; i < a1; i++) {
    for (int j = 0; j < a2; j++) {
       printf("%d ", B[i][j]);
    }
    printf("\n");
  }

  printf("\nResultant Matrix:\n");
  for (int i = 0; i < a1; i++) {
    for (int j = 0; j < a2; j++) {
       printf("%d ", C[i][j]);
    }
    printf("\n");
  }
}
