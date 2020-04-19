// test_02.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
/*int main()
{
	int q, a, b, c, d;
	q = a = b = c = d = 0;
	cout << "Please enter a positive integer: ";
	cin >> q;
	a = (q % 10);//个位
	b = (q % 100 - a) / 10;//十位
	c = (q - a - b * 10) / 100;
	d = a * 100 + b * 10 + c;
	cout << q<<"-->"<<d;
}*/
/*int Fact(int w)
{
	int res = 1;
	for (int i = 1; i <= w; i++) 
	{
		res = i * res;
	}
	return res;
}
int main()
{
	int n = 0;
	int res1 = 0;
	cout << "Input n(n>0):";
	cin >> n;
	for (int q = 1; q <= n; q++)
	{
		res1 = Fact(q);
		cout << q << "! = " << res1 << endl;
	}
}*/
/*int main()
{
	int a = 0;
	for (int i = 0; i <= 5; i++)
	{
         cout << "Please enter n:";
		 cin >> a;
		 if (a < 0)
		 {
              cout << "Program is over!";
			  break;
		 }
		 cout << "n = " << a<<endl;

	}
	

}*/
/*int main() 
{
	cout << "Press a key and then press Enter:\n";
	char h = 'a';
	char c = 'a';
	cin >> h;
	c = h - 32;
	cout << c << "," << (int)c;

}*/
/*int main()
{
	int u = 0;
		for (int q = 0; q <= 20; q++)
	{
		for (int w = 0; w <= 33; w++)
		{
			u = 100 - q - w;
			if (5 * q + 3 * w + u / 3.0 == 100)
				cout << "x=" << q << ",y=" << w << ",z=" << u << endl;
		}
	}
}*/
/*int Fact(int w)
{
	int res = 1;
	for (int i = 1; i <= w; i++)
	{
		res = i * res;
	}
	return res;
}
求1！+2！+。。。
int main()
{
	int input, output;
	input =output= 0;
	cout << "Input n(n>0):";
	cin >> input;
	for (int r = 1; r <= input; r++)
	{
		output += Fact(r);
	}
	cout << "sum = " << output << endl;
}*/
/*求前驱字符和后继字符。输入一个字符，找出它的前驱和后继字符，并按ASCII码值，按从小到大顺序输出这三个字符及其对应的ASCII码值。（注：一个字符的前驱字符是指在ASCII码表中，排列在该字符前面的一个字符，即比该字符的ASCII码值小1的字符。一个字符的后继字符是指在ASCII码表中，排列在该字符后面的一个字符。）

程序运行示例如下：
Enter a character:G
F G H
70 71 72
int main()
{
	cout << "Enter a character:";
	char h = 'a';
	char c = 'a';
	char b = 'a';
	cin >> h;
	c = h -1;
	b = h + 1;
	cout << c << " " << h<<" "<<b<<endl;
	cout << (int)c << " " <<(int) h << " " <<(int) b << endl;

}*/
/*编程从键盘输入一个小写英文字母，将其转换为大写英文字母，并将转换后的大写英文字母及其十进制的ASCII码值显示到屏幕上，最后输出一个换行。
具体输入输出要求如下：
**输入提示信息**："Please input a low-case letter from keyboard:"
**输出数据格式**：The capital letter and its ASCII value are:b and 66.

输入输出示例1：
Please input a low-case letter from keyboard:b
The capital letter and its ASCII value are:B and 66.

输入输出示例2：

Please input a low-case letter from keyboard:z
The capital letter and its ASCII value are:Z and 90.

*/
/*int main()
{
	cout << "Please input a low-case letter from keyboard:";
	char h = 'a';
	char c = 'a';
	cin >> h;
	c = h - 32;
	cout <<"The capital letter and its ASCII value are:"<< c << " and " << (int)c<<".";

}*/
/*日期显示
编写一个程序, 接收用户录入的日期信息并且将其显示出来. 其中, 输入日期的形式为年 月 日(yy mm dd), 输出日期的形式为：月/日/年(mm/dd/yy)。

程序的运行示例：
Enter a date(year month day):
2015 3 2↙
You entered the date: 03/02/2015

输入提示信息： "Enter a date(year month day):\n"
输入格式:  输入年月日，空格作为分隔符，回车结束

输出格式： "You entered the date: 月/日/年"，月份和日期为两位数，不足两位首位补零*/
/*int main()
{
	printf("Enter a date(year month day):\n");
	int a, b, c;
	a = b = c = 0;
	cin >> a >> b >> c;
	cout <<"You entered the date: " << setfill('0') << setw(2)<<  b << "/" << setw(2) << c << "/" << a;
}*/
/*冒泡算法排序
int main() 
{
	int count = 0;
	int setofnum[] = {0,0,0,0,0,0,0,0,0,0};
	cout << "Input n:";
	cin>>count;
	cout << "Input "<< count<<" numbers:";
	for (int i = 0; i <= count-1; i++)
	{
		cin>>setofnum[i];
	}
	cout << "Sorting results:";
	bool change = true;
	int transformer = 0;
	while (change) {
		
		
		for (int i = 0; i <= count-2; i++)
	    {
			change = false;
			if (setofnum[i] > setofnum[i + 1])
			    {
				    transformer = setofnum[i + 1];
				    setofnum[i+1] = setofnum[i];
				    setofnum[i] = transformer;
					change = true;

			    }
	    }
	}
	for (int i = 1; i <= count; i++)
	{
        cout << setw(4) << right << setofnum[i];
	}
	cout << endl;
	
}*/
/*int main()
{
	cout << "Please input x and y:";
	float a, b,c;
	a = b =c= 0.0;
	cin >> a >> b;
	c = pow(a, 2) + pow(b, 2);
	cout << "result="<< setiosflags(ios::fixed) << setprecision(2) << c << endl;
 }*/
