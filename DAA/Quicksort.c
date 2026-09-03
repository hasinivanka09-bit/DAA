#include<stdio.h>
int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i=low + 1;
    int j=high;
    int temp;
    while (i<=j)
    {
        if (a[i]<=pivot)
        {
            i++;
        }
        else if(a[j]> pivot)
        {
            j--;
        }
        else
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}
void quicksort(int a[],int low,int high){
	if(low<high){
		int pi=partition(a,low,high);
		quicksort(a,low,pi-1);
		quicksort(a,pi+1,high);
	}
}
int main()
{
    int a[100],n,i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, n - 1);
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
