#include <iostream>
using namespace std;

void f000();
void f06();
void f061();
void f062();
void f063();
void f064();

void f06()
{
    string menuItem[] = {
        "[61] 1+3+5...+19",
        "[62] HW221019 CH5-3",
        "[63] HW221019 CH6-5 for ",
        "[64] HW221019 CH6-5 while",
        "[65] ",
        "[66] ",
        "[67] ",
        "[68] ",
        "[69] "};
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
        case 0:
            f000();
            break;
        case 61:
            f061();
            break;
        case 62:
            f062();
            break;
        case 63:
            f063();
            break;
        case 64:
            f064();
            break;
        }

        cout << "\n";
        selMenu = 0;
    }
}
void f000()
{
    cout << "叮~恭喜你觸發了彩蛋" << endl;
    system("pause");
}
void f061()
{
    // int i, j;
    // j = 0;
    // for (i = 1; i <= 19; i += 2)
    // {
    // 	j += i;
    // }
    // {
    // 	for (j = 1; j < i; j++)
    // 	{
    // 		cout << "*";
    // 	}
    // 	cout << endl;
    // }

    // cout << j << endl;

    // system("pause");

    int i = 1, sum = 0;
    do
    {
        sum += i;
        i++;
    } while (i <= 10);

    cout << "sum=" << sum << endl;

    system("pause");
}
void f062()
{

    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "星期一" << endl;
        break;
    case 2:
        cout << "星期二" << endl;
        break;
    case 3:
        cout << "星期三" << endl;
        break;
    case 4:
        cout << "星期四" << endl;
        break;
    case 5:
        cout << "星期五" << endl;
        break;
    case 6:
        cout << "星期六" << endl;
        break;
    case 7:
        cout << "星期日" << endl;
        break;

    default:
        cout << "輸入錯誤！" << endl;
        break;
    }
    system("pause");
}
void f063()
{
    for (int i = 1; i <= 100; i++)
    {
        if ((i % 2) && (i % 3) && (i % 5) && (i % 7))
        {
            cout << i << endl;
        }
    }
    system("pause");
}
void f064()
{
    int i = 1;
    while (i <= 100)
    {
        if ((i % 2) && (i % 3) && (i % 5) && (i % 7))
        {
            cout << i << endl;
        }
        i++;
    }
    system("pause");
}