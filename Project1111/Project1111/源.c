#include <stdio.h>
#include <stdlib.h>//此头文件中包含max和min函数，所以若要另外定义，用大写M

//返回x和y中的最大值
int Max(int x, int y)/*形参*/ {
	if (x > y) {
		return x;
	}
	return y;
}//函数的定义

//void Swap(int x, int y) {
//	int tmp = x;
//	x = y;
//	y = tmp;
//}

void Swap(int* x, int* y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}//参数传指针的方式可以让一个函数从内部修改函数外部的变量，这样的参数称为输出型参数

int main() {
	
	//int ret = Max(10, 20)/*实参*/;//函数调用
	//printf("%d\n", ret);
	//ret = Max(100, 20);
	//printf("%d\n", ret);
	
	//int a = 10;
	//int b = 20;
	//Swap(a, b);
	//printf("a = %d, b = %d\n", a, b);//发现a和b并没有调换

	////以下是函数调用的等价代码
	//int x = a;
	//int y = b;
	//int tmp = x;
	//x = y;
	//y = tmp;//x和y调换了，但a和b没变
	
	//使用参数传指针的方式
	int a = 10;
	int b = 20;
	Swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	//int* x = &a;
	//int* y = &b;
	//*x就是根据a的地址找到a的变量，即*x和a是等价的
	//int tmp = *x;//这里的*为解引用操作符
	//*x = *y;
	//*y = tmp;//对*x和*y的交换，就是对a和b的交换

	system("pause");
	return 0;
}//函数形参和实参的关系：形参是实参的一份拷贝

//01:00:00