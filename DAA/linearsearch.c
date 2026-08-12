//LINEAR SEARCH :
#include <stdio.h>

int linear_search(int n, int key, int arr[]) {
    int i;

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i;  
        }
    }

    return -1;        
}

int main() {
    int a[] = {3, 45, 67, 23, 45, 87, 56, 98};
    int n = sizeof(a) / sizeof(a[0]);
    int key, pos;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    pos = linear_search(n, key, a);

    if(pos != -1)
        printf("Element found at position %d\n", pos + 1);
    else
        printf("Element not found\n");

    return 0;
}
