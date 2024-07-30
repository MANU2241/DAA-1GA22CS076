#include <stdio.h>
#include <stdlib.h>
#define size 100
int count;
int partition(int a[],int l,int r )
{
    int i,j,pivot,temp;
    pivot=a[l];
    i=l+1;
    j=r;
    while(1)
    {
        while(pivot>=a[i] && i<=r)
        {
            count++;
            i++;
        }
        while(pivot<a[j])
        {
            count++;
            j--;
        }
        count++;
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        else{
            temp=a[j];
            a[j]=a[l];
            a[l]=temp;
            return j;
        }
    }
}
void quicksort(int a[size],int l,int r)
{
    int s;
    if(l<r)
    {
        s=partition(a,l,r);
        quicksort(a,l,s-1);
        quicksort(a,s+1,r);

    }
}
int main()
{
    int i,a[size],n;
    printf("Read array size :");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    printf("sorted array \n");
    for(i=0;i<n;i++){
        printf("%d \t",a[i]);
    }
    printf("\n The number of comparision:%d",count);
    return 0;
}
