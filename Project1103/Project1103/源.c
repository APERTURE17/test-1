//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
////int main(){
////	int a = 10;
////	int b = 20;
////	int c = Add(a, b);
////	printf("c = %d\n", c);
////	system("pause");
////	return 0;
////}//��Ҫ���Ӿ��棬�Ѿ��浱������
//extern double Add(double a, double b);
////����������û�к����壬ֻ��һ����ͷ֧Ʊ�����߱���������һ�������ĺ���
////1.���߱���������һ������ΪAdd�ĺ���
////2.���߱���������������������������� double ����
////3.���߱����������������һ������ֵ������Ҳ�� double
//int main(){
//	double c = Add(10.0, 20.0);
//	printf("c = %f\n", c);//%d ʮ�����з��ŵ����� %f ��ӡһ��������
//	system("pause");
//	return 0;
//}



//#include<stdio.h>
//#include<stdlib.h>
//extern double Add(double a, double b);
////double Add(double x, double y){
////	return x + y;
////}
//int main(){
//	double c = Add(10.0, 20.0);
//	printf("c = %f\n", c);
//	system("pause");
//	return 0;
//}
//double Add(double x, double y){
//	return x + y;
//}
////��������Ҫ���ں������õ��Ϸ�������ͻ�����Ҳ�����������
////�����Ҫ�����·�����Ҫ���Ϸ����Ϻ�������




//#include <stdio.h>
//#include<stdlib.h>
//int is_prime(int n)//�ж�n�Ƿ�Ϊ����;
//{
//	int i;
//	for (i = 2; i < n; i++)//�����2~n-1�д������ӣ���������;
//	if (n%i == 0)return 0;
//
//	return 1;
//}
//int main()
//{
//	int n;
//	for (n = 100; n < 200; n++)
//	if (is_prime(n)) printf("%d,", n);//�����������;
//	system("pause");
//	return 0;
//}




//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}//��ӡ100-200֮�������




//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a, b;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			printf("%d*%d=%d\t", b, a, a*b);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}//����˷��ھ���




//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int year = 0, i = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			printf("%7d", year);
//			i++;
//			if (i % 10 == 0)
//			{
//				printf("\n");
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}//�ж�1000��---2000��֮�������





//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
////�꣺
////1.����һ������;
////2.�ض���һ�����͵�����;
////3.Ӱ�����������Ϊ;
////4.����һ������Ƭ��(�����ں�����Ч��);......
////��ı����൱���ı��滻;
//#define SIZE 5
//#define uint unsigned int//��ͬ��typedef unsigned int uint;
//#define ADD(x, y) x + y
//int main(){
//	printf("SIZE = %d\n", SIZE);
//	uint a = 10;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	printf("%d\n", ADD(10, 20));
//	system("pause");
//	return 0;
//}




//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int x = 10;
//	int* p = &x;//����д��int* p������Ҫд��int *p
//	//��������*��Ȼ��ͬ
//	printf("%d\n", *p);//* ��ӷ��ʲ�������Ҳ�н����ò�����
//	;//�����
//	system("pause");
//	return 0;
//}
////ָ��





////�ṹ�� ��һ���û��Զ��������
//#include<stdio.h>
//#include<stdlib.h>
////��ʱ�൱�ڴ�����һ���µ����� struct student
//struct student{
//	//��Ա/����/�ֶ�
//	char name[20];
//	int age;
//	int score;
//};
//int main(){
//	struct student s = { "����", 18, 100 };
//	//�ṹ������ĵ�ʹ�÷�����ʹ�����ĳ�Ա
//	//.��Ա���������
//	printf("%s\n", s.name);
//	s.age = 20;
//	printf("%d\n", s.age);
//	printf("%d\n", s.score);
//	system("pause");
//	return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	printf("��������ô��������� 1 ��ʾ Ը�⣬0 ��ʾ ��Ը�⣬2 ��ʾ �����п�");
//	int choice = 0;
//	scanf("%d",&choice);
//	if (choice == 1){
//		printf("����õ���offer��\n");
//	} else if (choice == 0){						//���Ҫһ��
//		printf("�ؼ�������ɣ�\n");
//	} else if (choice == 2){
//		printf("���Ͽ��ľ��У�\n");
//	} else {
//		printf("�������\n");
//	}
//	system("pause");
//	return 0;
//}




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int choice = 0;
//	scanf("%d", &choice);
//	//printf("%d\n", choice == 1);
//	//C�����У�0��ʾ�٣������ʾ��
//	if (choice) {
//		printf("hehe\n");
//	} else {
//		printf("haha\n");
//	}
//	system("pause");
//	return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int IsOdd(int x){
//	if (x % 2 == 0){
//		return 0;//����0��ʾż��
//	}
//	return 1;
//}
//int main(){
//	int x;
//	scanf("%d", &x);
//	printf("%d\n", IsOdd(x));
//	system("pause");
//	return 0;
//}




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
////1.switch�����еı�����ֻ��������
////2.break��䣬������©
////3.��̫�ܱ�︴�ӵ�����
////4.switchҲ֧��Ƕ�ף����Ƿǳ���
////����ʹ��if���
//int main(){
//	printf("��������������ڼ�(1-7):");
//	int day = 0;
//	scanf("%d", &day);
//	switch (day){
//	case 1:
//		printf("����һ!\n");
//		break; //������ǰ��switch
//	case 2:
//		printf("���ڶ�!\n");
//		break;
//	case 3:
//		printf("������!\n");
//		break;
//	case 4:
//		printf("������!\n");
//		break;
//	case 5:
//		printf("������!\n");
//		break;
//	case 6:
//		printf("������!\n");
//		break;
//	case 7:
//		printf("������!\n");
//		break;
//	default:
//		printf("��������!\n");
//		break;
//	}
//	system("pause");
//	return 0;
//}




