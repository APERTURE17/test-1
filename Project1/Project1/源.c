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
//	printf("请输入x的值：\n");
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
//	printf("请输入x的值：\n");
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
//	printf("请输入x的值：\n");
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
////全局变量，作用域:整个工程；生命周期:跟随整个程序；不建议使用全局变量
//int main()
//{
//	//局部变量，作用域:某个函数内部；生命周期:当前代码块
//	char a = 0;
//	short b = 0;
//	int c = 0;//整型，整数一般用int
//	long d = 0;//长整型
//	long long e = 0;//长长整型
//	float f = 0;//单精度浮点型
//	double g = 0;//双精度浮点型，小数一般用double
//	printf("Char:%d\n", sizeof(a));//char数据范围：0 -> 255  -128 -> +127
//	printf("Short:%d\n", sizeof(b));//short数据范围：0 -> 65535  -32768 -> +32767
//	printf("Int:%d\n", sizeof(c));//int数据范围：0 -> 42亿9千万  -21亿 -> +21亿
//	printf("Long:%d\n", sizeof(d));
//	printf("Long long:%d\n", sizeof(e));
//	printf("Float:%d\n", sizeof(f));
//	printf("Double:%d\n", sizeof(g));
//	//%d格式化字符串
//	//sizeof查看一个变量在内存中占几个字节
//	system("pause");
//	return 0;
//}


////VAX插件


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
////常量1.const;2.字面值常量(0.0,10,'a',"abcd");3.enum枚举;4.#define宏
//enum Sex {
//	MALE,
//	FEMALE,
//	UNKNOWN,
//};//enum枚举
//#define A 10//宏
//int main()
//{
//	const int a = 10;//常量
//	printf("a=%d\n", a);
//	//不能修改
//	int b = 10;//变量
//	printf("b=%d\n", b);
//	b = 20;
//	printf("b=%d\n", b);
//	//可修改，b的修改发生在运行过程
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", UNKNOWN);
//	printf("%d\n", A);
//	'c';
//	//字符
//	"hehe";
//	//字符串
//	printf("hehe\n");
//	//  \n转义字符
//	//  \t水平制表符(tab)
//	printf("%d\n", strlen("\328\t"));//strlen显示字符串长度
//	//注释
//	//快捷注释 Ctrl+K Ctrl+C
//	//放开注释 Ctrl+K Ctrl+U
//	/*
//		多行注释
//		多行注释
//		多行注释
//		多行注释
//	*/
//	system("pause");
//	return 0;
//}




//#define _CRT_SECURE_NO_WARNINGS//作用：在VS版本中不使用scanf_s，而使用通用的scanf
////这个宏必须放在最上面，并且尽量复制粘贴
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	printf("你会认真敲代码吗？输入 1 表示 愿意，0 表示 不愿意：");
//	int choice = 0;
//	// & 取地址符号
//	scanf("%d",&choice);
//	// = 赋值
//	// == 比较相等
//	if (choice == 1){
//		printf("你会拿到好offer！\n");
//	}
//	else{
//		printf("回家卖红薯吧！\n");
//	}
//	system("pause");
//	return 0;
//}// 选择




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	//打印1 - 10
//	int num = 1;
//	//条件不成立则结束循环
//	while (num <= 10){
//		printf("%d\n", num);
//		num = num + 1;//在C语言中等价于num += 1;(+= 操作符)
//	}
//	system("pause");
//	return 0;
//}// 循环




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//// int 函数的返回值类型
//// Add 函数名
//// int x, int y, 函数的参数
//// {    } 函数体
//int Add(int x, int y){
//	// sum
//	int sum = x + y;
//	// return 表示函数返回(结束)了
//	return sum;
//}// 函数-工厂 参数-原材料 返回值-最终产品 函数体里的代码-加工过程
//int main()//main函数
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);//函数的调用
//	printf("%d\n", c);//printf库函数
//	system("pause");
//	return 0;
//}// 函数：一个代码片段，可重复使用



//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4 };
//	//数组的使用核心[ ]取下标操作
//	//数组下标是从0开始计数的
//	printf("%d\n", arr[1]);
//	//printf("%d\n", arr[10]);//下标越界，是一种典型的错误代码，得到的结果不可预期
//	char arr1[10] = { 'h', 'e', 'h', 'e' };//字符数组
//	char arr2[10] = "hehe";//字符串必须以'\0'(空字符)结尾
//	system("pause");
//	return 0;
//}// 数组


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//typedef unsigned int uint;//typedef 给一个类型创建另一个名字
//int main()
//{
//	unsigned int num = 1;//无符号的整型
//	uint num2 = 1;
//	system("pause");
//	return 0;
//}




/*	static 在C语言中主要有3种用法
	1.修饰一个局部变量，修改生命周期为整个程序
	2.修饰一个全局变量，修改变量的作用域，只能在当前文件中访问，不能跨文件访问
	3.修饰一个函数，和修饰全局变量是一样的，修改了作用域为当前文件中访问
*/


//#include<stdio.h>
//#include<stdlib.h>
////void 函数没有返回值
////void Func(){
////	int x = 1;
////	x = x + 1;
////	printf("%d\n", x);
////}
//void Func(){
//	static int x = 1;//static 修改生命周期为整个程序
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
////当访问另一个文件中的全局变量时，需要加上变量声明
//extern int global;//extern 用来声明变量
//int main()
//{
//	printf("%d\n", global);
//	system("pause");
//	return 0;
//}
////无法解析外部符号(链接错误，只有声明，没有定义)




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





#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	////打印1到10
	//int num = 1;
	//while (num <= 10) {
	//	printf("%d\n", num);
	//	num += 1;
	//}
	//打印1到10 for版
	for (int num = 1; num <= 10; num += 1) {
		printf("%d\n", num);
	}
	system("pause");
	return 0;
}


























//1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//2. 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
//3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。


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




//1.完成猜数字游戏。



//2.写代码可以在整型有序数组中查找想要的数字， 
//找到了返回下标，找不到返回 - 1.（折半查找）



//3.编写代码模拟三次密码输入的场景。 
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。



//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。


