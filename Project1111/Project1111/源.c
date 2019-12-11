#include <stdio.h>
#include <stdlib.h>//此头文件中包含max和min函数，所以若要另外定义，用大写M

//相当于把.h的内容复制粘贴到这样
#include "声明.h"

////返回x和y中的最大值
//int Max(int x, int y)/*形参*/ {
//	if (x > y) {
//		return x;
//	}
//	return y;
//}//函数的定义

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

//如果返回1认为是素数，返回0认为不是素数
int IsPrime(int num) {
	if (num == 0) {
		return 0;
	}
	if (num == 1) {
		return 0;
	}
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return 0;
		}
	}
	return 1;
}

//闰年
int IsLeapYear(int year) {
	if (year % 100 == 0) {
		if (year % 400 == 0) {
			return 1;
		}
		return 0;
	} else {
		if (year % 4 == 0) {
			return 1;
		}
		return 0;
	}
}

//通过这个函数来完成二分查找
//数组必须是有序的
//c语音中的bug
//数组作为函数参数会隐式转成指针，指向数组首元素的指针
int BinarySearch(int arr[], int size, int toFind) {
	int left = 0;
	int right = size - 1;//最后一个元素下标
	//printf("right = %d\n", right);
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] > toFind) {
			//左边找
			right = mid - 1;
		} else if (arr[mid] < toFind) {
			//右边找
			left = mid + 1;
		} else {
			//找到了
			return mid;
		}
	}
	return -1;
}

//int Func(int x) {
//	x += 1;
//	return x;
//}
void Func(int* x) {
	*x += 1;
}

void PrintNum(unsigned int num) {
	if (num > 9) {
		PrintNum(num / 10);//函数的递归：一个函数调用自身
	}
	printf("%d ", num % 10);
}

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
	
	////使用参数传指针的方式
	//int a = 10;
	//int b = 20;
	//Swap(&a, &b);
	//printf("a = %d, b = %d\n", a, b);

	//int* x = &a;
	//int* y = &b;
	//*x就是根据a的地址找到a的变量，即*x和a是等价的
	//int tmp = *x;//这里的*为解引用操作符
	//*x = *y;
	//*y = tmp;//对*x和*y的交换，就是对a和b的交换

	//printf("%d\n", IsPrime(97));
	//printf("%d\n", IsLeapYear(1900));

	//int arr[4] = { 1, 2, 3, 4 };
	//int size = sizeof(arr) / sizeof(arr[0]);
	////printf("size = %d\n", size);
	//int ret = BinarySearch(arr, size, 2);
	//printf("%d\n", ret);

	//int num = 0;
	////num = Func(num);
	//Func(&num);
	//printf("%d\n", num);

	PrintNum(1234);

	system("pause");
	return 0;
}//函数形参和实参的关系：形参是实参的一份拷贝