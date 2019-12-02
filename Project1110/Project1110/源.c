//1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大）

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int b[5] = { 5, 6, 7, 8, 9 };
//	int i;
//	for (i = 0; i < 5; i++) //数组遍历
//	{
//		printf("%d ", a[i]);
//	}
//	putchar('\n');
//	for (i = 0; i < 5; i++) //数组遍历
//	{
//		printf("%d ", b[i]);
//	}
//	putchar('\n');
//	int tmp;
//	for (i = 0; i < 5; i++) //数组遍历
//	{
//		tmp = a[i];
//		a[i] = b[i];
//		b[i] = tmp;
//	}
//	for (i = 0; i < 5; i++) //数组遍历
//	{
//		printf("%d ", a[i]);
//	}
//	putchar('\n');
//	for (i = 0; i < 5; i++) //数组遍历
//	{
//		printf("%d ", b[i]);
//	}
//	putchar('\n');
//	system("pause");
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	int n = 123456;
//	int i;
//	for (i = n; i; i /= 10) {
//		printf("%d ", i % 10);
//	}
//	system("pause");
//	return 0;
//}//数位遍历





//2. 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i;
//
//	double sum = 0;
//	double tmp = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		tmp = flag * 1.0 / i;
//		flag *= -1;
//		sum += tmp;
//	}
//	printf("%.4lf\n", sum);
//	system("pause");
//	return 0;
//}




//3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i;
//	int count = 0;
//
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	system("pause");
//	return 0;
//}





//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int n = 1234;
//	int m = 8;
//
//	int i;
//	int sum = 0;
//	for (i = n; i; i /= m) //数位遍历
//	{
//		sum = sum * m + i % m;
//	}
//
//	printf("%d ", sum);
//	system("pause");
//	return 0;
//}






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




//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i;
//	int a, b, c;
//
//	for (i = 100; i < 1000; i++)
//	{
//		a = i % 10;
//		b = i / 10 % 10;
//		c = i / 100;
//
//		if (i == a * a * a + b * b * b + c * c * c)
//		{
//			printf("%d\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}//水仙花数



//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i;
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int sum = 0;
//	int tmp = 0;
//	for (i = 1; i <= m; i++)
//	{
//		tmp = tmp * 10 + n;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}//Sn=a+aa+aaa+aaaa+aaaaa















