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

