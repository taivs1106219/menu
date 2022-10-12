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

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char **argv)
{
	string menuItem[] = {
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
		system("chcp 950");
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
		}
		cout << "\n";
		system("pause");
		return 0;
	}
}
void f01()
{
	int chi, eng, math;

	cout << "請輸入國文、英文和數學三科分數（整數）" << endl;
	cin >> chi >> eng >> math;
	cout << "國文\t英文\t數學\t平均\n";
	cout << chi << "\t" << eng << "\t" << math << "\t" << (float)(chi + eng + math) / 3;
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
}

void f03()
{
	unsigned int num;
	unsigned int digits;
	cout << "輸入正整數：";
	cin >> num;
	digits = num % 10;
	cout << num << "的個位數是" << digits << endl;
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
}
