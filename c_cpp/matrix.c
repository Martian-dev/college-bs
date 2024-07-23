#include <stdio.h>

#define SIZE 3

void readVals(int (*arr)[SIZE]) {
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      scanf("%d", (arr[i] + j));
    }
  }
}

void printVals(int (*arr)[SIZE]) {
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      printf("%d ", *(arr[i] + j));
    }
    printf("\n");
  }
}

void multiply(int (*a)[SIZE], int (*b)[SIZE], int (*c)[SIZE]) {
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      for (int k = 0; k < SIZE; k++) {
        *(c[i] + j) += *(a[i] + k) * *(b[k] + j);
      }
    }
  }
}

void scalarMultiply(int k, int (*a)[SIZE], int (*b)[SIZE]) {
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      *(b[i] + j) = k * *(a[i] + j);
    }
  }
}

int checkEqual(int (*a)[SIZE], int (*b)[SIZE]) {
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      if (*(a[i] + j) != *(b[i] + j)) {
        return 0;
      }
    }
  }
  return 1;
}

int checkSymmetry(int (*a)[SIZE]) {
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < i; j++) {
      if (*(a[i] + j) != *(a[j] + i)) {
        return 0;
      }
    }
  }
  return 1;
}

int sumOfDiagonal(int (*a)[SIZE]) {
  int sum = 0;
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      if (i == j) {
        sum += *(a[i] + j);
      }
    }
  }
  return sum;
}

int main() {
  int a[SIZE][SIZE], b[SIZE][SIZE], c[SIZE][SIZE], d[SIZE][SIZE];

  // Reading values from the user input
  readVals(a);
  readVals(b);

  // Checking if two matrices are equal
  (checkEqual(a, b) == 1) ? printf("equal") : printf("not equal");

  // Calculating and printing the sum of diagonals
  printf("%d", sumOfDiagonal(a));

  // multiplying two matrices
  multiply(a, b, c);
  // printing the value of the resultant matrix
  printVals(c);

  // scalar multiplication
  int k;
  printf("Enter the scalar multiple: ");
  scanf("%d", &k);
  scalarMultiply(k, a, d);
  // printing the value of the resultant matrix
  printVals(d);

  // Checking for symmetric matrix
  (checkSymmetry(a) == 1) ? printf("symmetric") : printf("not symmetric");

  return 0;
}
