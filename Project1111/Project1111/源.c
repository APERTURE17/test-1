#include <stdio.h>
#include <stdlib.h>//��ͷ�ļ��а���max��min������������Ҫ���ⶨ�壬�ô�дM

//����x��y�е����ֵ
int Max(int x, int y)/*�β�*/ {
	if (x > y) {
		return x;
	}
	return y;
}//�����Ķ���

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
	
	//ʹ�ò�����ָ��ķ�ʽ
	int a = 10;
	int b = 20;
	Swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	//int* x = &a;
	//int* y = &b;
	//*x���Ǹ���a�ĵ�ַ�ҵ�a�ı�������*x��a�ǵȼ۵�
	//int tmp = *x;//�����*Ϊ�����ò�����
	//*x = *y;
	//*y = tmp;//��*x��*y�Ľ��������Ƕ�a��b�Ľ���

	system("pause");
	return 0;
}//�����βκ�ʵ�εĹ�ϵ���β���ʵ�ε�һ�ݿ���

//01:00:00