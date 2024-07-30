#include <stdio.h>
#include <stdlib.h>
#define size 100
int count;
void selectionsort(int a[], int n  )
{
    int i,j,temp,min;
    for(i=0;i<=n-2;i++)
    {
        min=i;
        for(j=i+1;j<=n-1;j++)
        {
            count++;
            if(a[j]<a[min])
                min=j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;

        }
    }

int main()
{
    int i,n,a[50];
    printf("enter the array size:");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    selectionsort(a,n);
    printf("sorted elements are:");
        for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);

    }
    printf(" \n number of comparision is : %d ",count);
    return 0;
}
