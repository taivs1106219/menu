#include <iostream>

using namespace std;

void f07();
void f071();
void f072();
void f073();
void f074();
void f075();
void f076();
void f078();
void f079();
void f07()
{
    string menuItem[] = {
        "[71] 電費 if-else",
        "[72] 電費 switch-case",
        "[73] 星座",
        "[74] 打印樹枝",
        "[75] ",
        "[76] 小學堂四則運算版",
        "[77] ",
        "[78] 221109 考題1",
        "[79] 221109 考題2"};
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
        case 71:
            f071();
            break;
        case 72:
            f072();
            break;
        case 73:
            f073();
            break;
        case 74:
            f074();
            break;
        case 75:
            f075();
            break;
        case 76:
            f076();
            break;
        case 78:
            f078();
            break;
        case 79:
            f079();
            break;
        }

        cout << "\n";
        selMenu = 0;
    }
}
void f071()
{
    int e;
    cout << "Input:";
    float price = 0;
    cin >> e;
    if (e < 120)
    {
        price = 1.63 * e;
    }
    else if (e > 121 && e <= 330)
    {
        price = 120 * 1.63 + (e - 120) * 2.38;
    }
    else if (e > 330 && e <= 500)
    {
        price = 1201 * 1.63 + (330 - 120) * 2.38 + (e - 330) * 3.52;
    }
    else if (e > 500 && e <= 700)
    {
        price = 120 * 1.63 + (330 - 120) * 2.38 + (500 - 330) * 3.52 + (e - 500) * 4.8;
    }
    else if (e > 701 && e <= 1000)
    {
        price = 120 * 1.63 + (330 - 120) * 2.38 + (500 - 330) * 3.52 + (700 - 500) * 4.8 + (e - 700) * 5.66;
    }
    else
    {
        price = 6.41 * e;
    }

    cout << "Result:" << price << endl;
    system("pause");
}
void f072()
{
    int e;
    float price = 0;
    cout << "Input:";
    cin >> e;
    switch (e)
    {
    case 0 ... 120:
        price = 1.63 * e;
        break;
    case 121 ... 330:
        price = 120 * 1.63 + (e - 120) * 2.38;
        break;
    case 331 ... 500:
        price = 1201 * 1.63 + (330 - 120) * 2.38 + (e - 330) * 3.52;
        break;
    case 501 ... 700:
        price = 120 * 1.63 + (330 - 120) * 2.38 + (500 - 330) * 3.52 + (e - 500) * 4.8;
        break;
    case 701 ... 1000:
        price = 120 * 1.63 + (330 - 120) * 2.38 + (500 - 330) * 3.52 + (700 - 500) * 4.8 + (e - 700) * 5.66;
        break;
    default:
        price = 6.41 * e;
        break;
    }

    cout << "Result:" << price << endl;
    system("pause");
}
void f073()
{
    int month, day;
    cout << "出生月份：";
    cin >> month;
    cout << "出生日：";
    cin >> day;
    if ((month == 2) && (day == 29) || (month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
    {
        month = 0;
    }
    switch (month)
    {
    case 1:
        if (day < 21)
        {
            cout << "魔羯座 Capricorn" << endl;
        }
        else
        {
            cout << "水瓶座 Aquarius" << endl;
        }
        break;
    case 2:
        if (day < 20)
        {
            cout << "水瓶座 Aquarius" << endl;
        }
        else
        {
            cout << "雙魚座 Pisces" << endl;
        }
        break;
    case 3:
        if (day < 21)
        {
            cout << "雙魚座 Pisces" << endl;
        }
        else
        {
            cout << "牡羊座 Aries" << endl;
        }
        break;
    case 4:
        if (day < 20)
        {
            cout << "牡羊座 Aries" << endl;
        }
        else
        {
            cout << "金牛座 Taurus" << endl;
        }
        break;
    case 5:
        if (day < 20)
        {
            cout << "金牛座 Taurus" << endl;
        }
        else
        {
            cout << "雙子座 Gemini" << endl;
        }
        break;
    case 6:
        if (day < 22)
        {
            cout << "雙子座 Gemini" << endl;
        }
        else
        {
            cout << "巨蟹座 Cancer" << endl;
        }
        break;
    case 7:
        if (day < 23)
        {
            cout << "巨蟹座 Cancer" << endl;
        }
        else
        {
            cout << "獅子座 Leo" << endl;
        }
        break;
    case 8:
        if (day < 23)
        {
            cout << "獅子座 Leo" << endl;
        }
        else
        {
            cout << "處女座 Virgo" << endl;
        }
        break;
    case 9:
        if (day < 23)
        {
            cout << "處女座 Virgo" << endl;
        }
        else
        {
            cout << "天秤座 Libra" << endl;
        }
        break;
    case 10:
        if (day < 24)
        {
            cout << "天秤座 Libra" << endl;
        }
        else
        {
            cout << "天蠍座 Scorpio" << endl;
        }
        break;
    case 11:
        if (day < 22)
        {
            cout << "天蠍座 Scorpio" << endl;
        }
        else
        {
            cout << "射手座 Sagittarius" << endl;
        }
        break;
    case 12:
        if (day < 21)
        {
            cout << "射手座 Sagittarius" << endl;
        }
        else
        {
            cout << "魔羯座 Capricorn" << endl;
        }
        break;
    default:
        cout << "日期錯誤！" << endl;
        break;
    }
    system("pause");
}
void f074()
{
    cout << "請輸入樹枝：";
    int branch;
    cin >> branch;
    for (int i = 1; i <= branch; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= branch; i++)
    {
        for (int k = 1; k <= branch - i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= branch; i++)
    {

        for (int j = 1; j <= branch - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= branch; i++)
    {

        for (int k = 1; k <= i - 1; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= -1 * (i - branch) + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    system("pause");
}
void f075()
{
    int num;
    cin >> num;

    while (num > 0)
    {
        cout << num % 10;
        num = num / 10;
    }
    cout << endl;
    system("pause");
}

void f076()
{
    clock_t a, b;
    int i;
    float spend;
    a = clock();
    // start timing

    int tmp, sum, ans, x, y, op;
    int win = 0;
    int n = 1;

    srand(time(NULL));
    cout << "小學堂大考驗\n";
    while (n < 5)
    {
        x = rand() % 10 + 1;
        y = rand() % 10 + 1;
        // op = rand() % 2;
        if (y > x)
        {
            tmp = x;
            x = y;
            y = tmp;
        }
        // if (n == 4)
        // {
        //     do
        //     {
        //         x = rand() % 10 + 1;
        //         y = rand() % 10 + 1;
        //         // op = rand() % 2;
        //         if (y > x)
        //         {
        //             tmp = x;
        //             x = y;
        //             y = tmp;
        //         }
        //     } while (x % y);
        // }
        switch (n)
        {
        case 1:
            sum = x + y;
            cout << "第" << n << "題：" << x << "+" << y << "=?\n";
            break;

        case 2:
            sum = x - y;
            cout << "第" << n << "題：" << x << "-" << y << "=?\n";
            break;
        case 3:
            sum = x * y;
            cout << "第" << n << "題：" << x << "*" << y << "=?\n";
            break;
        case 4:
            sum = x / y;
            cout << "第" << n << "題：" << x << "/" << y << "=?\n";
            break;
        }
        cin >> ans;
        if (sum == ans)
        {
            cout << "答對了~\n";
            win++;
        }
        else
        {
            cout << "答錯了\n";
        }
        n++;
    }
    cout << "得分：" << win * 25 << endl;
    // end timming
    b = clock();
    spend = (double)(b - a) / CLK_TCK;
    cout.precision(3);
    cout << "Time Spent: " << spend << "s" << endl;

    system("pause");
}
void f078()
{
    int chinese, english, math, social, science, sum;
    float avg;
    cout << "請輸入國文成績：";
    cin >> chinese;
    cout << "請輸入英文成績：";
    cin >> english;
    cout << "請輸入數學成績：";
    cin >> math;
    cout << "請輸入社會成績：";
    cin >> social;
    cout << "請輸入自然成績：";
    cin >> science;
    sum = chinese + english + math + social + science;
    avg = (float)sum / 5;
    cout.precision(3);
    cout << "總分：" << sum << "\t\t"
         << "平均：" << avg << endl;
    system("pause");
}
void f079()
{
    int num;
    int sum = 0;
    cout << "要計算什麽數的倍數和？";
    cin >> num;
    cout << "1~100中，" << num << "的倍數有：";
    for (int i = 1; i <= 100; i++)
    {
        if (num * i <= 100)
        {
            cout << num * i << " ";
            sum += num * i;
        }
        else
        {
            continue;
        }
    }
    cout << "\n";
    cout << num << "的倍數和為" << sum << endl;
    system("pause");
}