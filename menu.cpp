#define ； ;
#define ， ,
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <windows.h>
#include <fstream>
#include <ctime>
#include <conio.h>
#include <ctime>
#include <cstdlib>
#include "f06.cpp"
#include "f07.cpp"
#include "f08.cpp"
using namespace std;
void f000();
void f01();
void f02();
void f03();
void f04();
void f05();
void f051();
void f052();
void f053();
void f054();
void f055();
void f056();
void f057();
void f058();
void f059();
void f0510();
void f06();
// void f061();
// void f062();
// void f063();
// void f064();

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char **argv)
{
	string menuItem[] = {
		"[0] 離開",
		"[1] 三數平均",
		"[2] P75Q3",
		"[3] HW:20221005 取個位數",
		"[4] HW:221005 算土產",
		"[5] 流程指令",
		"[6] 迴圈指令",
		"[7]",
		"[8] 期中考",
		"[9]"};
	int i, num;
	int selMenu = 99;
	while (selMenu != 0)
	{
		system("chcp 65001");
		system("cls");
		cout << "資訊一乙 19 崔恩奇\n";
		cout << "-----------------------------" << endl;
		int arrLength = sizeof(menuItem) / sizeof(menuItem[1]);
		for (i = 0; i < arrLength; i++)
		{
			cout << menuItem[i] << endl;
		}
		cout << "請輸入：";
		cin >> selMenu;
		switch (selMenu)
		{
		case 0:
			return 0;
		case 1:
			f01();
			break;
		case 2:
			f02();
			break;

		case 3:
			f03();
			break;

		case 4:
			f04();
			break;
		case 5:
			f05();
			break;
		case 6:
			f06();
			break;
		case 7:
			f07();
			break;
		case 8:
			f08();
			break;
		}

		cout << "\n";
		//		system("pause");
		//		return 0;
		selMenu = 99;
	}
}
void f01()
{
	int chi, eng, math;

	cout << "請輸入國文、英文和數學三科分數（整數）" << endl;
	cin >> chi >> eng >> math;
	cout << "國文\t英文\t數學\t平均\n";
	cout << chi << "\t" << eng << "\t" << math << "\t" << (float)(chi + eng + math) / 3;
	system("pause");
}

void f02()
{
	cout << "3+5=" << 3 + 5 << endl;
	cout << "3%5=" << 3 % 5 << endl;

	int i = 1;
	i += ++i;
	cout << "i=1;i+=++i;i=" << i << endl;

	cout << sizeof(int) << endl;
	cout << sizeof 3.14 << endl;
	cout << sizeof "a" << endl;
	system("pause");
}

