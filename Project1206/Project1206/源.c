#include <stdio.h>
#include <stdlib.h>
int main() {
	//double* p = (double*)0x100;
	//printf("%p %p %p", p - 1, p + 1, p + 2);
	int arr[4] = { 1, 2, 3, 4 };
	int* p = &arr[0];
	int* p1 = &arr[0];
	int* p2 = &arr[2];
	int ret = p1 - p2;
	/*printf("%p\n", arr);
	printf("%p\n", p);
	printf("%p\n", p+1);
	printf("%d\n", arr[1]);
	printf("%d\n", *(p+1));
	printf("%d\n", p[1]);*/
	system("pause");
	return 0;
}

//指针运算是一种弊大于利的操作，指针运算容易产生野指针

//1.指针加减整数
//2.指针减指针：算两个指针之间隔了几个元素，大部分情况下没有意义，要想有意义必须两个指针类型相同且在同一个连续空间
//3.指针之间的关系运算

//void*不能进行上述1.2.操作

//*(p + 1)和p[1]等价,但p[1]是很糟糕的写法，容易和数组混淆