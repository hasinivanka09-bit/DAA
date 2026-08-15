#include <stdio.h>
#include<limits.h>
int main() {
    int n, k, i;
    int min, index;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter K: ");
    scanf("%d", &k);
    int count;
    for (count = 1; count <= k; count++) {
        min = INT_MAX;
        index = -1;
        for (i = 0; i < n; i++) {
            if (arr[i] < min) {
                min = arr[i];
                index = i;
            }
        }
        arr[index] = INT_MAX;
    }
    printf("The %dth smallest element is: %d\n", k, min);
    return 0;
}
