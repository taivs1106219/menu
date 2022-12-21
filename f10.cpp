#include <iomanip>
#include <windows.h>
#include <fstream>
#include <ctime>
#include <conio.h>
#include <iostream>
#include <list>
using namespace std;
void f1001();
void f1002();

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void f10()
{
    string menuItem[] = {
        "[1]f01",
        "[2]",
        "[3]",
        "[4]",
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
        cout << "資訊一乙 OO 李OO\n";
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
            f1001();
            break;
        case 2:
            f1002();
            break;
        }
        cout << "\n";
        system("pause");
    }
}

void f1001()
{
    int n, min, max;
    int x;
    srand((unsigned)time(NULL));
    std::list<int> randNums = {};
    bool listContainsRandNum = true;
    cout << "依次輸入亂數個數、最小值和最大值";
    cin >> n >> min >> max;
    if (min > max)
    {
        int tmp = min;
        min = max;
        max = tmp;
    }
    for (int i = 1; i <= n; i++)
    {

        cout << "第" << i << "個隨機數：" << rand() % (max - min + 1) + min << endl;
    }
}

void f1002()
{
    ifstream readfile;
    readfile.open("f1002\\phone.txt", ios::in);

    string destiny[79];
    string line;
    int tel, score, count = 0;
    int fscore = 0, n;
    int yyyy, mm, dd, sum, r;

    getline(readfile, line);

    while (getline(readfile, line))
    {
        destiny[count] = line;
        count++;
    }

    cout << endl;
    readfile.close();
    for (int i = 0; i < count; i++)
    {
        cout << destiny[i];
        if (i % 3 == 2)
        {
            cout << endl;
        }
        else
        {
            cout << "\t";
        }

        cout << endl;
        cout << "究竟是道德的淪喪還是人性的扭曲，讓九天玄翰來給你神秘的意見";
        cout << "輸入手機號碼9位數（不含0開頭）";
        cin >> tel;
        cout << "依次輸入生日年月日";
        cin >> yyyy >> mm >> dd;

        fscore = score % 79 + 1;
        sum = 0;
        r = yyyy % 10;
        while (r != 0)
        {
            sum += r;
            yyyy /= 10;
            r = yyyy % 10;
        }

        cout << endl;
        int tmp;
        for (int i = 0; i < 20; i++)
        {
            system("cls");
            tmp = rand() % 79 + 1;
            cout << "降落！！降落高度：" << tmp << "英尺" << endl;
            cout << destiny[tmp - 1] << endl;
            cout << "第" << i << "次";
            Sleep(500);
        }
        system("CLS");
        cout << "降落！！降落高度：" << tmp << "英尺";
        cout << destiny[fscore - 1] << endl;
        cout /*<< "生日 "*/ << yyyy << endl;
        cout << sum;
    }
}