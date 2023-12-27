#include <stdio.h>  
#include<string.h>  
int main()  
{  
   char str1[50];
   char str2[50]; 
   int value; 
   scanf("%s",str1);  
   scanf("%s",str2);  
   value=strcmp(str1,str2);  
   if(value==0)  
   printf("Strings are Equal");  
   else  
   printf("Strings are not Equal");  
   return 0;  
}  