void f03()
{
	unsigned int num;
	unsigned int digits;
	cout << "輸入正整數：";
	cin >> num;
	digits = num % 10;
	cout << num << "的個位數是" << digits << endl;
	system("pause");
}
void f04()
{

	int people;
	int boxes;
	int singles;
	cout << "請輸入班級人數";
	cin >> people;
	boxes = people / 8;
	singles = people - (8 * boxes);
	cout << "買" << boxes << "盒，單買" << singles << "個" << endl;
	cout << "共計" << (boxes * 12) + (singles * 2) << "元" << endl;
	system("pause");
}
void f05()
{
	string menuItem[] = {
		"[51] 關聯運算子",
		"[52] 邏輯運算子",
		"[53] 學費",
		"[54] 今年是不是閏年呢~",
		"[55] 投票權",
		"[56] HW 221012：PH值",
		"[57] HW 221012：BMI",
		"[58] switch",
		"[59] ",
		"[510] HW"};
	int i, num;
	int selMenu = 99;
	while (selMenu != 0)
	{
		// system("chcp 950");
		system("cls");
		cout << "資訊一乙 19 崔恩奇\n";
		cout << "-----------------------------" << endl;
		int arrLength = sizeof(menuItem) / sizeof(menuItem[1]);
		for (i = 0; i < arrLength; i++)
		{
			cout << menuItem[i] << endl;
		}
		cout << "請輸入：";
		cin >> selMenu;
		switch (selMenu)
		{
		case 51:
			f051();
			break;

		case 52:
			f052();
			break;
		case 53:
			f053();
			break;
		case 54:
			f054();
			break;
		case 55:
			f055();
			break;

		case 56:
			f056();
			break;
		case 57:
			f057();
			break;
		case 58:
			f058();
			break;
		case 59:
			f059();
			break;
		case 510:
			f0510();
			break;
		}

		cout << "\n";
		selMenu = 0;
	}
}
void f051()
{
	cout << boolalpha;
	//	cout<<"65='A' 運算結果 ="<<(65=="A")<<endl;
	cout << "-0.18>0 運算結果 =" << (-0.18 > 0) << endl;
	cout << "5*6<=10*3 運算結果 =" << (5 * 6 <= 10 * 3) << endl;
	cout << noboolalpha << endl;
	system("pause");
}
void f052()
{
	int score;
	cout << "請輸入測驗成績";
	cin >> score;
	cout << "成績不合理 = " << ((score < 0) || (score > 100)) << endl;
	cout << "成績及格 = " << ((score >= 60) || (score <= 100)) << endl;
	cout << "有一次補考機會 = " << ((score >= 50) && (score < 60)) << endl;
	cout << "成績不及格 = " << ((score >= 0) && (score < 50)) << endl;
	system("pause");
}
void f053()
{
	int price;
	cout << "請輸入收入" << endl;
	cin >> price;
	if (price >= 1480000)
		cout << "需繳納學費" << endl;
	else
		cout << "免繳納學費" << endl;
	system("pause");
}
void f054()
{
	int year;
	cout << "請輸入西元年" << endl;
	cin >> year;
	if ((year % 4) == 0)
		if ((year % 400) == 0)
			cout << year << "是閏年哦" << endl;
		else
		{
			if ((year % 100) == 0)
				cout << year << "不是閏年哦" << endl;
			else
			{
				cout << year << "是閏年哦" << endl;
			}
		}
	else
	{
		cout << year << "不是閏年哦" << endl;
	}
	system("pause");
}
void f055()
{
	int age;
	cout << "請輸入年齡" << endl;
	cin >> age;
	if (age < 18)
		cout << "沒有投票權" << endl;
	else if (age < 20)
		cout << "只能投公投" << endl;
	else
	{
		cout << "領取公投票以及公職人員票" << endl;
	}
	system("pause");
}
void f056()
{
	float ph;
	cout << "請輸入pH值" << endl;
	cin >> ph;
	if (ph <= 8.5 && ph >= 6.0)
	{
		cout << "水質正常" << endl;
	}
	else
	{
		cout << "水質異常" << endl;
	}
	system("pause");
}
void f057()
{
	float bmi;
	cout << "請輸入BMI值" << endl;
	cin >> bmi;
	if (bmi >= 18.5 && bmi < 24.0)
	{
		cout << "體重過輕" << endl;
	}
	else if (bmi >= 24.0 && bmi < 27.0)
	{
		cout << "體重過重" << endl;
	}
	else if (bmi >= 27.0 && bmi < 30.0)
	{
		cout << "輕度肥胖" << endl;
	}
	else if (bmi >= 30.0 && bmi < 32.0)
	{
		cout << "中度肥胖" << endl;
	}
	else if (bmi >= 35.0)
	{
		cout << "重度肥胖" << endl;
	}

	system("pause");
}
void f058()
{
	// int x;
	// cin >> x;
	// switch (x % 2)
	// {
	// case 0:
	// 	cout << "偶數" << endl;
	// 	break;

	// case 1:
	// 	cout << "奇數" << endl;
	// 	break;
	// }
	// system("pause");
	int opt;
	cout << "=====MENU=====" << endl;
	cout << "[1] 開新檔案" << endl;
	cout << "[2] 開啓舊檔" << endl;
	cout << "[3] 結束程式" << endl;
	cout << "==============" << endl;
	cout << "請輸入選項：";
	cin >> opt;
	switch (opt)
	{
	case 1:
		cout << "開新檔案" << endl;
		break;
	case 2:
		cout << "開啓舊檔" << endl;
		break;
	case 3:
		cout << "結束程式" << endl;
		break;
	default:
		cout << "沒有這個選項呢" << endl;
		break;
	}
	system("pause");
}
void f059()
{
	int day;
	cin >> day;
	switch (day)
	{
	case 6:
	case 7:
		cout << "放假了hh" << endl;
		break;
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		cout << "RRR不想上學" << endl;
		break;
	default:
		cout << "敲錯了啦笨蛋！" << endl;
	}

	system("pause");
}
void f0510()
{
}
// void f06()
// {
// 	string menuItem[] = {
// 		"[61] 1+3+5...+19",
// 		"[62] HW221019 CH5-3",
// 		"[63] HW221019 CH6-5 for ",
// 		"[64] HW221019 CH6-5 while",
// 		"[65] ",
// 		"[66] ",
// 		"[67] ",
// 		"[68] ",
// 		"[69] "};
// 	int i, num;
// 	int selMenu = 99;
// 	while (selMenu != 0)
// 	{
// 		// system("chcp 950");
// 		system("cls");
// 		cout << "資訊一乙 19 崔恩奇\n";
// 		cout << "-----------------------------" << endl;
// 		int arrLength = sizeof(menuItem) / sizeof(menuItem[1]);
// 		for (i = 0; i < arrLength; i++)
// 		{
// 			cout << menuItem[i] << endl;
// 		}
// 		cout << "請輸入：";
// 		cin >> selMenu;
// 		switch (selMenu)
// 		{
// 		case 0:
// 			f000();
// 			break;
// 		case 61:
// 			f061();
// 			break;
// 		case 62:
// 			f062();
// 			break;
// 		case 63:
// 			f063();
// 			break;
// 		case 64:
// 			f064();
// 			break;
// 		}

