#include <stdio.h>

void sort(int *arr, int len) {
  for (int i = 0; i < len - 1; i++) {
    for (int j = 0; j < len - i - 1; j++) {
      if (*(arr + j) > *(arr + j + 1)) {
        int temp = *(arr + j + 1);
        *(arr + j + 1) = *(arr + j);
        *(arr + j) = temp;
      }
    }
  }
}

int main() {
  int arr[] = {5, 3, 7, 8, 5, 2, 1232, 7, 4, 3, 6, 7, 5, 3};
  int len = sizeof(arr) / sizeof(arr[0]);
  sort(arr, len);

  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
