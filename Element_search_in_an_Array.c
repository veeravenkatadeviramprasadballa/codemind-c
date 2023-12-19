//arrays//
#include<stdio.h>
int main()
{
	int a,i; // size
	scanf("%d",&a);//reading the size of array
	int arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	int flag=0,se;
	scanf("%d",&se);
	for(i=0;i<a;i++)
	{
	if(arr[i]==se){
		flag=1;
		break;
	}
	}
	if(flag==0) printf("False");
	else printf("True");
}