/*int main()
{
	double a, b, c, s,area;
	a = b = c = area = 0;
	cout << "Input a,b,c: ";
	cin >> a >> b >> c;
	s = 0.5 * (a + b + c);
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	cout << "Area = " << fixed << setprecision(2) << area;


}*/
/*int range_test(int val, int low, int high)
{
	return ((val > low && val < high) ? 1 : 0);
}
int main()
{
	int a, b, c;
	a = b = c = 0;
	cout << "请输入数值、下界和上界：\n";
	cin >> a >> b >> c;
	switch (range_test(a,b,c))
	{
	case 1:
		cout << "函数测试输出为1！\n";
		break;
	case 0:
		cout << "函数测试输出为0！\n";
	    break;
		
	}
}*/
/*double Calculate(double x, double y);
int main()
{
	double a, b;
	a = b = 0;
	cout << "Input two doubles:\n";
	cin >> a >> b;
	cout << "1/((1/x+1/y)/2) = " << setiosflags(ios::fixed) << setprecision(3) << Calculate(a, b)<<endl;
	
}
double Calculate(double x,double y) 
{
 
	return (1 / ((1 / x + 1 / y) / 2));
}*/
/*编写一个程序，将十进制短整型数n转换成二进制数。
输入提示信息："n="
**输入格式：输入整数值 
输出信息："the binary number is "
程序运行示例如下：
n=37
the binary number is 0000000000100101
int main()
{
	cout << "n=";
	short a=0;
	cin >> a;
	bool changer = true;
	short setofshort[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int i = 0;
	while (changer)
	{
		setofshort[i]=(a % 2);
		a = (a % 2 == 1) ? ((a - 1) / 2) : (a / 2);
		i++;
		if (a == 0)
			break;

	}
	cout << "the binary number is ";
	for (int i = 15; i>=0; i--)
	{
		cout << setofshort[i];
	}
}*/
/*bool prime(int n);
int main()
{
	int count = 0;

	cout << "The prime numbers from 1 to 10000 are:\n";

	for (int loop = 2; loop <= 10000; ++loop) {
		if ( prime(loop)==true) 
		{
			++count;
			cout << setw(6) << loop;

			if (count % 10 == 0)
				cout << '\n';
		}
	}
	cout << '\n' << "There were " << count
		<< " prime numbers\n";
	return 0;
}

bool prime(int n)
{
	for (int i = 2; i <= n-1; i++)
	{

		if ( n%i==0)
			return false;
	}

	return true; //number is prime
}*/

