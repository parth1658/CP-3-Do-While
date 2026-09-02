#include <stdio.h>
int main()
{
    int i,n;
    printf ("Enter a number to get sum of that all numbers");
    scanf ("%d",&n);
    for ( i=1 ; i<=n ; i++)
    {
     printf ("%d\n",i*(i+1)/2);
    }
}
