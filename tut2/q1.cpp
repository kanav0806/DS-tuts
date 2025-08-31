#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
int low = 0, high = n - 1;
while (low <= high) {
int mid = (low + high) / 2;
if (arr[mid] == key)
return mid; // found
else if (arr[mid] < key)
low = mid + 1;
else
high = mid - 1;
}
return -1; // not found
}

int main() {
int arr[] = {11, 12, 22, 25, 34, 64, 90};
int n = sizeof(arr) / sizeof(arr[0]);
int key = 25;
int result = binarySearch(arr, n, key);
if (result != -1)
cout << "Element found at index " << result;
else
cout << "Element not found";

return 0;
}
