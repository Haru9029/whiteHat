#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *arr,n;
	scanf("%d",&n);
	
	arr = (int *)malloc(sizeof(int)*n);
	
	for(int i=0;i<n;++i)
		scanf("%d",&arr[i]);
	
	for(int i=n;i>0;--i)
		printf("%d ",arr[i-1]);
	
	free(arr);
	
	return 0;
}
