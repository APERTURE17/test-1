//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	printf("Hello world\n");
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//void main()
//{
//	int p, x, a, n;
//	p = 1;
//	a = 1;
//	n = 1;
//	printf("������x��ֵ��\n");
//	scanf_s("%d", &x);
//	for (n = 1; n <= 7; n++)
//	{
//		a = n;
//		p = p + n*pow(x, a);
//	}
//	printf("Pn(x)=%d\n", p);
//	system("pause");
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//void main()
//{
//	int p, x, a, n;
//	p = 1;
//	a = 1;
//	n = 1;
//	printf("������x��ֵ��\n");
//	scanf_s("%d", &x);
//	for (n = 1; n <= 7; n++)
//	{
//		a = a*x;
//		p = p + n*a;
//	}
//	printf("Pn(x)=%d\n", p);
//	system("pause");
//	return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//void main()
//{
//	int p, x, s, n, m;
//	p = 1;
//	n = 7;
//	m = 1;
//	s = n;
//	printf("������x��ֵ��\n");
//	scanf_s("%d", &x);
//	for (n = 7; n >= 1; n--)
//	{
//		m = s*x;
//		s = m + n - 1;
//	}
//	p = 1 + m;
//	printf("Pn(x)=%d\n", p);
//	system("pause");
//	return 0;
//}





//#include <stdio.h>
//#include <stdlib.h>
//int m = 0;
////ȫ�ֱ�����������:�������̣���������:�����������򣻲�����ʹ��ȫ�ֱ���
//int main()
//{
//	//�ֲ�������������:ĳ�������ڲ�����������:��ǰ�����
//	char a = 0;
//	short b = 0;
//	int c = 0;//���ͣ�����һ����int
//	long d = 0;//������
//	long long e = 0;//��������
//	float f = 0;//�����ȸ�����
//	double g = 0;//˫���ȸ����ͣ�С��һ����double
//	printf("Char:%d\n", sizeof(a));//char���ݷ�Χ��0 -> 255  -128 -> +127
//	printf("Short:%d\n", sizeof(b));//short���ݷ�Χ��0 -> 65535  -32768 -> +32767
//	printf("Int:%d\n", sizeof(c));//int���ݷ�Χ��0 -> 42��9ǧ��  -21�� -> +21��
//	printf("Long:%d\n", sizeof(d));
//	printf("Long long:%d\n", sizeof(e));
//	printf("Float:%d\n", sizeof(f));
//	printf("Double:%d\n", sizeof(g));
//	//%d��ʽ���ַ���
//	//sizeof�鿴һ���������ڴ���ռ�����ֽ�
//	system("pause");
//	return 0;
//}


////VAX���


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
////����1.const;2.����ֵ����(0.0,10,'a',"abcd");3.enumö��;4.#define��
//enum Sex {
//	MALE,
//	FEMALE,
//	UNKNOWN,
//};//enumö��
//#define A 10//��
//int main()
//{
//	const int a = 10;//����
//	printf("a=%d\n", a);
//	//�����޸�
//	int b = 10;//����
//	printf("b=%d\n", b);
//	b = 20;
//	printf("b=%d\n", b);
//	//���޸ģ�b���޸ķ��������й���
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", UNKNOWN);
//	printf("%d\n", A);
//	'c';
//	//�ַ�
//	"hehe";
//	//�ַ���
//	printf("hehe\n");
//	//  \nת���ַ�
//	//  \tˮƽ�Ʊ��(tab)
//	printf("%d\n", strlen("\328\t"));//strlen��ʾ�ַ�������
//	//ע��
//	//���ע�� Ctrl+K Ctrl+C
//	//�ſ�ע�� Ctrl+K Ctrl+U
//	/*
//		����ע��
//		����ע��
//		����ע��
//		����ע��
//	*/
//	system("pause");
//	return 0;
//}




