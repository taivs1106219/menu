#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <windows.h>
#include <fstream>
#include <ctime>
#include <conio.h>
using namespace std;
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
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char **argv)
{
	string menuItem[] = {
		"[0] 離開",
		"[1] 三數平均",
		"[2] P75Q3",
		"[3]HW:20221005 取個位數",
		"[4]HW:221005 算土產",
		"[5]",
		"[6]",
		"[7]",
		"[8]",
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
		"[56] HW 221012：",
		"[57] HW 221012：",
		"[58]",
		"[59]"};
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
		}

		cout
			<< "\n";
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
	int age
			cout
		<< "請輸入年齡" << endl;
	cin >> age;
	if(age<18)
		cout<<"沒有投票權"<<endl;
	else if(age<20)
		cout<<"只能投公投"<<endl;
	else{
		cout<<"領取公投票以及公職人員票"<<endl;
	}
	system("pause");
}