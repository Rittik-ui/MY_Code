
/**
ID : 213902069
Rittik Halder
*/
#include<stdio.h>

int plaus(int a[], int n)
{
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==10)
                printf("%d %d",a[i],a[j]);
        }
    }
}

int main()
{
    int value;

    printf("Enter range : ");
    scanf("%d",&value);
    int a[value];
    printf("Enter value : ");
    for(int i=0;i<value;i++){
        scanf("%d",&a[i]);
    }
    plaus(a,value);
}
