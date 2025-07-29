#include <stdio.h>

void ascend(int *a, int n);

int main()
{
    int a[20];
    int i,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the Array Elements: ");
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    ascend(a,n);
    for (i=0; i<n; i++)
    {
        printf("\n%d", a[i]);
    }

    return 0;
} 

void ascend(int *a, int n)
{
    int i, j, temp;
    for (i=0;i<=n-2;i++)
    {
        for (j=0;j<=n-2;j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}