#include <stdio.h>

int main()
{
	int n;
	reload:                    //���̺��� �ݷ�( : ) ���� ������. 
		scanf("%d", &n);
	printf("%d\n", n);
	if(n!=0) goto reload; //reload��� �����ִ� ���̺�� ���� �̵�
	
	return 0;
}
