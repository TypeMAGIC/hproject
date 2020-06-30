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
	printf("a의 주소 = %p\n", &a);
	printf("b = %d\n", b);
	printf("b의 주소 = %p\n\n", &b);

	printf("포인터의 주소 = %p\n", &pointer);
	printf("포인터에 들어있는 주소 = %p\n", pointer);
	printf("포인터에 들어있는 주소에 들어있는 값 = %d\n\n", *pointer);

	printf("포인터2의 주소 = %p\n", &pointer_2);
	printf("포인터2에 들어있는 주소 = %p\n", pointer_2);
	printf("포인터2에 들어있는 주소에 들어있는 값 = %d\n\n", *pointer_2);

	printf("더블 포인터의 주소 = %p\n", &double_pointer);
	printf("더블 포인터에 들어있는 주소 = %p\n", double_pointer);
	printf("더블 포인터에 들어있는 주소에 들어있는 값 = %d\n\n", **double_pointer);

}