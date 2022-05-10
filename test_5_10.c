 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[10] = { 0 };
//	int i = 0;
//	//arr1中的数字拷贝到arr2中
//	my_memcpy(arr2,arr1,sizeof(arr1));
//	
//	return 0;
//}
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	assert(dest && src != NULL);
//	void* ret = dest;
//	if (dest < src)
//	{
//		//前 --> 后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++*(char*)dest;
//			++*(char*)src;
//
//		}
//	}
//	else
//	{
//		//后 -->前
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)+count);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//my_memcpy不能胜任重叠拷贝
//	//my_memcpy(arr3+2,arr3,20);
//	//memmove可以胜任内存的重叠拷贝
//	//memmove(arr3 + 2, arr3, 20);
//	
//	my_memmove(arr3 + 2, arr3, 20);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 40);
//
//	return 0;
//}
// 自定义数据类型
//char short int long float double - 内置类型 - C语言自己的数据类型
//声明一个结构体类型
//声明一个学生类型，是想通过学生类型来创建学生变量（对象）
//描述学生：属性-名字+电话+性别+年龄
//struct stu
//{
//	char name[20];//名字
//	char tele[12];//电话
//	char sex[10];//性别
//	int age;//年龄
//}s4,s5,s6;
//struct stu s3;//全局变量
//int main()
//{
//	//创建的结构体变量
//	struct stu s1;
//	struct stu s2;
//
//	return 0;
//}
//struct 
//{
//	int a;
//	char c;
//}s;
//int main()
//{
//
//	return 0;
//}
//结构体的自引用
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//int main()
//{
//	return 0;
//}
//结构体的初始化
//struct T
//{
//	double weight;
//	short age;
//
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//
//};
//int main()
//{
//	//struct S s = { 'c',100,3.14,"hello liux" };
//	struct S s = { 'c',{55.6,30},100,3.14,"hello liux" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf\n", s.st.weight);
//	return 0;
//}
//结构题内存对齐
//struct S1
//{
//	char c;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s1));//12
//	printf("%d\n", sizeof(s2));//8
//	return 0;
//}
//让占用空间小的成员尽量集中在一起
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//int main()
//{
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));
//	return 0;
//}

//设置默认对齐数位4
//#pragma pack(4)
//struct S
//{
//	char c1;//1
//	//3
//	double d;//8 4 4 
//};
//#pragma pack()
////取消设置的默认对齐数
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));// 12 
//	return 0;
//}
#include<stddef.h>
struct S
{
	char c;
	int i;
	double d;
};
int main()
{
	printf("%d\n", offsetof(struct S, c));
	return 0;
}