#include <stdio.h>
int main() {
int n, k, i, j, temp;
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter the elements: ");
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
printf("Enter K: ");
scanf("%d", &k);
for (i = 0; i < n - 1; i++) {
for (j = i + 1; j < n; j++) {
if (arr[i] > arr[j]) {
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
}
printf("The %dth smallest element is: %d\n", k, arr[k - 1]);
return 0;
}