//#include<stdio.h>
//#include<stdlib.h>
////whileִ�еĻ������̣�
////1.�ж�whileѭ��������
////2.�������������ִ��ѭ���壬
////3.�������������������ѭ����
////4.���ѭ����ִ�����ˣ��ٴ��ж�ѭ��������
//int main(){
//	//��1��ӡ��10
//	int num = 1;
//	while (num <= 10) {
//		printf("%d\n", num);
//		num += 1;
//	}
//	system("pause");
//	return 0;
//}




////break:������ǰ��ѭ����䣬��������ѭ����
////continue:�������ѭ����ֱ�ӽ�����һ��ѭ����
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	//��1��100���ҵ���һ����3����������
//	int num = 1;
//	while (num <= 100) {
//		if (num % 3 == 0) {
//			printf("%d\n", num);
//			break;
//		}
//		num++;
//	}
//	system("pause");
//	return 0;
//}



//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	//��1��100���ҵ����б�3����������
//	int num = 1;
//	while (num <= 100) {
//		if (num % 3 == 0) {
//			printf("%d\n", num);
//		}
//		num++;
//	}
//	system("pause");
//	return 0;
//}



//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	//��1��100���ҵ����б�3����������
//	int num = 1;
//	while (num <= 100) {
//		if (num % 3 != 0) {
//			num++;
//			continue;
//		}
//		printf("%d\n", num);
//		num++;
//	}
//	system("pause");
//	return 0;
//}




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int a = 0, b = 0, c = 0;
//	printf("������Ҫ�������������ͱ�����ֵ��\n");
//	printf("a = ");
//	scanf("%d", &a);
//	printf("b = ");
//	scanf("%d", &b);
//	c = a;
//	a = b;
//	b = c;
//	printf("������Ϊ��\na = %d, b = %d\n", a, b);
//	system("pause");
//	return 0;
//}//1.�����������α�����ֵ��������ֵ�����ݽ��н�����




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int x = 0, y = 0;
//	printf("������Ҫ�������������ͱ�����ֵ��\n");
//	printf("a = ");
//	scanf("%d", &x);
//	printf("b = ");
//	scanf("%d", &y);
//	x = x + y;
//	y = x - y;
//	x = x - y;
//	printf("������Ϊ��\na = %d, b = %d\n", x, y);
//	system("pause");
//	return 0;
//}//2.����������ʱ���������������������ݣ������⣩




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	
//	int i = 0;
//	int MAX = 0;
//	int arr[10] = { 0 };
//	printf("������10��������\n");
//	for (i = 0; i <= 9; i++){
//		scanf("%d", &arr[i]);
//	}
//	MAX = arr[1];
//	for (i = 1; i <= 9; i++){
//		if (arr[i] > MAX){
//			MAX = arr[i];
//		}
//	}
//	printf("���ֵΪ��%d\n", MAX);
//	system("pause");
//	return 0;
//}//3.��10�����������ֵ��




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int a, b, c, t;
//	printf("������3��������\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b){
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c){
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c){
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("��С����Ϊ��\n%d %d %d\n", a, b, c);
//	system("pause");
//	return 0;
//}//4.�����������Ӵ�С�����




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int a, b;
//	printf("����������������\n");
//	scanf("%d%d", &a, &b);
//	while (a != b){
//		if (a > b)
//			a = a - b;
//		else
//			b = b - a;
//	}
//	printf("���Լ��Ϊ��\n%d\n", a);
//	system("pause");
//	return 0;
//}//5.�������������Լ����

