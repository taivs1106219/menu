#include <iostream>
#include <iomanip>
using namespace std;

void f000();
void f06();
void f061();
void f062();
void f063();
void f064();
void f065();
void f066();
void f067();
void f069();
void f06()
{
    string menuItem[] = {
        "[61] 1+3+5...+19",
        "[62] HW221019 CH5-3",
        "[63] HW221019 CH6-5 for ",
        "[64] HW221019 CH6-5 while",
        "[65] 九九乘法表",
        "[66] 九九乘法表2",
        "[67] HW:公因數與公倍數",
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
        case 65:
            f065();
            break;
        case 66:
            f066();
            break;
        case 67:
            f067();
            break;
        case 69:
            f069();
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

    int a = 1, sum1 = 0;
    do
    {
        cout << a;
        if (a == 10)
        {
            cout << "+";
        }
        else
        {
            cout << "=";
        }
        sum1 += a;
        a++;
    } while (a <= 10);
    cout << "sum1=" << sum1 << endl;

    int b = 1, sum2 = 0;
    do
    {
        cout << b;
        if (b == 9)
        {
            cout << "=";
        }
        else
        {
            cout << "+";
        }
        sum2 += b;
        b += 2;
    } while (b <= 10);
    cout << sum2 << endl;
    cout << "印出1~10非5整除的數字" << endl;
    for (int c = 1; c <= 10; c++)
    {
        if (c % 5 == 0)
        {
            continue;
        }
        cout << c << ",";
    }
    cout << endl;
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
void f065()
{

    cout << "    |\t1 \t2 \t3 \t4 \t5 \t6 \t7 \t8 \t9 \n";
    for (int i = 1; i <= 80; i++)
    {
        cout << "-";
    }
    cout << "\n";
    for (int x = 1; x <= 9; x++)
    {
        cout << x << "   |\t";
        int y = 1;
        while (y <= 9)
        {
            cout << x * y << "\t";
            y++;
        };
        cout << "\n";
    }
    cout << "\n";

    system("pause");
}
void f066()
{
    for (int x = 1; x <= 9; x++)
    {

        for (int y = 1; y <= 9; y++)
        {
            cout << x << "*" << y << "=" << setw(2) << x * y << "\t";
        }
        cout << "\n";
    }
    system("pause");
}
void f067()
{
    int a, b;
    cin >> a >> b;
    int num1 = a;
    int num2 = b;
    while (a && b)
    {
        if (a > b)
        {
            a = a % b;
        }
        else if (b > a)
        {
            b = b % a;
        }
    }
    if (a >= b)
    {
        cout << num1 << "," << num2 << "的最大公因數：" << a << endl;
    }
    else if (b > a)
    {
        cout << num1 << "," << num2 << "的最大公因數：" << b << endl;
    }

    system("pause");
}
void f069()
{
    int i = 0;
    int ans;
    srand(time(NULL));
    do
    {
        ans = rand() % 100 + 1;
        cout << ans << " ";
        i++;
    } while (i < 5);
    cout << endl;
    system("pause");
}