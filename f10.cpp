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
void f1003();
void f1004();

void f10()
{
    string menuItem[] = {
        "[1] 亂數",
        "[2] 命運",
        "[3] 亂數（函式）",
        "[4] 位數乘機",
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
        case 3:
            f1003();
            break;
        case 4:
            f1004();
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
void getrnd(int arr[], int min, int max, int num)
{
    srand((unsigned)time(NULL));
    int r = 0;
    bool pass = 0;
    for (int i = 0; i <= (num + 1); i++)
    {
        do
        {
            pass = 1;
            r = (rand() % (max - min + 1) + min);
            for (int j = 0; j <= i; j++)
            {
                if (arr[j] == r)
                {
                    pass = 0;
                }
            }
        } while (!pass);
        arr[i] = r;
    }

    int tmp;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
void f1003()
{
    int min, max, rndno;
    cout << "請輸入連續整數的首項：";
    cin >> min;
    cout << "請輸入連續整數的末項：";
    cin >> max;
    cout << "請輸入不重複整數的數量：";
    cin >> rndno;
    if (min > max)
    {
        int tmp = max;
        max = min;
        min = tmp;
    }
    if (max == rndno)
    {
        max += 1;
    }

    int pk[max - min + 1];
    getrnd(pk, min, max, rndno);
    cout << "不重複的整數如下：\n";
    for (int i = 0; i < rndno; i++)
    {
        cout << setw(3) << pk[i] << " ";
        if (i % 5 == 4)
        {
            cout << endl;
        }
    }
    cout << endl;
}
int mul(string a)
{
    int value = 1;

    for (int j = 0; j < a.length(); j++)
    {
        value *= (a[j] - '0');
    }
    return value;
}
void f1004()
{
    int n;
    string str;
    cout << "請輸入資料總數：";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "輸入第" << i << "筆資料";
        cin >> str;
        cout << "乘積為" << mul(str) << endl;
    }
}