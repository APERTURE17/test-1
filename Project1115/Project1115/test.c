//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//	/////////////////////////////////////////
//	// ��һ��
//	/////////////////////////////////////////
//
//	// char[6]
//	// char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	// printf("%d\n", sizeof(arr)); // 6 ����������ڴ��С
//	// printf("%d\n", sizeof(arr + 0));  // 4 arr + 0 �Ѿ����ָ����
//	// printf("%d\n", sizeof(*arr));// 1 *arr �õ�һ�� char
//	// printf("%d\n", sizeof(arr[1]));// 1 arr[1] �õ�һ�� char
//	// &arr ������ char(*)[6]
//	// printf("%d\n", sizeof(&arr));// 4 &arr �õ�����һ������ָ��, Ҳ��ָ��
//	// printf("%d\n", sizeof(&arr[0] + 1)); // 4 �õ�����һ�� char*
//
//	// strlen �����ַ����ĳ���, һ���� \0 ���ַ�����Ž��ַ���
//	// printf("%d\n", strlen(arr));  // δ������Ϊ
//	// printf("%d\n", strlen(arr + 0)); // δ������Ϊ
//	// ԭ����Ӧ��Ҫ����ʧ��, ���� C ���Զ������ͼ��û��ô�ϸ�,
//	// �͵��°� char ��ʽת���� char*. �������ǵõ���һ���Ƿ���ָ��. 
//	// �����õ�ʱ��ͻ����δ������Ϊ
//	// printf("%d\n", strlen(*arr));  
//	// �������ͬ��
//	// printf("%d\n", strlen(arr[1]));
//	// char(*)[6];
//	// &arr ���ͺ� char* ��һ��. �����ʽ����ת����ȥ�Ļ�, 
//	// �ͻ�õ�һ��ָ�� 'a' ָ��. �����ָ�뿪ʼ������ \0 ��Ȼ�Ҳ���
//	// printf("%d\n", strlen(&arr)); 
//	// ������������һ��
//	// printf("%d\n", strlen(&arr + 1));
//	// printf("%d\n", strlen(&arr[0] + 1)); // �õ�һ��ָ�� b ��ָ��. ������Ȼ��δ������Ϊ
//
//	/////////////////////////////////////////
//	// �ڶ���
//	/////////////////////////////////////////
//	// char arr[] = "abcdef";
//	// printf("%d\n", sizeof(arr));	// 7 �� \0 
//	// printf("%d\n", sizeof(arr + 0));// 4 arr + 0 �õ�һ�� char*
//	// printf("%d\n", sizeof(*arr));// 1 *arr �õ�һ���ַ�
//	// printf("%d\n", sizeof(arr[1]));// 1 ͬ��
//	// printf("%d\n", sizeof(&arr));// 4 &arr ����ָ��
//	// printf("%d\n", sizeof(&arr + 1));// 4 ͬ��
//	// printf("%d\n", sizeof(&arr[0] + 1));// 4 �õ�һ�� char*
//
//	// printf("%d\n", strlen(arr));//6 ���ַ�������, ���� \0
//	// printf("%d\n", strlen(arr + 0));// 6 �õ��Ļ���һ��ָ�� a ��ָ��
//	// printf("%d\n", strlen(*arr));// δ������Ϊ, *arr �õ����� �ַ� a
//	// printf("%d\n", strlen(arr[1]));// ͬ��
//	// printf("%d\n", strlen(&arr));// 6 &arr ��һ������ָ��, �����ĵ�ַǡ�þ���������Ԫ�ص�ַ
//	// printf("%d\n", strlen(&arr + 1));// δ������Ϊ, &arr ��һ������ָ��, + 1 ��������������, ��ʱ���Ѿ����ʵ��ǷǷ��ڴ���
//	// printf("%d\n", strlen(&arr[0] + 1));// 5 &arr[0] + 1 �õ�ָ�� b ��ָ��
//
//	/////////////////////////////////////////
//	// ������
//	/////////////////////////////////////////
//	// char* p = "abcdef";
//	// printf("%d\n", sizeof(p)); // 4
//	// printf("%d\n", sizeof(p + 1)); // 4
//	// printf("%d\n", sizeof(*p));// 1 *p ��һ�� char ����
//	// printf("%d\n", sizeof(p[1]));// 1 p[1] ��һ��char
//	// printf("%d\n", sizeof(&p));// 4 char**
//	// printf("%d\n", sizeof(&p + 1));// 4 char**
//	// printf("%d\n", sizeof(&p[0] + 1));// 4, char* ָ�� b
//
//	// printf("%d\n", strlen(p)); // 6
//	// printf("%d\n", strlen(p + 1)); //5 
//	// printf("%d\n", strlen(*p)); // δ������Ϊ
//	// printf("%d\n", strlen(p[1])); // δ������Ϊ
//	// printf("%d\n", strlen(&p));// δ������Ϊ. &p => char** 
//	// printf("%d\n", strlen(&p + 1)); // δ������Ϊ
//	// printf("%d\n", strlen(&p[0] + 1)); // 5
//
//
//
//	system("pause");
//	return 0;
//}