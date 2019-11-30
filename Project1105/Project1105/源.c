

//1105

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	//int num = 1;
//	//while (num <= 10) {
//	//	printf("%d\n", num);
//	//	num += 1;
//	//}//打印1到10
//	for (int num = 1; num <= 10; num += 1) {
//		printf("%d\n", num);
//	}//打印1到10 for版
//	//for (初始化语句；循环条件；循环变量更新语句)
//	//流程：表达式1，表达式2，循环体，表达式3，表达式2，......
//	system("pause");
//	return 0;
//}



////break在while和for中体现是一样的。
////continue稍有差异：
////while中的continue接下来执行的是判断条件；
////for中的continue接下来执行的是表达式3，然后再是表达式2。
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
////找1到100所有3的倍数
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
//	//}//建议前闭后开
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



////do...while()循环
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
//}//阶乘
//int main(){
//	printf("请输入一个N：");
//	int n = 0;
//	scanf("%d", &n);//scanf里不要加\n换行
//	int result = Factor(n);
//	printf("result = %d\n", result);
//	system("pause");
//	return 0;
//}//计算n的阶乘
////缓存(cache)计算机中一种非常常见的思想方法。



//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int Factor(int n) {
//	int result = 1;
//	for (int i = 1; i <= n; i += 1)	{
//		result *= i;
//	}
//	return result;
//}//阶乘
//int main(){
//	int sum = 0;
//	for (int i = 1; i <= 10; i++) {
//		sum += Factor(i);
//	}
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}//1到10的阶乘和



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
//		system("cls");//cls: clear screen cmd 的命令
//		printf("%s\n", str2);
//		Sleep(200);//单位 毫秒
//		//Sleep表示睡眠，程序要放弃CPU，来休息一会。
//		//Sleep和strlen, printf, system有本质区别：
//		//strlen等为C语言的标准库函数；
//		//Sleep为操作系统的函数。
//		//win是Sleep，单位是毫秒(ms)；
//		//Linux是sleep，单位是秒(s)。
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




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <time.h>
void Game() {
	int toGuess = rand() % 100 + 1;//系统自动生成一个随机数
	printf("猜一个1到100之间的整数，");
	while (1) {
		printf("输一个数字：");
		int num = 0;
		scanf("%d", &num);
		if (num < toGuess) {
			printf("低了低了！\n");
		} else if (num > toGuess) {
			printf("高了高了！\n");
		} else {
			printf("哼，算你蒙对了！\n");
			break;
		}
	}
}
int Menu() {
	printf("猜数字游戏\n");
	printf("=========================\n");
	printf("1.开始游戏\n");
	printf("0.退出游戏\n");
	printf("=========================\n");
	printf("请输入您的选择：");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
int main(){
	srand((unsigned int)time(0));//用时间设为随机数的初始值，time函数得到的结果为时间戳
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
}//猜数字游戏
