#define  _CRT_SECURE_NO_WARNINGS 1
#define e 10000//常量
#include <string.h>//strlen,计算字符数量
#include <stdio.h>//printf用到
const int d = 10;//常变量
long bad = 20;//全局变量
extern float extra;//引用其他文件的全局变量,申明外部符号


//
//int main()
//{
//	char arr[] = {"avcf"};
//	int str=strlen(arr);
//	printf("%d", str);
//	return 0;
//}
//enum a//枚举常量
//{
//	one,//可以一一列举的常量
//	two,
//	three
//};
//int main()
//{
//	enum a A = three;
//	return 0;
//}


//int main()
//{
//	printf("c:\\test\358\\test.c\n");//\ddd是八进制，\xdd是十六进制
//	printf("%c\n", '\130');
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = 0;
//
//	sum = a + 1;
//
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	
//	printf("Are you ok?\n");
//	printf("yes:1\n");
//	printf("no:请输入0\n");
//	scanf("%d", &input);
//	if (input==1)
//		printf("holle,thank you\n");
//	else
//		printf("Thank you very much\n");
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	while (year < 999)//while循环
//	{
//		printf("枯燥的日常\n");
//		year++;
//	}
//
//	if (year == 999)
//	{
//		printf("停下！player!");
//	}
//
//	return 0;
//}
//int edd(int x,int y,int z)
//{
//	int a = (x + y + z) / 3;
//	return a;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//
//	scanf("%d %d %d", &num1, &num2, &num3);
//    int  sum = edd(num1, num2, num3);
//	printf("%d", sum);
//
//	return 0;
//}
//int main()
//{
//	//数组---一组相同类型元素的集合
//	//数组用下标访问
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char arr1[5] = { 'a','b','c' };//不完全初始化，剩余默认为0
//	int i = 0;
//	int f = 0;
//	scanf("%d", &f);
//	if (f < 10)
//	{
//		while (i < 10)
//		{
//			printf("%d ", arr[i]);
//			i++;
//		}
//	}else
//	{
//		printf("%d", f);
//	}
//	return 0;
//}
//int main()
//{
//	
//
//	int b = 2;
//	int c = --b;//++前置,先++，后使用;++后置，先使用，后++
//	int a = 0;
//
//	printf("%d\n", b);
//	printf("%d\n", c);
//	printf("%d\n", ~b);//~的作用是按位取反（二进制位 ）
//	printf("%d\n", !a);
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;//强制转换类型
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = a && b;//&&=与；||=或
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d %d", &a, &b);
//	max = a > b ? a : b;//exp1?pxp2:exp3
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 2;
//	int d = (a = b + 2, c = a - 4,b=c+3);//逗号表达式，是从左向右依次计算
//	printf("%d %d %d\n", a, b, c);//整个表达式的结果的是最后一个表达式的结果
//	printf("%d\n", d);
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	printf("%d", arr[5]);//[]=下标引用操作符
//	调用函数是函数名后面的()就是函数调用操作符
//
//	return 0;
//}

//C语言提供的关键字
//1，C语言提供不能自己创建
//2，变量名不能是关键字

//int main()
//{
//	{
//		int a = 10;//自动创建自动销毁的-自动变量   auto省略掉了
//	}
//	register int b = 100;//大量频繁使用的数据，想放在寄存器中，想提升效率
//	//建议b的值存放在寄存器中，
//	return 0;
//}

//typedef类型重命名
//typedef unsigned int u_int;
//
//int mian()
//{
//	unsigned int a = 100;
//	u_int b = 100;
//	
//
//	return 0;
//}



//static-静态的
//修饰局部变量,改变了局部变量的生命周期（本质上是改变了变量的存储类型）
//修饰全局变量,使得其只能在自己的源文件内部使用，其他源文件不能使用
//修饰函数,和修饰全局变量类似，将函数的外部链接属性变成内部链接属性
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//
//
//extern int year;
//
//int main()
//{
//	printf("%d\n", year);
//	return 0;
//}



//extern int edd(int x,int y);
//
// int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = edd(a, b);
//
//	printf("sum=%d\n", sum);
//	return 0;
//}



//#define math(x,y) ((x)+(y))
//
//int main()
//{
//	
//	printf("%d", 4*math(10,30));
//
//	return 0;
//}


//一个内存单元的大小是一个字节

//int main()
//{
//	int a = 10;//a在内存中要分配空间-四个字节
//	printf("%p", &a);//%p专门用来打印地址
//	int* pa = &a;//pa是用来存放地址的，在C语言中叫指针变量
//	
//	//*说明pa是指针变量
//	//int 说明pa执行的对象是int 类型的
//
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}


//int main()
//{
//	int A = 1;
//	
//	int* pA = &A;
//	
//	*pA = 20;//*解引用操作，*pA就是通过pA里面的地址，找到A
//	printf("%p\n", &A);
//	printf("%d", A);
//
//
//	return 0;
//}

//指针的大小是相同的
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(float*));
//	return 0;
//}



//结构体可以让C语言创建新的类型出来

//struct student//创建一个学生
//{
//	char name[20];//姓名
//	int age;//年龄
//	double score;//成绩
//};
//创建一个书的类型
//struct book
//{
//	char name[20];//书名
//	float price;//价格
//	char id[30];//书号
//};
//int main()
//{
//	struct student s = { "张三",20,95.5 };//结构体的创建和初始化
//	printf("1:%s %d %lf\n", s.name,s.age,s.score);
//	struct book b = { "三体",23.00,1 };
//	struct student* ps = &s;
//	printf("2:%s %d %lf\n", (*ps).name,(*ps).age,(*ps).score);
//	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);
//	return 0;
//}

