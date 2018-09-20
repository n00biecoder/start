#include <stdio.h>
#include <math.h>
int main() 
{
	int t,n,i,z;
	scanf ("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf ("%d",&n);
	    z = sqrt(n);
	    printf ("%d\n",z);
	}
	return 0;
}