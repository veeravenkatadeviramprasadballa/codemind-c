#include <stdio.h>

int main()
{
    int  years, weeks;
    int n;
    scanf("%d",&n);
    years = n/365; //
    weeks = (n % 365)/7;
    n= n - ((years*365) + (weeks*7)); 
    printf("%d
", years);
    printf("%d
", weeks);
}