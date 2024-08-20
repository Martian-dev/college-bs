#include <stdio.h>

void swap(int *a, int *b) {
  *a += *b;
  *b = *a - *b;
  *a = *a - *b;
}

void sort(int *arr, int n) {
  for (int i = 1; i < n; i++) {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
      swap(&arr[j - 1], &arr[j]);
      j--;
    }
  }
}

int main() {
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  sort(arr, n);

  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
