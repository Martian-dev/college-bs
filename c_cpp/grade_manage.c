#include <stdio.h>

#define SIZE 5

void readVals(double (*arr)[SIZE]) {
  for (int i = 0; i < SIZE; i++) {
    printf("enter the marks of student no.%d", i + 1);
    for (int j = 0; j < SIZE; j++) {
      scanf("%lf", (arr[i] + j));
    }
  }
}

double maxMark(double *arr) {
  double max = *arr;
  for (int i = 0; i < SIZE; i++) {
    if (*(arr + i) > max) {
      max = *(arr + i);
    }
  }

  return max;
}

double average(double *arr) {
  double average = 0;
  for (int i = 0; i < SIZE; i++) {
    average += *(arr + i);
  }

  average /= SIZE;

  return average;
}

int main() {
  double db[SIZE][SIZE];

  readVals(db);

  for (int i = 0; i < SIZE; i++) {
    printf("Highest score of student no.%d: %lf.\n", i + 1, maxMark(db[i]));
    printf("Average score of student no.%d: %lf.\n", i + 1, average(db[i]));
  }

  return 0;
}
