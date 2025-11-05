#include <cstddef>
#include <iostream>
#include <limits>

using t = std::size_t;

void sort(int *arr, t len) {
  bool flag = true;
  while (flag) {
    flag = false;
    for (t i = 0; i + 1 < len; i++) {
      if (arr[i] > arr[i+1]) {
        flag = true;
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
  }
}

int main() {
  t len = 0;
  std::cin >> len;
  int *array = new int[len];

  int input = 0;
  for (t i = 0; i < len; i++) {
    std::cin >> input;
    array[i] = input;
  }
  sort(array,len);
  if (len % 2 == 0) {
    double sum = array[len / 2] + array[len / 2 - 1];
    std::cout << sum / 2 << "\n";
  } else {
    std::cout << array[len / 2] << "\n";
  }

  delete[] array;
}
