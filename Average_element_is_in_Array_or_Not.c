#include<stdio.h>
int main()
{
    int i,a;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=0;i<a;i++)
    {
        sum+=arr[i];
    }
    int avg=sum/a,flag=0;
    for(i=0;i<a;i++)
    {
        if(arr[i]==avg)
        {flag++;
        break;}
    }
    if(flag==1)
    {
        printf("True");
    }
    else printf("False");
}