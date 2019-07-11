#include <stdio.h>
#include <stdlib.h>

void quickSort(int arr[], int left, int right)
{
    register int i = left, j = right;
    int pivot = arr[(left + right) / 2];	//������ ����� �Ǻ����� ���� 
    
	/*
    	�¿� ����
    */
	do
    { 
      	while (arr[i] < pivot)	i++;
      	while (arr[j] > pivot)	j--;
      	if (i<= j)
    	{
        	int temp = arr[i];
          	arr[i] = arr[j];
          	arr[j] = temp;
          	i++; j--;
    	}
    } while (i<=j);

    /*
		��� �Լ�
	*/
    if (left < j)
        quickSort(arr, left, j);

    if (i < right)
        quickSort(arr, i, right);
}

int main()
{
	int n;
	int *arr;	//�迭(������) 
	
	/*
		�Է� 
	*/
	scanf("%d",&n);
	arr = (int *)malloc(sizeof(int)*n); //���� �Ҵ�
	
	for(register int i=0;i<n;++i)	//���� �Է�
		scanf("%d",&arr[i]);
	
	/*
		Quick sort(�� ����) 
	*/
	quickSort(arr,0,n-1);
	
	/*
		���
	*/
	for(register int i=0;i<n;++i) 
		printf("%d ",arr[i]);
	
	return 0;
}
