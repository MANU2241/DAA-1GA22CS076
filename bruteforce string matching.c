#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int count;
int bfsm(char T[],char P[])
{
    int n,m,i,j;
    n=strlen(T);
    m=strlen(P);
    for(i=0;i<=n-m;i++)
    {
        j=0;
        while(j<m && P[j]==T[i+j])
        {
            j=j+1;
            count++;
        }
        count++;

        if(j==m)
            return i;
    }
    return -1;
}
int main()
{
    char T[10],P[10];
    int flag;
    printf("\n Read Text\n");
    scanf("%s",T);
    printf("\n Read Pattern\n");
    scanf("%s",P);
    flag=bfsm(T,P);
    if(flag==-1)
        printf("\n Pattern not found");
    else
        printf("\n Pattern found at %d location",flag+1);
        printf("\n Number of comparision is %d",count);
    return 0;
}
