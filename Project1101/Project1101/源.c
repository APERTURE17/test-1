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


