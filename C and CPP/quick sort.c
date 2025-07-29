#include <stdio.h>

//functions:
// main
// swap
// partition
// quick

//either declare quick before main, below #include

void quick(int a[20], int low, int high);
void swap(int a[], int *i, int *j);
int partition(int a[20], int low, int high);

int main()
{
    int a[20];
    int i,n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the Array Elements");
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    quick(a, 0, n-1);
    for (i=0; i<n; i++)
    {
        printf("\n%d", a[i]);
    }
    return 0;
}

void swap(int a[], int *i, int *j) //i and j are the pointers which receive the addresses of the two elements of the respective arrays
{
    int temp;
    temp=a[*i];
    a[*i]=a[*j];
    a[*j]=temp;
}

void quick(int a[20], int low, int high)
{
    int m;
    if(low<high)
    {
        m=partition(a,low,high);
        quick(a,low,m-1);
        quick(a,m+1,high);
    }
}

int partition(int a[20], int low, int high)
{
    int i, j, pivot;
    pivot=a[low];
    i=low;
    j=high;
    while (i<j)
    {
        while (a[i]<=pivot)
        {
            i++;
        }
        while (a[j]>pivot)
        {
            j--;
        }
        if (i<j)
        {
            swap(a, &i, &j);
        }
    }
    swap(a, &low, &j);

    return j;
}