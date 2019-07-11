#include <stdio.h>
#include <stdlib.h>

void quickSort(int arr[], int left, int right)
{
    register int i = left, j = right;
    int pivot = arr[(left + right) / 2];	//수열의 가운데를 피봇으로 설정 
    
	/*
    	좌우 분할
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
		재귀 함수
	*/
    if (left < j)
        quickSort(arr, left, j);

    if (i < right)
        quickSort(arr, i, right);
}

int main()
{
	int n;
	int *arr;	//배열(포인터) 
	
	/*
		입력 
	*/
	scanf("%d",&n);
	arr = (int *)malloc(sizeof(int)*n); //동적 할당
	
	for(register int i=0;i<n;++i)	//숫자 입력
		scanf("%d",&arr[i]);
	
	/*
		Quick sort(퀵 정렬) 
	*/
	quickSort(arr,0,n-1);
	
	/*
		출력
	*/
	for(register int i=0;i<n;++i) 
		printf("%d ",arr[i]);
	
	return 0;
}