/*int Input(long num[], float score[], int array_size);
//函数说明：通过终端输入学生学号与分数，并返回实际人数
//参数说明：数组 num 存放学生的学号，数组 score 存放学生的分数
//返回值：返回班级的实际人数

void Total1(long num[], float score[], int n);
//函数说明：统计不及格人数及打印不及格学生名单
//参数说明：数组 num 存放学生的学号，数组 score 存放学生的分数，n 班级实际人数
//返回值：无

void Total2(long num[], float score[], int n);
//函数说明：统计成绩在全班平均分及平均分之上的学生人数及打印这些学生的名单
//参数说明：数组 num 存放学生的学号，数组 score 存放学生的分数，n 班级实际人数
//返回值：无
*/
/*int Input(long num[], float score[], int array_size);
void Total1(long num[], float score[], int n);
void Total2(long num[], float score[], int n);
int main()
{
	long num[30] = {0};
	float score[30] = { 0};
	int size=Input(num, score, 30);
	Total1(num, score, size);
	Total2(num, score, size);
	return 0;
}

int Input(long num[], float score[], int array_size)
{
	//TODO: 通过终端输入学生学号和分数
	cout << "Enter the student number and the score:" << endl;
	for (int i = 0; i <array_size; i++)
	{
		long temp1 = 0;
		float temp2 = 0;
		cin >> temp1>>temp2;
		  
		 if (temp2 >= 0 )
		{
			score[i] = temp2;
			num[i] = temp1;
		}
		 else if (!(temp2 >= 0))
		 {
			 return i - 1;
		 }

		
			
	}
	return 29;//没有触发-1要给一个返回值
	
};

void Total1(long num[], float score[], int n)
{
	//变量声明：total:不及格人数
	int total = 0;
	for (int i = 0; i <= n; i++)
	{
		if (score[i] < 60)
		{
			cout << num[i] << endl;
			total++;
		}
	}

	cout << "The score<60 is:" << total << endl;
}
void Total2(long num[], float score[], int n)
{
	//变量声明：total:及格人数
	int total = 0;
	float avg = 0;
	float sumof = 0;
	for (int i = 0; i <= n; i++)
	{
		sumof += score[i];
	}
	avg = sumof / (n+1);
		
	
for (int i = 0; i <= n; i++)
	{
		if (score[i] >= avg)
		{
			cout << num[i] << endl;
			total++;
		}
	}
	cout << "The score>=average is:" << total << endl;
	

};*/
/*int main()
{
	int count = 0;
	long hyptSquared, sidesSquared;

	for (long side1 = 1; side1 <= 500;side1++) {

		for (long side2 = side1; side2 >=side1&&side2<=500;side2++) {

			for (long side3 = side2; side3 >= side2&&side3<=500;side3++) {
				hyptSquared = side2 * side2 + side1 * side1;
				sidesSquared = side3 * side3;
				if (hyptSquared == sidesSquared) {
					cout << side1 << "\t" << side2 << "\t"
						<< side3 << endl;
					++count;
				}
			}
		}
	}

	cout << "A total of " << count << " triples were found."
		<< endl;
	return 0;
}*/
/*int main()
{
	const int SIZE = 10;
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int hold, numberOfComp = 0, comp;
	bool swapCheck = true;

	cout << "Data items in original order\n";
	for (int i = 0; i < SIZE; ++i)
		cout << setw(4) << a[i];

	cout << "\n\n";

	for (int i = 1; i < SIZE; i++)
	{
		swapCheck = false;
		for (int j = 0; j <= SIZE - 1-i; j++)
		{
			numberOfComp++;
			if ((a[j] > a[j + 1]))
			{
				int tmp = 0;
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				swapCheck = true;
				
			}
		}
		
        cout<<"After pass "<< i-1 <<":";
		for (int q = 0; q <= SIZE - i ; q++)
		     cout << setw(4) << a[q];
		cout << endl;
		if (swapCheck == false)
			break;

	}
	

	cout << "\nData items in ascending order\n";

	for (int q = 0; q < SIZE; ++q)
		cout << setw(4) << a[q];

	cout << "\nNumber of comparisons = " << numberOfComp << endl;
	return 0;
}*/
/*int main()
{
	const int PEOPLE = 5, PRODUCTS = 6;
	double sales[PEOPLE][PRODUCTS] = {0};
	double value, totalSales, productSales[PRODUCTS] = { 0.0 };
	int salesPerson, product;

	cout << "Enter the sales person (1-4), "
		<< "product number (1-5)\nand total sales."
		<< "Enter -1 for the sales person to end input.\n";
	cin >> salesPerson;

	while (salesPerson != -1) {
		cin >> product >> value;
		sales[salesPerson][product] += value;
		cin >> salesPerson;
	}

	// table header: describes output and prints
	// column header (product numbers 1-5)
	cout << endl
		<< "The total sales for each sales person are displayed" << endl
		<< "at the end of each row," << "and the total sales for each" << endl
		<< "product are displayed at the bottom of each column." << endl
		<< setw(10) << 1 << setw(10) << 2 << setw(10) << 3 << setw(10)
		<< 4 << setw(10) << 5 << setw(11) << "Total" << endl;
	cout << fixed; //与setprecision连用，设置小数点后显示位数。

  // nested loop structure: prints salesperson number
  // followed by the amounts sold for each product
	for (int i = 1; i<PEOPLE; ++i) {
		totalSales = 0.0;

		// this prints salesperson number
		cout << i;

		// inner loop: prints amounts sold for each product
		for (int j = 1; j<PRODUCTS; ++j) {
			totalSales += sales[i][j];


				// print sales for each salesperson for each product
			cout << setw(10) << setprecision(2)
				<< sales[i][j];

			productSales[j] += sales[i][j];
		}

		//print the last column item (total sales of each
		// product). The totalSales value is 9.99 under
		// 'Total' in the output box. After this value is
		// printed, the next table line can be created
		cout << setw(10) << setprecision(2)
			<< totalSales << endl;
	}

	// this is the header for the last row
	cout << "\nTotal" << setw(6) << setprecision(2)
		<< productSales[1];

	// this prints the last row which displays the total sales
	// for each product
	for (int j = 2; j < PRODUCTS; ++j)
		cout << setw(10) << setprecision(2)
		<< productSales[j];

	cout << endl;
	return 0;
}*/
/*int main()
{
	//TODO: ......

	return 0;
}

int Input(long num[], float score[], int array_size)
{
	//TODO: 通过终端输入学生学号和分数
	cout << "Enter the student number and the score:" << endl;

}

void Total1(long num[], float score[], int n)
{
	//变量声明：total:不及格人数
	int total = 0;

	//TODO: 统计不及格人数及打印不及格学生名单

	cout << "The score<60 is:" << total << endl;
}
void Total2(long num[], float score[], int n)
{
	//变量声明：total:不及格人数
	int total = 0;

	//TODO: 统计总分，计算平均分

	//TODO: 打印平均分之上同学的名单

	cout << "The score>=average is:" << total << endl;
}
*/
#define  MAXNUM 30
const int COURSENUM = 3;
int Input(long num[], float score[][COURSENUM], int array_size); 
void Total1(float score[][3], float sum[], float aver[], int n); //Total1:单个学生
void Total2(float score[][3], float sum[], float aver[], int n);//Total2:总体
void Total3(long num[], float score[][COURSENUM], float sum[], float aver[], int n);//Total3:排序
void Print(long num[], float score[][COURSENUM], float sum1[], float aver1[], float sum2[], float aver2[], int n);
int main()
{
	long num[MAXNUM] = { 0 };
	float score[MAXNUM][3] = { 0 };
	float averstu[MAXNUM] = { 0 };
	float sumstu[MAXNUM] = { 0 };
	float avercourse[COURSENUM] = { 0 };
	float sumcourse[COURSENUM] = { 0 };
	int size = Input(num, score, MAXNUM);//size：size是总人数
	//if (size == 0)
	//{
	/*	cout << "Pos	Number	Grad1	Grad2	Grad3	" ;
		cout << "Sum1	Aver1" << endl;
		cout << "No	Sum2	Aver2" << endl;
		cout << "1	0	0" << endl;
		cout << "2	0	0" << endl;
		cout << "3	0	" ;
		cout << "0";*/
	//}
	//else if(size!=-1)
	{


		Total1(score, sumstu, averstu, size);
		Total2(score, sumcourse, avercourse, size);
		Total3(num, score, sumstu, averstu, size);
		Print(num, score, sumstu, averstu, sumcourse, avercourse, size);
	}
	return 0;
}

