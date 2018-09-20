#include <stdio.h>
int main() 
{
	int a,t,i,b=-1;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&a);
	    if(a<10)
	    {
	        printf("What an obedient servant you are!\n");
	    }	    
	    else
	    {
	        printf("%d\n",b);
	    }
	}
	return 0;
}