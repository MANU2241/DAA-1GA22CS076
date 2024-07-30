#include <stdio.h>
#include <stdlib.h>
#define size 100
int count;
void bubblesort(int a[], int n  )
{
    int i,j,temp;
    for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-2-i;j++)
        {
            count++;
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
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
    bubblesort(a,n);
    printf("sorted elements are:");
        for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);

    }
    printf(" \n number of comarision is : %d ",count);
    return 0;
}
