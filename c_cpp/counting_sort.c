#include <stdio.h>
#include <stdlib.h>

int maxim(int *arr, int n) {
  int m = arr[0];
  for (int i = 0; i < n; i++) {
    if (m < arr[i])
      m = arr[i];
  }

  return m;
}

void sort(int *arr, int n) {
  int a = maxim(arr, n);

  int *countArray = (int *)calloc((a + 1), sizeof(int));
  int *outputArray = (int *)calloc(n, sizeof(int));

  for (int i = 0; i < n; i++) {
    countArray[arr[i]]++;
  }

  for (int i = 1; i <= a; i++) {
    countArray[i] += countArray[i - 1];
  }

  for (int i = n - 1; i >= 0; i--) {
    outputArray[countArray[arr[i]] - 1] = arr[i];
    countArray[arr[i]]--;
  }

  for (int i = 0; i < n; i++) {
    arr[i] = outputArray[i];
  }

  free(outputArray);
  free(countArray);
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
