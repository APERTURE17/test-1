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

//ָ��������һ�ֱ״������Ĳ�����ָ���������ײ���Ұָ��

//1.ָ��Ӽ�����
//2.ָ���ָ�룺������ָ��֮����˼���Ԫ�أ��󲿷������û�����壬Ҫ���������������ָ��������ͬ����ͬһ�������ռ�
//3.ָ��֮��Ĺ�ϵ����

//void*���ܽ�������1.2.����

//*(p + 1)��p[1]�ȼ�,��p[1]�Ǻ�����д�������׺��������