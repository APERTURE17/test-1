//1.��ɲ�������Ϸ��


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <Windows.h>
//#include <time.h>
//void Game() {
//	int toGuess = rand() % 100 + 1;//ϵͳ�Զ�����һ�������
//	printf("��һ��1��100֮���������");
//	while (1) {
//		printf("��һ�����֣�");
//		int num = 0;
//		scanf("%d", &num);
//		if (num < toGuess) {
//			printf("���˵��ˣ�\n");
//		}
//		else if (num > toGuess) {
//			printf("���˸��ˣ�\n");
//		}
//		else {
//			printf("�ߣ������ɶ��ˣ�\n");
//			break;
//		}
//	}
//}
//int Menu() {
//	printf("��������Ϸ\n");
//	printf("=========================\n");
//	printf("1.��ʼ��Ϸ\n");
//	printf("0.�˳���Ϸ\n");
//	printf("=========================\n");
//	printf("����������ѡ��");
//	int choice = 0;
//	scanf("%d", &choice);
//	return choice;
//}
//int main(){
//	srand((unsigned int)time(0));//��ʱ����Ϊ������ĳ�ʼֵ��time�����õ��Ľ��Ϊʱ���
//	while (1) {
//		int choice = Menu();
//		if (choice == 1) {
//			Game();
//		}
//		else {
//			printf("goodbye!\n");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}//��������Ϸ





//2.д����������������������в�����Ҫ�����֣� 
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <Windows.h>
//int main(){
//	//int arr[] = { 9, 5, 2, 7 };
//	//int toFind = 2;
//	//for (int i = 0; i < 4; i++) {
//	//	if (arr[i] == toFind) {
//	//		printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//	//		break;
//	//	}
//	//}
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int toFind = 2;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (arr[mid] < toFind) {
//			left = mid + 1;
//		} else if (arr[mid] > toFind) {
//			right = mid - 1;
//		} else {
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("û�ҵ���\n");
//	}
//	system("pause");
//	return 0;
//}




//3.��д����ģ��������������ĳ����� 
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <Windows.h>
//int main(){
//	//����һ������
//	int i = 0;
//	for (; i < 3; i++) {
//		char password[1024] = { 0 };
//		printf("���������룺");
//		scanf("%s", &password);
//		if (strcmp(password, "888888") == 0) {
//			printf("��¼�ɹ���\n");
//			break;
//		}
//		else {
//			printf("�����������������ԣ�\n");
//		}
//	}
//	if (i == 3) {
//		printf("���Ѿ�������Σ�\n");
//	}
//	//strcmp ���ǰ����ֵ���Ƚϴ�С
//	//�����һ��С�ڵڶ���������<0����������ȣ�����0�����ڣ�����>0������
//	system("pause");
//	return 0;
//}




//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define IS_SMALL_LETTER(a) (a <= 'z' && a >= 'a')
int main()
{
	char ch = '\0';
	while (ch != '\n')
	{
		ch = getchar();
		if (ch <= 'Z' && ch >= 'A')
		{
			ch += 'a' - 'A';
		}
		else if (IS_SMALL_LETTER(ch))
		{
			ch -= 'a' - 'A';
		}
		else if (isdigit(ch))
		{
			continue;
		}
		putchar(ch);
	}
	system("pause");
	return 0;
}