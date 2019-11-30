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


