#include <stdio.h>

void main()
{

	int a = 10;
	int* pointer = NULL;
	pointer = &a;

	int** double_pointer = &pointer;

	int b = 100;
	pointer = &b;
	**double_pointer = 15;

	int* pointer_2 = &a;
	*double_pointer = pointer_2;

	**double_pointer = ++(**double_pointer);



	printf("a = %d\n", a);
	printf("a�� �ּ� = %p\n", &a);
	printf("b = %d\n", b);
	printf("b�� �ּ� = %p\n\n", &b);

	printf("�������� �ּ� = %p\n", &pointer);
	printf("�����Ϳ� ����ִ� �ּ� = %p\n", pointer);
	printf("�����Ϳ� ����ִ� �ּҿ� ����ִ� �� = %d\n\n", *pointer);

	printf("������2�� �ּ� = %p\n", &pointer_2);
	printf("������2�� ����ִ� �ּ� = %p\n", pointer_2);
	printf("������2�� ����ִ� �ּҿ� ����ִ� �� = %d\n\n", *pointer_2);

	printf("���� �������� �ּ� = %p\n", &double_pointer);
	printf("���� �����Ϳ� ����ִ� �ּ� = %p\n", double_pointer);
	printf("���� �����Ϳ� ����ִ� �ּҿ� ����ִ� �� = %d\n\n", **double_pointer);

}