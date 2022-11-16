#include <iostream>

using namespace std;

void f08();
void f081();
void f082();
void f083();
void f084();
void f085();
void f086();
void f087();
void f088();
void f089();
void f0810();
void f0811();
void f0812();
void f0813();
void f0814();
void f0815();
void f0816();
void f0817();
void f08()
{
    string menuItem[] = {
        "[1] 三角形邊長",
        "[2] 占卜術",
        "[3] ",
        "[4] 99乘法表",
        "[5] 電費計算",
        "[6] 變數交換",
        "[7] ",
        "[8] 8x8 的棋盤",
        "[9] 生肖",
        "[10] ",
        "[11] ",
        "[12] 鉛筆",
        "[13] 存錢",
        "[14] ",
        "[15] 聖誕樹",
        "[16] ",
        "[17] BMI"};
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

        case 1:
            f081();
            break;
        case 2:
            f082();
            break;
        case 3:
            f083();
            break;
        case 4:
            f084();
            break;
        case 5:
            f085();
            break;
        case 6:
            f086();
            break;
        case 7:
            f087();
            break;
        case 8:
            f088();
            break;
        case 9:
            f089();
            break;
        case 10:
            f0810();
            break;
        case 11:
            f0811();
            break;
        case 12:
            f0812();
            break;
        case 13:
            f0813();
            break;
        case 14:
            f0814();
            break;
        case 15:
            f0815();
            break;
        case 16:
            f0816();
            break;
        case 17:
            f0817();
            break;
        }

        cout << "\n";
        selMenu = 0;
    }
}
void f081()
{
    int x, y, z;
    cout << "請輸入三邊長:";
    cin >> x >> y >> z;
    if (x + y > z && y + z > x && x + z > y)
    {
        cout << "是三角形" << endl;
    }
    else
    {
        cout << "不是三角形" << endl;
    }
    system("pause");
}
void f082()
{
    int m, d, s;
    cout << "請輸入生日月份：";
    cin >> m;
    cout << "請輸入生日日期：";
    cin >> d;
    s = (m * 2 + d) % 3;
    switch (s)
    {
    case 0:
        cout << "普通" << endl;
        break;
    case 1:
        cout << "吉" << endl;
        break;
    case 2:
        cout << "大吉" << endl;
        break;
    }
    system("pause");
}
void f083()
{

    system("pause");
}
void f084()
{
    int m, n;
    cout << "請輸入m n:";
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << i << "x" << j << '=' << setw(2) << i * j << " ";
        }
        cout << "\n";
    }

    system("pause");
}
void f085()
{
    int el = 0;
    double pr = 0;
    cout << "請輸入您的用電度數：";
    cin >> el;
    if (el <= 300)
    {
        pr = 2.5 * 100 + ((el - 100) * 3.3);
    }
    if (el <= 100)
    {
        pr = 2.5 * el;
    }
    if (el > 300)
    {
        pr = 4.2 * el;
    }
    cout << "應繳電費為：" << pr << endl;
    system("pause");
}

void f086()
{
    int a, b, tmp;
    cout << "請輸入a b:";
    cin >> a >> b;
    tmp = a;
    a = b;
    b = tmp;
    cout << a << " " << b << endl;
    system("pause");
}
void f087() {}
void f088()
{
    int edge = 8;
    for (int x = 1; x <= edge; x++)
    {
        for (int y = 1; y <= edge; y++)
        {
            if (x % 2)
            {
                if (y % 2)
                {
                    cout << "■";
                }
                else
                {
                    cout << "□";
                }
            }
            else
            {
                if (y % 2)
                {
                    cout << "□";
                }
                else
                {
                    cout << "■";
                }
            }
        }
        cout << "\n";
    }
    system("pause");
}
void f089()
{
    int year;
    cout << "請輸入國曆（年）：";
    cin >> year;
    switch (year % 12)
    {
    case 0:
        cout << "豬";
        break;
    case 1:
        cout << "鼠";
        break;
    case 2:
        cout << "牛";
        break;
    case 3:
        cout << "虎";
        break;
    case 4:
        cout << "兔";
        break;
    case 5:
        cout << "龍";
        break;
    case 6:
        cout << "蛇";
        break;
    case 7:
        cout << "馬";
        break;
    case 8:
        cout << "羊";
        break;
    case 9:
        cout << "猴";
        break;
    case 10:
        cout << "雞";
        break;
    case 11:
        cout << "狗";
        break;
    }
    cout << endl;
    system("pause");
}
void f0810() {}
void f0811()
{
    int num;
    float ans;
    cout << "n:";
    cin >> num;
    ans = 1.0;
    for (int i = 2; i <= num - 1; i++)
    {
        if (i % 2)
        {
            ans += (1.0 / i);
        }
        else
        {
            ans - (1.0 / i);
        }
    }
    ans -= (1.0 / num);
    cout << ans<<endl;
    system("pause");
}
void f0812()
{
    int people;
    int boxes;
    int singles;
    cout << "人數:";
    cin >> people;
    boxes = people / 12;
    singles = people - (12 * boxes);
    cout << boxes << "打" << singles << "枝" << (boxes * 50) + (singles * 5) << "元" << endl;
    system("pause");
}
void f0813()
{
    int in, money;
    do
    {
        cout << "存款：";
        cin >> in;
        money += in;
        cout << "目前金額 :" << money << "\n";
    } while (money < 10000);
    cout << "可以求婚了！" << endl;
    system("pause");
}
void f0814()
{
    int a, b;
    cout << "請輸入a b:";
    cin >> a >> b;
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
        cout << "最小公倍數:" << (a * b) / a
             << "最大公因數:" << a;
    }
    else if (b > a)
    {
        cout << "最小公倍數:" << (a * b) / b
             << "最大公因數:" << b;
    }
    system("pause");
}
void f0815()
{
    for (int i = 1; i <= 8; i++)
    {

        int l, m;
        if (i <= 5)
        {
            l = 5 - i;
            m = 2 * (i - 1) + 1;
        }
        else
        {
            l = 3;
            m = 3;
        }
        for (int x = 0; x < l; x++)
        {
            cout << " ";
        }

        for (int y = 0; y < m; y++)
        {
            cout << "*";
        }

        cout << "\n";
    }
    system("pause");
};
void f0816()
{
    int i, in, sum;
    char ans[20];
    do
    {
        i++;
        cout << "輸入第 " << i << " 個整數：";
        cin >> in;
        sum += in;
        cout << "是否繼續 (y/N) ？";
        cin >> ans[20];
        cout << ans[20] << endl;
    } while (!(ans == "y" || ans == "Y"));
    system("pause");
};
void f0817()
{
    int h, w;
    double hm, bmi;
    cout << "請輸入身高值(cm)：";
    cin >> h;
    cout << "請輸入體重值(kg)：";
    cin >> w;
    hm = h / 100.0;
    bmi = w / (hm * hm);
    cout << "BMI:" << bmi << "\n";
    if (bmi < 18.5)
    {
        cout << " 體重過輕" << endl;
    }
    else if (bmi < 24)
    {
        cout << " 體重適中" << endl;
    }
    else if (bmi < 27)
    {
        cout << " 體重過重" << endl;
    }
    else if (bmi < 30)
    {
        cout << " 輕度肥胖" << endl;
    }
    else if (bmi < 35)
    {
        cout << " 中度肥胖" << endl;
    }
    else
    {
        cout << " 重度肥胖" << endl;
    }
    system("pause");
};