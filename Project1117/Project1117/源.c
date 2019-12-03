//1.完成猜数字游戏。


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <Windows.h>
//#include <time.h>
//void Game() {
//	int toGuess = rand() % 100 + 1;//系统自动生成一个随机数
//	printf("猜一个1到100之间的整数，");
//	while (1) {
//		printf("输一个数字：");
//		int num = 0;
//		scanf("%d", &num);
//		if (num < toGuess) {
//			printf("低了低了！\n");
//		}
//		else if (num > toGuess) {
//			printf("高了高了！\n");
//		}
//		else {
//			printf("哼，算你蒙对了！\n");
//			break;
//		}
//	}
//}
//int Menu() {
//	printf("猜数字游戏\n");
//	printf("=========================\n");
//	printf("1.开始游戏\n");
//	printf("0.退出游戏\n");
//	printf("=========================\n");
//	printf("请输入您的选择：");
//	int choice = 0;
//	scanf("%d", &choice);
//	return choice;
//}
//int main(){
//	srand((unsigned int)time(0));//用时间设为随机数的初始值，time函数得到的结果为时间戳
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
//}//猜数字游戏





//2.写代码可以在整型有序数组中查找想要的数字， 
//找到了返回下标，找不到返回 - 1.（折半查找）


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
//	//		printf("找到了！下标是：%d\n", i);
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
//			printf("找到了！下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("没找到！\n");
//	}
//	system("pause");
//	return 0;
//}




//3.编写代码模拟三次密码输入的场景。 
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <Windows.h>
//int main(){
//	//输入一个密码
//	int i = 0;
//	for (; i < 3; i++) {
//		char password[1024] = { 0 };
//		printf("请输入密码：");
//		scanf("%s", &password);
//		if (strcmp(password, "888888") == 0) {
//			printf("登录成功！\n");
//			break;
//		}
//		else {
//			printf("您的输入有误，请重试！\n");
//		}
//	}
//	if (i == 3) {
//		printf("您已经输错三次！\n");
//	}
//	//strcmp 就是按照字典序比较大小
//	//如果第一个小于第二个，返回<0的整数；相等，返回0；大于，返回>0的整数
//	system("pause");
//	return 0;
//}




//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。


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