//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//	/////////////////////////////////////////
//	// 第一组
//	/////////////////////////////////////////
//
//	// char[6]
//	// char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	// printf("%d\n", sizeof(arr)); // 6 整个数组的内存大小
//	// printf("%d\n", sizeof(arr + 0));  // 4 arr + 0 已经变成指针了
//	// printf("%d\n", sizeof(*arr));// 1 *arr 得到一个 char
//	// printf("%d\n", sizeof(arr[1]));// 1 arr[1] 得到一个 char
//	// &arr 类型是 char(*)[6]
//	// printf("%d\n", sizeof(&arr));// 4 &arr 得到的是一个数组指针, 也是指针
//	// printf("%d\n", sizeof(&arr[0] + 1)); // 4 得到的是一个 char*
//
//	// strlen 是求字符串的长度, 一个带 \0 的字符数组才叫字符串
//	// printf("%d\n", strlen(arr));  // 未定义行为
//	// printf("%d\n", strlen(arr + 0)); // 未定义行为
//	// 原则上应该要编译失败, 但是 C 语言对于类型检查没那么严格,
//	// 就导致把 char 隐式转成了 char*. 这样还是得到了一个非法的指针. 
//	// 解引用的时候就会出现未定义行为
//	// printf("%d\n", strlen(*arr));  
//	// 这个代码同上
//	// printf("%d\n", strlen(arr[1]));
//	// char(*)[6];
//	// &arr 类型和 char* 不一致. 如果隐式类型转换过去的话, 
//	// 就会得到一个指向 'a' 指针. 从这个指针开始往后找 \0 仍然找不到
//	// printf("%d\n", strlen(&arr)); 
//	// 这个代码和上面一样
//	// printf("%d\n", strlen(&arr + 1));
//	// printf("%d\n", strlen(&arr[0] + 1)); // 得到一个指向 b 的指针. 但是仍然是未定义行为
//
//	/////////////////////////////////////////
//	// 第二组
//	/////////////////////////////////////////
//	// char arr[] = "abcdef";
//	// printf("%d\n", sizeof(arr));	// 7 带 \0 
//	// printf("%d\n", sizeof(arr + 0));// 4 arr + 0 得到一个 char*
//	// printf("%d\n", sizeof(*arr));// 1 *arr 得到一个字符
//	// printf("%d\n", sizeof(arr[1]));// 1 同上
//	// printf("%d\n", sizeof(&arr));// 4 &arr 数组指针
//	// printf("%d\n", sizeof(&arr + 1));// 4 同上
//	// printf("%d\n", sizeof(&arr[0] + 1));// 4 得到一个 char*
//
//	// printf("%d\n", strlen(arr));//6 求字符串长度, 不算 \0
//	// printf("%d\n", strlen(arr + 0));// 6 得到的还是一个指向 a 的指针
//	// printf("%d\n", strlen(*arr));// 未定义行为, *arr 得到的是 字符 a
//	// printf("%d\n", strlen(arr[1]));// 同上
//	// printf("%d\n", strlen(&arr));// 6 &arr 是一个数组指针, 里面存的地址恰好就是数组首元素地址
//	// printf("%d\n", strlen(&arr + 1));// 未定义行为, &arr 是一个数组指针, + 1 跳过了整个数组, 此时就已经访问的是非法内存了
//	// printf("%d\n", strlen(&arr[0] + 1));// 5 &arr[0] + 1 得到指向 b 的指针
//
//	/////////////////////////////////////////
//	// 第三组
//	/////////////////////////////////////////
//	// char* p = "abcdef";
//	// printf("%d\n", sizeof(p)); // 4
//	// printf("%d\n", sizeof(p + 1)); // 4
//	// printf("%d\n", sizeof(*p));// 1 *p 是一个 char 类型
//	// printf("%d\n", sizeof(p[1]));// 1 p[1] 是一个char
//	// printf("%d\n", sizeof(&p));// 4 char**
//	// printf("%d\n", sizeof(&p + 1));// 4 char**
//	// printf("%d\n", sizeof(&p[0] + 1));// 4, char* 指向 b
//
//	// printf("%d\n", strlen(p)); // 6
//	// printf("%d\n", strlen(p + 1)); //5 
//	// printf("%d\n", strlen(*p)); // 未定义行为
//	// printf("%d\n", strlen(p[1])); // 未定义行为
//	// printf("%d\n", strlen(&p));// 未定义行为. &p => char** 
//	// printf("%d\n", strlen(&p + 1)); // 未定义行为
//	// printf("%d\n", strlen(&p[0] + 1)); // 5
//
//
//
//	system("pause");
//	return 0;
//}