//int Max(int x,int y)
//{
//	int A = x > y ? x : y;
//	return A;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int B = Max(a,b);
//	printf("%d", B);
//	return 0;
//}
//
//int main()
//{
//	int M = 0;
//	scanf("%d\n", &M);
//	if (M % 5 == 0)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;

//
//int main()
//{
//	
//
//	for (int i=1;i <=100;i++)
//	{
//		
//		
//		if (i % 2 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int c = 0;
//	while (c<100)
//	{
//		c++;
//		if (c % 2 == 1)
//		{
//			printf("%d\n", c);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	switch (month)//switch用整型且允许嵌套使用
//	{
//		case 1:
//			printf("一月\n");
//				break;
//		case 2:
//			printf("二月\n");
//			break;
//		case 3:
//			printf("一月\n");
//			break;
//		case 4:
//			printf("四月\n");
//			break;
//		case 5:
//			printf("五月\n");
//			break;
//		case 6:
//			printf("六月\n");
//			break;
//		case 7:
//			printf("七月\n");
//			break;
//		case 8:
//			printf("八月\n");
//			break;
//		case 9:
//			printf("九月\n");
//			break;
//		case 10:
//			printf("十月\n");
//			break;
//		case 11:
//			printf("十一月\n");
//			break;
//		case 12:
//			printf("十二月\n");
//			break;
//
//		default:
//			printf("你在梦游吧");
//			break;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		if (i == 5)
//			continue;//continue是跳过本次循环后面的代码，直接去判断部分，看是否执行下一次循环
//		/*if (i == 5)
//			break;*///在while循环中，break用于永久的终止循环
//		i++;
//		printf("%d\n",i);
//		
//	}
//	return 0;
//}

//EOF--end of file-文件结束标志
//getchar-获取一个字符
//putchar-输出一个字符
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!=EOF)
//		/*printf("%c", ch);*/
//		putchar(ch);
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);
//	printf("请确认密码(y/n):");
//	int emp = 0;
//	while ((emp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'y')
//	{
//		printf("好的");
//	}
//	else if (ch == 'n')
//	{
//		printf("请尽快确认密码");
//	}
//	else
//	{
//		printf("发生错误");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		else
//			putchar(ch);
//	}
//	return 0;
//}

//判断部分的省略-判断部分恒为真
//int main()
//{
//	int arr[10] = { 0,1,2,3,4 };
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int A = 0;
//	int B = 0;
//	for (A = 0;A< 4;A++)
//	{
//		for (B = 0;B < 3;B++)
//		{
//			printf("呀吼\n");
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	int l = 0;
//	do
//	{
//		l++;
//		printf("%d ", l);
//	} while (l < 10);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 1;
//	int o = 1;
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		o *=i;
//		i++;
//	}
//	printf("%d", o);
//	return 0;
//
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int m = 1;
//	scanf("%d", &n);
//	for (i = 1;i <= n;i++)
//	{
//		m *=i;
//	}
//	printf("%d", m);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int m = 1;
//	int o = 0;
//
//	while (i <= 10)
//	{
//		for (n =1;n <= i;n++)
//		{
//			m *= n;
//		}
//		o = m + o;
//		i++;
//		m = 1;
//	}
//	printf("%d\n", o);
//	return 0;
//
//}

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int m = 1;
//	scanf("%d", &n);
//	do
//	{
//		m *= i;
//		i++;
//	} while (i <= n);
//	printf("%d", m);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int m = 1;
//	int o = 1;
//	int sum = 0;
//	while (o <= 10)
//	{
//		m *= o;
//		o++;
//		sum += m;
//
//	}
//	printf("%d", sum);
//	return 0;
//}

//int binsearch( int y, int z)
//{
//	int x = (y + z) / 2;
//	return x;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int lose = 7,mid = 0,right = sz-1,left = 0;
//	while (left<=right)
//	{
//		mid = binsearch(left, right);
//		if (arr[mid] < lose)
//		{
//			left = mid + 1;
//		}
//		else if(arr[mid]>lose)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("%d",mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("?");
//	}
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "welcome to bite!!!!!!";
//	char arr2[] = "#####################";
//	
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//
//	return 0;
//}

#include<windows.h>//sleep头文件
//int main()
//{
//	char arr1[] = "welcome to bite!!!!!!";
//	char arr2[] = "#####################";
//	int a = sizeof(arr1) / sizeof(arr1[0]);
//	
//	int left = 0;
//	int right = a - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");//清空屏幕
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

int main()
{
	char arr1[20] = { 0 };
	char arr2[20] = { 0 };
	printf("请注册8位密码：");
	int i = 0;
	scanf("%s",arr1);
	printf("注册成功。\n");
	for (i = 0;i < 3;i++)
	{
		printf("请输入密码：");
		scanf("%s", arr2);
		 if (strcmp(arr1,arr2)==0)
		{
			printf("密码正确,欢迎您");
			break;
		}
		 else
		 {
			 printf("密码错误");
			 
		 }
		
		if (i == 3)
		{
			printf("密码已锁定");
		}
	}
	

	return 0;
}