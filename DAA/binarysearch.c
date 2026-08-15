#include <stdio.h>

int binarySearch(int arr[], int size, int key) {
    int beg= 0, end= size - 1;

    while (beg<= end) {
        int mid = (end +beg) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            beg = mid + 1;
        else
            end= mid - 1;
    }
    return -1; 
}

int main() {
    int arr[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter the number to search: ");
    scanf("%d", &key);
    int result = binarySearch(arr, size, key);
    if (result != -1)
        printf("Element %d found at index %d.\n", key, result);
    else
        printf("Element %d not found.\n", key);

    return 0;
}