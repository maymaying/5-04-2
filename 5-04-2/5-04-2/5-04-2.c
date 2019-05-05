#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*
//函数的返回值是value的二进制位模式从左到右翻转后的值
unsigned int  reverse_bit(unsigned int num)
{
	unsigned int sum = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		sum += ((num >> i) & 1) * pow((double)2, 31 - i);
	}
	return sum;
}
int main()
{
	printf("%u\n", reverse_bit(25));
	system("pause");
	return 0;
}
*/


/*
//不使用（a+b）/2这种方式，求两个数的平均值
int Averge(int a, int b)
{
	int avg = a + (b - a) / 2;
	return avg;
}
int Averge(int a, int b)
{
	return (a&b) + (a^b) >> 1;//a+b=(a&b)*2+(a^b)   (a+b)/2=((a&b)*2+(a^b))/2=(a&b)+(a^b)>>1   求平均值位运算
}
int main()
{
	printf("%u\n", Averge(20,10));
	system("pause");
	return 0;
}
*/


/*
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的
int main()
{
	int arr[] = { 4, 75, 6, 4, 75, 6, 8, 45, 45 };
	int num = sizeof(arr) / sizeof(arr[0]);
	int t = arr[0];
	for (int i = 1; i < num; i++)
	{
		t = t ^ arr[i];
	}
	printf("%d\n", t);
	system("pause");
	return 0;
}
*/


/*
//有一个字符数组的内容为:"student a am i", 请你将数组的内容改为"i am a student".
void Reverse(char *left, char *right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int MyStrlen(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
//i am a  student
void ReverseSentence(char *str)
{
	//1、逆置整个句子
	char *left = str;
	char *right = str + MyStrlen(str) - 1;
	char *p = str;

	Reverse(left, right);
	//tneduts  a  ma  i\0
	//2、逆置单词
	while (*p != '\0')
	{
		char *start = p;
		while (*p != ' ' && *p != '\0')
		{
			p++;
		}
		Reverse(start, p - 1);
		if (*p == ' ')
		{
			p++;
		}
	}
}
int main()
{
	char str[] = "i am a student";
	printf("%s\n", str);
	ReverseSentence(str);
	printf("%s\n", str);
    system("pause");
	return 0;
}
*/


/*
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果 
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次

void Function1()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if ((b == 2) + (a == 3) == 1 &&
							(b == 2) + (e == 4) == 1 &&
							(c == 1) + (d == 2) == 1 &&
							(c == 5) + (d == 3) == 1 &&
							(e == 4) + (a == 1) == 1)
						{
							if (a*b*c*d*e == 120)
							{
								printf("a=%d,b=%d,c=%d,d=%d,e=%d \n", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
}
int main()
{
    Function1();
	system("pause");
	return 0;
}

int main()
{
	int a, b, c, d, e;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			if (a != b)
			{
				for (c = 1; c <= 5; c++)
				{
					if (c != a&&c != b)
					{
						for (d = 1; d <= 5; d++)
						{
							if (d != a&&d != b&&d != c)
							{
								e = 15 - a - b - c - d;
								if (e != a&&e != b&&e != c&&e != d)
								if (((b == 2) + (a == 3)) == 1 && 
								    ((b == 2) + (e == 4)) == 1 && 
									((c == 1) + (d == 2)) == 1 && 
									((c == 5) + (d == 3)) == 1 && 
									((e == 4) + (a == 1)) == 1)
								{
									printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
								}
							}
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}
*/


/*
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个 
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。

void Function2()
{
	char killer = '\0';
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd')== 3)
		{
			printf("%c\n", killer);
		}
	}
}
int main()
{
	Function2();
	system("pause");
	return 0;
}
*/


/*
//int (*arr)[20]数组指针        
//int *arr[20] 指针数组
#define ROW  20
void Function3(int(*arr)[ROW], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i == j || j == 0)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
}
void Show(int(*arr)[ROW])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%-5d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[ROW][ROW] = { 0 };
	Function3(arr, ROW, ROW);
	Show(arr);
	system("pause");
	return 0;
}
*/


/*
//写一个函数返回参数二进制中 1 的个数    比如： 15 0000 1111 4 个 1 
int  count_one_bits(unsigned int n)//无符号整形  逻辑右移  左边补0
{                                  //若不加unsigned，则程序进入死循环
	int count = 0;
	while (n != 0)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n >> 1;
	}
	return count;
}

int  count_one_bits(unsigned int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}

int  count_one_bits(int n)
{
	int count = 0;
	while (n != 0)
	{
		n = n&(n - 1);
		count++;
	}
	return count;
}
int main()
{
	int num = count_one_bits(-1);
	printf("%d\n",num);
	system("pause");
	return 0;
}
*/


/*
//获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列 
void Function1(int num)
{
	int i = 0;
	printf("偶数为：");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	printf("奇数为：");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
}
int main()
{
	Function1(4);
	system("pause");
	return 0;
}
*/


/*
//输出一个整数的每一位
void play(int n)
{
	if (n > 9)
	{
		play(n / 10);
	}
	printf("%d ", (n % 10));
}
int main()
{
	int n = 0;
	printf("please enter number:");
	scanf("%d", &n);
	play(n);
	system("pause");
	return 0;
}
*/


/*
//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？输入例子 :1999 2299 输出例子 : 7
int CalcDiff(int m, int n)
{
	int tmp = 0;
	int count = 0;
	tmp = m^n;//不一样的，要进行异或
	while (tmp != 0)
	{
		tmp = tmp&(tmp - 1);//求tmp中有多少1
		count++;
	}
	return count;
}
int main()
{
	printf("%d\n", CalcDiff(1999, 2999));
	system("pause");
	return 0;
}
*/