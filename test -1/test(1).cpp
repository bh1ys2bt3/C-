#define  _CRT_SECURE_NO_WARNINGS 1
#define e 10000//����
#include <string.h>//strlen,�����ַ�����
#include <stdio.h>//printf�õ�
const int d = 10;//������
long bad = 20;//ȫ�ֱ���
extern float extra;//���������ļ���ȫ�ֱ���,�����ⲿ����


//
//int main()
//{
//	char arr[] = {"avcf"};
//	int str=strlen(arr);
//	printf("%d", str);
//	return 0;
//}
//enum a//ö�ٳ���
//{
//	one,//����һһ�оٵĳ���
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
//	printf("c:\\test\358\\test.c\n");//\ddd�ǰ˽��ƣ�\xdd��ʮ������
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
//	printf("no:������0\n");
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
//	while (year < 999)//whileѭ��
//	{
//		printf("������ճ�\n");
//		year++;
//	}
//
//	if (year == 999)
//	{
//		printf("ͣ�£�player!");
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
//	//����---һ����ͬ����Ԫ�صļ���
//	//�������±����
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char arr1[5] = { 'a','b','c' };//����ȫ��ʼ����ʣ��Ĭ��Ϊ0
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
//	int c = --b;//++ǰ��,��++����ʹ��;++���ã���ʹ�ã���++
//	int a = 0;
//
//	printf("%d\n", b);
//	printf("%d\n", c);
//	printf("%d\n", ~b);//~�������ǰ�λȡ����������λ ��
//	printf("%d\n", !a);
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;//ǿ��ת������
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = a && b;//&&=�룻||=��
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
//	int d = (a = b + 2, c = a - 4,b=c+3);//���ű��ʽ���Ǵ����������μ���
//	printf("%d %d %d\n", a, b, c);//�������ʽ�Ľ���������һ�����ʽ�Ľ��
//	printf("%d\n", d);
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	printf("%d", arr[5]);//[]=�±����ò�����
//	���ú����Ǻ����������()���Ǻ������ò�����
//
//	return 0;
//}

//C�����ṩ�Ĺؼ���
//1��C�����ṩ�����Լ�����
//2�������������ǹؼ���

//int main()
//{
//	{
//		int a = 10;//�Զ������Զ����ٵ�-�Զ�����   autoʡ�Ե���
//	}
//	register int b = 100;//����Ƶ��ʹ�õ����ݣ�����ڼĴ����У�������Ч��
//	//����b��ֵ����ڼĴ����У�
//	return 0;
//}

//typedef����������
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



//static-��̬��
//���ξֲ�����,�ı��˾ֲ��������������ڣ��������Ǹı��˱����Ĵ洢���ͣ�
//����ȫ�ֱ���,ʹ����ֻ�����Լ���Դ�ļ��ڲ�ʹ�ã�����Դ�ļ�����ʹ��
//���κ���,������ȫ�ֱ������ƣ����������ⲿ�������Ա���ڲ���������
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


//һ���ڴ浥Ԫ�Ĵ�С��һ���ֽ�

//int main()
//{
//	int a = 10;//a���ڴ���Ҫ����ռ�-�ĸ��ֽ�
//	printf("%p", &a);//%pר��������ӡ��ַ
//	int* pa = &a;//pa��������ŵ�ַ�ģ���C�����н�ָ�����
//	
//	//*˵��pa��ָ�����
//	//int ˵��paִ�еĶ�����int ���͵�
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
//	*pA = 20;//*�����ò�����*pA����ͨ��pA����ĵ�ַ���ҵ�A
//	printf("%p\n", &A);
//	printf("%d", A);
//
//
//	return 0;
//}

//ָ��Ĵ�С����ͬ��
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



//�ṹ�������C���Դ����µ����ͳ���

//struct student//����һ��ѧ��
//{
//	char name[20];//����
//	int age;//����
//	double score;//�ɼ�
//};
//����һ���������
//struct book
//{
//	char name[20];//����
//	float price;//�۸�
//	char id[30];//���
//};
//int main()
//{
//	struct student s = { "����",20,95.5 };//�ṹ��Ĵ����ͳ�ʼ��
//	printf("1:%s %d %lf\n", s.name,s.age,s.score);
//	struct book b = { "����",23.00,1 };
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
//	switch (month)//switch������������Ƕ��ʹ��
//	{
//		case 1:
//			printf("һ��\n");
//				break;
//		case 2:
//			printf("����\n");
//			break;
//		case 3:
//			printf("һ��\n");
//			break;
//		case 4:
//			printf("����\n");
//			break;
//		case 5:
//			printf("����\n");
//			break;
//		case 6:
//			printf("����\n");
//			break;
//		case 7:
//			printf("����\n");
//			break;
//		case 8:
//			printf("����\n");
//			break;
//		case 9:
//			printf("����\n");
//			break;
//		case 10:
//			printf("ʮ��\n");
//			break;
//		case 11:
//			printf("ʮһ��\n");
//			break;
//		case 12:
//			printf("ʮ����\n");
//			break;
//
//		default:
//			printf("�������ΰ�");
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
//			continue;//continue����������ѭ������Ĵ��룬ֱ��ȥ�жϲ��֣����Ƿ�ִ����һ��ѭ��
//		/*if (i == 5)
//			break;*///��whileѭ���У�break�������õ���ֹѭ��
//		i++;
//		printf("%d\n",i);
//		
//	}
//	return 0;
//}

//EOF--end of file-�ļ�������־
//getchar-��ȡһ���ַ�
//putchar-���һ���ַ�
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
//	printf("���������룺");
//	scanf("%s", password);
//	printf("��ȷ������(y/n):");
//	int emp = 0;
//	while ((emp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'y')
//	{
//		printf("�õ�");
//	}
//	else if (ch == 'n')
//	{
//		printf("�뾡��ȷ������");
//	}
//	else
//	{
//		printf("��������");
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

//�жϲ��ֵ�ʡ��-�жϲ��ֺ�Ϊ��
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
//			printf("ѽ��\n");
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

#include<windows.h>//sleepͷ�ļ�
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
//		system("cls");//�����Ļ
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

int main()
{
	char arr1[20] = { 0 };
	char arr2[20] = { 0 };
	printf("��ע��8λ���룺");
	int i = 0;
	scanf("%s",arr1);
	printf("ע��ɹ���\n");
	for (i = 0;i < 3;i++)
	{
		printf("���������룺");
		scanf("%s", arr2);
		 if (strcmp(arr1,arr2)==0)
		{
			printf("������ȷ,��ӭ��");
			break;
		}
		 else
		 {
			 printf("�������");
			 
		 }
		
		if (i == 3)
		{
			printf("����������");
		}
	}
	

	return 0;
}