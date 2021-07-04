#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
	/*** ArrayList�� ���� �� �ʱ�ȭ ***/
	List list;
	int data;
	int sum=0;
	ListInit(&list);

	for (int i = 1; i < 10; i++) {
		LInsert(&list, i);
	}


	if(LFirst(&list, &data))    // ù ��° ������ ��ȸ
	{
		sum += data;
		while (LNext(&list, &data)) {   // �� ��° ������ ������ ��ȸ
			sum += data;

		}
	}
	printf("Sum = %d \n\n",sum);

	/*** ���� 22�� Ž���Ͽ� ��� ���� ***/
	if(LFirst(&list, &data))
	{
		if(data %2==0 || data%3 ==0)
			LRemove(&list);
		
		while(LNext(&list, &data))
		{
			if(data % 2 == 0 || data % 3 == 0)
				LRemove(&list);
		}
	}

	/*** ���� �� ����� ������ ��ü ��� ***/
	printf("���� �������� ��: %d \n", LCount(&list));

	if(LFirst(&list, &data))
	{
		printf("%d ", data);
		
		while(LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");
	return 0;
}	