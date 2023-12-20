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
	int count=0;
	for(i=0;i<a;i++)
	{
		if(arr[i]%2!=0&&i%2!=0)
		count++;
	}
	if(count>=a/2) printf("True");
	else printf("False");
}

