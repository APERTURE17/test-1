#include <stdio.h>
#include <stdlib.h>//��ͷ�ļ��а���max��min������������Ҫ���ⶨ�壬�ô�дM

//�൱�ڰ�.h�����ݸ���ճ��������
#include "����.h"

////����x��y�е����ֵ
//int Max(int x, int y)/*�β�*/ {
//	if (x > y) {
//		return x;
//	}
//	return y;
//}//�����Ķ���

//void Swap(int x, int y) {
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
void Swap(int* x, int* y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}//������ָ��ķ�ʽ������һ���������ڲ��޸ĺ����ⲿ�ı����������Ĳ�����Ϊ����Ͳ���

//�������1��Ϊ������������0��Ϊ��������
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

//����
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

//ͨ�������������ɶ��ֲ���
//��������������
//c�����е�bug
//������Ϊ������������ʽת��ָ�룬ָ��������Ԫ�ص�ָ��
int BinarySearch(int arr[], int size, int toFind) {
	int left = 0;
	int right = size - 1;//���һ��Ԫ���±�
	//printf("right = %d\n", right);
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] > toFind) {
			//�����
			right = mid - 1;
		} else if (arr[mid] < toFind) {
			//�ұ���
			left = mid + 1;
		} else {
			//�ҵ���
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
		PrintNum(num / 10);//�����ĵݹ飺һ��������������
	}
	printf("%d ", num % 10);
}

int main() {
	
	//int ret = Max(10, 20)/*ʵ��*/;//��������
	//printf("%d\n", ret);
	//ret = Max(100, 20);
	//printf("%d\n", ret);
	
	//int a = 10;
	//int b = 20;
	//Swap(a, b);
	//printf("a = %d, b = %d\n", a, b);//����a��b��û�е���

	////�����Ǻ������õĵȼ۴���
	//int x = a;
	//int y = b;
	//int tmp = x;
	//x = y;
	//y = tmp;//x��y�����ˣ���a��bû��
	
	////ʹ�ò�����ָ��ķ�ʽ
	//int a = 10;
	//int b = 20;
	//Swap(&a, &b);
	//printf("a = %d, b = %d\n", a, b);

	//int* x = &a;
	//int* y = &b;
	//*x���Ǹ���a�ĵ�ַ�ҵ�a�ı�������*x��a�ǵȼ۵�
	//int tmp = *x;//�����*Ϊ�����ò�����
	//*x = *y;
	//*y = tmp;//��*x��*y�Ľ��������Ƕ�a��b�Ľ���

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
}//�����βκ�ʵ�εĹ�ϵ���β���ʵ�ε�һ�ݿ���