int Input(long num[], float score[][COURSENUM], int array_size)
{
	//TODO: 通过终端输入学生学号和分数
	
	for (int i = 0; i <array_size; i++)
	{
		long temp = 0;
		float temp1,temp2,temp3 = 0;

		cin >> temp;
		if (!(temp >= 0))
		{
			return i ;
		}
		cin>> temp1 >> temp2 >> temp3;

		if (temp >= 0)
		{
			//for (int j = 0; j <= COURSENUM - 1; j++)
			//{
			//	score[i][j]
			//}
			score[i][0] = temp1;
			score[i][1] = temp2;
			score[i][2] = temp3;
			num[i] = temp;
		}
		


	}
	return MAXNUM;//没有触发-1要给一个返回值

};

void Total1(float score[][COURSENUM], float sum[], float aver[], int n)

{
	if (n == 0)
	{
		return;
	}
	else {
		for (int i = 0; i <n; i++)
		{
			for (int j = 0; j <= COURSENUM-1; j++)
			{
				sum[i] += score[i][j];
			}
			aver[i] = sum[i] / 3;
		}
	}
	
}
void Total2(float score[][COURSENUM], float sum[], float aver[], int n)
{
	//变量声明：total:及格人数
	if (n == 0)
	{
		return;
	}
	else {
		for (int i = 0; i <= COURSENUM -1; i++)
		{
			for (int j = 0; j < n; j++)
			{
				sum[i] += score[j][i];

			}
			aver[i] = sum[i] / (n);
		}
	}
};
void Total3(long num[], float score[][COURSENUM], float sum[], float aver[], int n)
{
	if (n == 0)
	{
		return;
	}
	else {
		bool swapCheck = true;
		for (int i = 0; i < n; i++)
		{
			swapCheck = false;
			for (int j = 0; j < n - i; j++)
			{

				if ((sum[j] < sum[j + 1]))
				{
					float tmp = 0;
					int  tmpp = 0;
					tmp = sum[j];
					sum[j] = sum[j + 1];
					sum[j + 1] = tmp;//以上对sum排序
					tmpp = num[j];
					num[j] = num[j + 1];
					num[j + 1] = tmpp;//以上对num排序
					tmp = aver[j];
					aver[j] = aver[j + 1];
					aver[j + 1] = tmp;//以上对aver排序
					tmp = score[j][0];
					score[j][0] = score[j + 1][0];
					score[j + 1][0] = tmp;
					tmp = score[j][1];
					score[j][1] = score[j + 1][1];
					score[j + 1][1] = tmp;
					tmp = score[j][2];
					score[j][2] = score[j + 1][2];
					score[j + 1][2] = tmp;//对三个score排序
					swapCheck = true;

				}
			}
			if (swapCheck == false)
				break;
		}
	}
}
void Print(long num[], float score[][COURSENUM], float sum1[], float aver1[], float sum2[], float aver2[], int n)
{
	cout << "Pos\tNumber\tGrad1\tGrad2\tGrad3\tSum1\tAver1" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << (i+1) <<"\t"<< num[i] <<"\t"<< score[i][0] <<"\t"<< score[i][1] <<"\t"<< score[i][2] <<"\t"<< sum1[i] <<"\t"<< aver1[i] << endl;
	}
	cout << "No\tSum2\tAver2" << endl;
	for (int i = 0; i <= COURSENUM-1; i++)
	{
		cout << (i + 1) << "\t" << sum2[i] << "\t" << aver2[i] << endl;
	}
}
