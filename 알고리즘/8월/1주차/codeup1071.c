#include <stdio.h>

int main()
{
	int n;
	reload:                    //레이블은 콜론( : ) 으로 끝난다. 
		scanf("%d", &n);
	printf("%d\n", n);
	if(n!=0) goto reload; //reload라고 적혀있는 레이블로 실행 이동
	
	return 0;
}
