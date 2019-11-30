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
////}//不要忽视警告，把警告当错误处理
//extern double Add(double a, double b);
////函数声明，没有函数体，只是一个空头支票，告诉编译器存在一个这样的函数
////1.告诉编译器存在一个名字为Add的函数
////2.告诉编译器这个函数有两个参数，都是 double 类型
////3.告诉编译器这个函数还有一个返回值，类型也是 double
//int main(){
//	double c = Add(10.0, 20.0);
//	printf("c = %f\n", c);//%d 十进制有符号的整数 %f 打印一个浮点数
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
////函数定义要放在函数调用的上方，否则就会出现找不到定义的情况
////如果非要放在下方，需要在上方加上函数声明




//#include <stdio.h>
//#include<stdlib.h>
//int is_prime(int n)//判断n是否为素数;
//{
//	int i;
//	for (i = 2; i < n; i++)//如果在2~n-1中存在因子，则不是素数;
//	if (n%i == 0)return 0;
//
//	return 1;
//}
//int main()
//{
//	int n;
//	for (n = 100; n < 200; n++)
//	if (is_prime(n)) printf("%d,", n);//是素数则输出;
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
//}//打印100-200之间的素数




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
//}//输出乘法口诀表




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
//}//判断1000年---2000年之间的闰年





//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
////宏：
////1.定义一个常量;
////2.重定义一下类型的名称;
////3.影响编译器的行为;
////4.定义一个代码片段(类似于函数的效果);......
////宏的本质相当于文本替换;
//#define SIZE 5
//#define uint unsigned int//等同于typedef unsigned int uint;
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
//	int* p = &x;//建议写成int* p，而不要写成int *p
//	//上下两个*截然不同
//	printf("%d\n", *p);//* 间接访问操作符，也叫解引用操作符
//	;//空语句
//	system("pause");
//	return 0;
//}
////指针





////结构体 是一种用户自定义的类型
//#include<stdio.h>
//#include<stdlib.h>
////此时相当于创建了一种新的类型 struct student
//struct student{
//	//成员/属性/字段
//	char name[20];
//	int age;
//	int score;
//};
//int main(){
//	struct student s = { "张三", 18, 100 };
//	//结构体最核心的使用方法是使用它的成员
//	//.成员访问运算符
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
//	printf("你会认真敲代码吗？输入 1 表示 愿意，0 表示 不愿意，2 表示 家里有矿：");
//	int choice = 0;
//	scanf("%d",&choice);
//	if (choice == 1){
//		printf("你会拿到好offer！\n");
//	} else if (choice == 0){						//风格要一致
//		printf("回家卖红薯吧！\n");
//	} else if (choice == 2){
//		printf("您老开心就行！\n");
//	} else {
//		printf("输入错误！\n");
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
//	//C语言中，0表示假，非零表示真
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
//		return 0;//返回0表示偶数
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
////1.switch括号中的变量，只能填整数
////2.break语句，不能遗漏
////3.不太能表达复杂的条件
////4.switch也支持嵌套，但是非常丑
////优先使用if语句
//int main(){
//	printf("请输入今天是星期几(1-7):");
//	int day = 0;
//	scanf("%d", &day);
//	switch (day){
//	case 1:
//		printf("星期一!\n");
//		break; //跳出当前的switch
//	case 2:
//		printf("星期二!\n");
//		break;
//	case 3:
//		printf("星期三!\n");
//		break;
//	case 4:
//		printf("星期四!\n");
//		break;
//	case 5:
//		printf("星期五!\n");
//		break;
//	case 6:
//		printf("星期六!\n");
//		break;
//	case 7:
//		printf("星期天!\n");
//		break;
//	default:
//		printf("输入有误!\n");
//		break;
//	}
//	system("pause");
//	return 0;
//}




//#include<stdio.h>
//#include<stdlib.h>
////while执行的基本过程：
////1.判定while循环条件，
////2.如果条件成立，执行循环体，
////3.如果条件不成立，结束循环，
////4.如果循环体执行完了，再次判定循环条件。
//int main(){
//	//从1打印到10
//	int num = 1;
//	while (num <= 10) {
//		printf("%d\n", num);
//		num += 1;
//	}
//	system("pause");
//	return 0;
//}




////break:跳出当前的循环语句，结束整个循环。
////continue:结束这次循环，直接进入下一次循环。
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	//从1到100中找到第一个被3整除的整数
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
//	//从1到100中找到所有被3整除的整数
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
//	//从1到100中找到所有被3整除的整数
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
//	printf("请输入要交换的两个整型变量的值：\n");
//	printf("a = ");
//	scanf("%d", &a);
//	printf("b = ");
//	scanf("%d", &b);
//	c = a;
//	a = b;
//	b = c;
//	printf("交换后为：\na = %d, b = %d\n", a, b);
//	system("pause");
//	return 0;
//}//1.给定两个整形变量的值，将两个值的内容进行交换。




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int x = 0, y = 0;
//	printf("请输入要交换的两个整型变量的值：\n");
//	printf("a = ");
//	scanf("%d", &x);
//	printf("b = ");
//	scanf("%d", &y);
//	x = x + y;
//	y = x - y;
//	x = x - y;
//	printf("交换后为：\na = %d, b = %d\n", x, y);
//	system("pause");
//	return 0;
//}//2.不允许创建临时变量，交换两个数的内容（附加题）




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	
//	int i = 0;
//	int MAX = 0;
//	int arr[10] = { 0 };
//	printf("请输入10个整数：\n");
//	for (i = 0; i <= 9; i++){
//		scanf("%d", &arr[i]);
//	}
//	MAX = arr[1];
//	for (i = 1; i <= 9; i++){
//		if (arr[i] > MAX){
//			MAX = arr[i];
//		}
//	}
//	printf("最大值为：%d\n", MAX);
//	system("pause");
//	return 0;
//}//3.求10个整数中最大值。




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int a, b, c, t;
//	printf("请输入3个整数：\n");
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
//	printf("大小排序为：\n%d %d %d\n", a, b, c);
//	system("pause");
//	return 0;
//}//4.将三个数按从大到小输出。




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int a, b;
//	printf("请输入两个整数：\n");
//	scanf("%d%d", &a, &b);
//	while (a != b){
//		if (a > b)
//			a = a - b;
//		else
//			b = b - a;
//	}
//	printf("最大公约数为：\n%d\n", a);
//	system("pause");
//	return 0;
//}//5.求两个数的最大公约数。

