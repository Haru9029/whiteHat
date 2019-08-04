#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int x,y,z;
	
	scanf("%d %d %d",&x,&y,&z);
	
    if(x>y)
    	swap(&x,&y);
    if(x>z)
    	swap(&x,&z);
    if(y>z)
    	swap(&y,&z);
    	
    printf("%d %d %d",x,y,z);
    
    return 0;
}
