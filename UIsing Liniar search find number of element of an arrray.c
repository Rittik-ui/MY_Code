#include<stdio.h>

int value(int arr[],int s,int num)
{
    int count=0;
    for(int i=0;i<s;i++)
    {
        if(arr[i]== num)
            count++;
    }
    return count;
}

int main()
{
    int n,s;
    printf("Enter range : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter Searching value : ");
    scanf("%d",&s);
    int poriman=value(a,n,s);
    printf("%d = %d bar",s,poriman);
}
