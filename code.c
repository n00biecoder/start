#include <stdio.h>
#include <math.h>
int main() 
{
	int T,N,i,j,x,y,z=0;
	scanf ("%d",&T);
	for (i=0;i<T;i++)
	{
	    scanf("%d",&N);
	    x = log10(N)+1;
	    for(j=0;j<x;j++)
	    {
	        y = N%10;
	        N = (N-y)/10;
	        z = z +y;
	    }
	    printf("%d\n",z);
	    z = 0;
	}
	return 0;
}