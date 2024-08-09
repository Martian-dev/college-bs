#include <stdio.h>

int search(int *arr, int start, int end, int a) {
  if (end >= start) {
    int mid = (start + end) / 2;

    if (*(arr + mid) == a) {
      return *(arr + mid);
    }
    if (*(arr + mid) > a) {
      return search(arr, mid + 1, end, a);
    }
    return search(arr, start, mid - 1, a);
  }
  return -1;
}

int main() {

  int arr[] = {1, 2, 3, 4, 5, 6};

  printf("%d", search(arr, 0, 6, 4));

  return 0;
}
