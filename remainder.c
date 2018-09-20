#include <stdio.h>
#include <math.h>
int main() 
{
	int T,A,B,i,z;
	scanf ("%d",&T);
	for (i=0;i<T;i++)
	{
	    scanf("%d %d",&A,&B);
	    z = A%B;
	    printf ("%d\n",z);
	}
	return 0;
}