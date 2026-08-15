#include <stdio.h>

int main() {
    int x, n;
    int sum = 0;

    printf("Enter X: ");
    scanf("%d", &x);

    printf("Enter n: ");
    scanf("%d", &n);
    int i,j;
    for (i= 0; i <= n; i++) {
        int power = 1;
        for (j = 1; j <= i; j++) {
            power = power * x;
        }
        sum = sum + power;
    }
    printf("Sum of the series = %d\n", sum);
    return 0;
}