// 		cout << "\n";
// 		selMenu = 0;
// 	}
// }
// void f000()
// {
// 	cout << "叮~恭喜你觸發了彩蛋" << endl;
// 	system("pause");
// }
// void f061()
// {
// 	// int i, j;
// 	// j = 0;
// 	// for (i = 1; i <= 19; i += 2)
// 	// {
// 	// 	j += i;
// 	// }
// 	// {
// 	// 	for (j = 1; j < i; j++)
// 	// 	{
// 	// 		cout << "*";
// 	// 	}
// 	// 	cout << endl;
// 	// }

// 	// cout << j << endl;

// 	// system("pause");

// 	int i = 1, sum = 0;
// 	do
// 	{
// 		sum += i;
// 		i++;
// 	} while (i<=10);

// 	cout << "sum=" << sum << endl;

// 	system("pause");
// }
// void f062()
// {

// 	int day;
// 	cin >> day;
// 	switch (day)
// 	{
// 	case 1:
// 		cout << "星期一" << endl;
// 		break;
// 	case 2:
// 		cout << "星期二" << endl;
// 		break;
// 	case 3:
// 		cout << "星期三" << endl;
// 		break;
// 	case 4:
// 		cout << "星期四" << endl;
// 		break;
// 	case 5:
// 		cout << "星期五" << endl;
// 		break;
// 	case 6:
// 		cout << "星期六" << endl;
// 		break;
// 	case 7:
// 		cout << "星期日" << endl;
// 		break;

// 	default:
// 		cout << "輸入錯誤！" << endl;
// 		break;
// 	}
// 	system("pause");
// }
// void f063()
// {
// 	for (int i = 1; i <= 100; i++)
// 	{
// 		if ((i % 2) && (i % 3) && (i % 5) && (i % 7))
// 		{
// 			cout << i << endl;
// 		}
// 	}
// 	system("pause");
// }
// void f064()
// {
// 	int i = 1;
// 	while (i <= 100)
// 	{
// 		if ((i % 2) && (i % 3) && (i % 5) && (i % 7))
// 		{
// 			cout << i << endl;
// 		}
// 		i++;
// 	}
// 	system("pause");
// }