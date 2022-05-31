// ONLY USING 2 VARIABLES

// Method is passed an array with 2 elements: a, b
void Swap(int[] arr) {
  int a = arr[0];
  int b = arr[1];
  b = a + b;
  a = b - a;
  b -= a;
  arr = {a, b};
}
