

//1105

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	//int num = 1;
//	//while (num <= 10) {
//	//	printf("%d\n", num);
//	//	num += 1;
//	//}//��ӡ1��10
//	for (int num = 1; num <= 10; num += 1) {
//		printf("%d\n", num);
//	}//��ӡ1��10 for��
//	//for (��ʼ����䣻ѭ��������ѭ�������������)
//	//���̣����ʽ1�����ʽ2��ѭ���壬���ʽ3�����ʽ2��......
//	system("pause");
//	return 0;
//}



////break��while��for��������һ���ġ�
////continue���в��죺
////while�е�continue������ִ�е����ж�������
////for�е�continue������ִ�е��Ǳ��ʽ3��Ȼ�����Ǳ��ʽ2��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
////��1��100����3�ı���
//int main(){
//	//int num = 1;
//	//while (num <= 100) {
//	//	if (num % 3 != 0) {
//	//		num += 1;
//	//		continue;
//	//	}
//	//	printf("%d\n", num);
//	//	num += 1;
//	//}
//	//for (int num = 1; num < 101; num += 1) {
//	//	if (num % 3 != 0) {
//	//		continue;
//	//	}
//	//	printf("%d\n", num);
//	//}//����ǰ�պ�
//	int num = 1;
//	for (; num <= 100; ) {
//		if (num % 3 != 0) {
//			num += 1;
//			continue;
//		}
//		printf("%d\n", num);
//		num += 1;
//	}
//	system("pause");
//	return 0;
//}



////do...while()ѭ��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int num = 1;
//	do {
//		printf("%d\n", num);
//		num += 1;
//	} while (num < 11);
//	system("pause");
//	return 0;
//}




//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int Factor(int n) {
//	int result = 1;
//	for (int i = 1; i <= n; i += 1)	{
//		result *= i;
//	}
//	return result;
//}//�׳�
//int main(){
//	printf("������һ��N��");
//	int n = 0;
//	scanf("%d", &n);//scanf�ﲻҪ��\n����
//	int result = Factor(n);
//	printf("result = %d\n", result);
//	system("pause");
//	return 0;
//}//����n�Ľ׳�
////����(cache)�������һ�ַǳ�������˼�뷽����



//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int Factor(int n) {
//	int result = 1;
//	for (int i = 1; i <= n; i += 1)	{
//		result *= i;
//	}
//	return result;
//}//�׳�
//int main(){
//	int sum = 0;
//	for (int i = 1; i <= 10; i++) {
//		sum += Factor(i);
//	}
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}//1��10�Ľ׳˺�



//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <Windows.h>
//int main(){
//	char str1[] = "Welcome to bit!";
//	char str2[] = "###############";
//	int left = 0;
//	int right = strlen(str1) - 1;
//	while (left <= right) {
//		str2[left] = str1[left];
//		str2[right] = str1[right];
//		left += 1;
//		right -= 1;
//		system("cls");//cls: clear screen cmd ������
//		printf("%s\n", str2);
//		Sleep(200);//��λ ����
//		//Sleep��ʾ˯�ߣ�����Ҫ����CPU������Ϣһ�ᡣ
//		//Sleep��strlen, printf, system�б�������
//		//strlen��ΪC���Եı�׼�⺯����
//		//SleepΪ����ϵͳ�ĺ�����
//		//win��Sleep����λ�Ǻ���(ms)��
//		//Linux��sleep����λ����(s)��
//	}
//	system("pause");
//	return 0;
//}



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




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <time.h>
void Game() {
	int toGuess = rand() % 100 + 1;//ϵͳ�Զ�����һ�������
	printf("��һ��1��100֮���������");
	while (1) {
		printf("��һ�����֣�");
		int num = 0;
		scanf("%d", &num);
		if (num < toGuess) {
			printf("���˵��ˣ�\n");
		} else if (num > toGuess) {
			printf("���˸��ˣ�\n");
		} else {
			printf("�ߣ������ɶ��ˣ�\n");
			break;
		}
	}
}
int Menu() {
	printf("��������Ϸ\n");
	printf("=========================\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.�˳���Ϸ\n");
	printf("=========================\n");
	printf("����������ѡ��");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
int main(){
	srand((unsigned int)time(0));//��ʱ����Ϊ������ĳ�ʼֵ��time�����õ��Ľ��Ϊʱ���
	while (1) {
		int choice = Menu();
		if (choice == 1) {
			Game();
		} else {
			printf("goodbye!\n");
			break;
		}
	}
	system("pause");
	return 0;
}//��������Ϸ
