//arrays//
#include<stdio.h>
int main()
{
	int a,i,count; // size
	scanf("%d",&a);//reading the size of array
	int arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	int c;
	scanf("%d",&c);
	for(i=0;i<a;i++)
	{
	    if(arr[i]==c)
	    count++;
	}
	printf("%d",count);
}