
#include <concepts>
#include <string>

template <std::equality_comparable T>
size_t find(const T& value, const T* arr, size_t size) {
 for (size_t i {0}; i < size; i++) {
  if (arr[i] == value) {
   return i;
  }
 }
 return -1;
}

