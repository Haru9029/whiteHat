#include <stdio.h>

int main()
{
	int var, prime = 0;	//prime = (�Ҽ�) 
	
	scanf("%d", &var);	//�Է� 
	
	for(int i=2;i<var;++i)	//���� ���� �Ҽ� 
	{	
		if(var%i==0)
		{
			prime = i; 
			break;
		}	
	}
	
	if(prime == 0)	//�Է� ���� ���� �Ҽ����� ��� 
	{
		printf("wrong number");
		return -1;
	}	
	else
	{
		for(int i=2;i<(var/prime);++i)
		{	
			if((var/prime)%i==0)	//�� �Ҽ��� ������ ��Ÿ�� �� ���� ��� 
			{
				printf("wrong number");
				return -1;
			}
		}
		printf("%d %d", prime, var/prime);	//�� �Ҽ��� ������ ��Ÿ�� �� �ִ� ���(���) 
	}
	
	return 0;
}