//#define _CRT_SECURE_NO_WARNINGS//���ã���VS�汾�в�ʹ��scanf_s����ʹ��ͨ�õ�scanf
////����������������棬���Ҿ�������ճ��
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	printf("��������ô��������� 1 ��ʾ Ը�⣬0 ��ʾ ��Ը�⣺");
//	int choice = 0;
//	// & ȡ��ַ����
//	scanf("%d",&choice);
//	// = ��ֵ
//	// == �Ƚ����
//	if (choice == 1){
//		printf("����õ���offer��\n");
//	}
//	else{
//		printf("�ؼ�������ɣ�\n");
//	}
//	system("pause");
//	return 0;
//}// ѡ��




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	//��ӡ1 - 10
//	int num = 1;
//	//���������������ѭ��
//	while (num <= 10){
//		printf("%d\n", num);
//		num = num + 1;//��C�����еȼ���num += 1;(+= ������)
//	}
//	system("pause");
//	return 0;
//}// ѭ��




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//// int �����ķ���ֵ����
//// Add ������
//// int x, int y, �����Ĳ���
//// {    } ������
//int Add(int x, int y){
//	// sum
//	int sum = x + y;
//	// return ��ʾ��������(����)��
//	return sum;
//}// ����-���� ����-ԭ���� ����ֵ-���ղ�Ʒ ��������Ĵ���-�ӹ�����
//int main()//main����
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);//�����ĵ���
//	printf("%d\n", c);//printf�⺯��
//	system("pause");
//	return 0;
//}// ������һ������Ƭ�Σ����ظ�ʹ��



//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4 };
//	//�����ʹ�ú���[ ]ȡ�±����
//	//�����±��Ǵ�0��ʼ������
//	printf("%d\n", arr[1]);
//	//printf("%d\n", arr[10]);//�±�Խ�磬��һ�ֵ��͵Ĵ�����룬�õ��Ľ������Ԥ��
//	char arr1[10] = { 'h', 'e', 'h', 'e' };//�ַ�����
//	char arr2[10] = "hehe";//�ַ���������'\0'(���ַ�)��β
//	system("pause");
//	return 0;
//}// ����


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//typedef unsigned int uint;//typedef ��һ�����ʹ�����һ������
//int main()
//{
//	unsigned int num = 1;//�޷��ŵ�����
//	uint num2 = 1;
//	system("pause");
//	return 0;
//}




/*	static ��C��������Ҫ��3���÷�
	1.����һ���ֲ��������޸���������Ϊ��������
	2.����һ��ȫ�ֱ������޸ı�����������ֻ���ڵ�ǰ�ļ��з��ʣ����ܿ��ļ�����
	3.����һ��������������ȫ�ֱ�����һ���ģ��޸���������Ϊ��ǰ�ļ��з���
*/


//#include<stdio.h>
//#include<stdlib.h>
////void ����û�з���ֵ
////void Func(){
////	int x = 1;
////	x = x + 1;
////	printf("%d\n", x);
////}
//void Func(){
//	static int x = 1;//static �޸���������Ϊ��������
//	x = x + 1;
//	printf("%d\n", x);
//}
//int main()
//{
//	Func();
//	Func();
//	Func();
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
////��������һ���ļ��е�ȫ�ֱ���ʱ����Ҫ���ϱ�������
//extern int global;//extern ������������
//int main()
//{
//	printf("%d\n", global);
//	system("pause");
//	return 0;
//}
////�޷������ⲿ����(���Ӵ���ֻ��������û�ж���)




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





#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	////��ӡ1��10
	//int num = 1;
	//while (num <= 10) {
	//	printf("%d\n", num);
	//	num += 1;
	//}
	//��ӡ1��10 for��
	for (int num = 1; num <= 10; num += 1) {
		printf("%d\n", num);
	}
	system("pause");
	return 0;
}


























//1. ������A�е����ݺ�����B�е����ݽ��н�����������һ����
//2. ����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ��
//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��


//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a, b;
//	for (a = 1; a <= 7; a++)
//	{
//		for (b = 1; b <= 2 * a - 1; b++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	a--;
//	for (a = 6; a >= 1; a--)
//	{
//		for (b = 1; b <= 2 * a - 1; b++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}//***



//
//




//1.��ɲ�������Ϸ��



//2.д����������������������в�����Ҫ�����֣� 
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�



//3.��д����ģ��������������ĳ����� 
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����



//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������


