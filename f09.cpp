
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <windows.h>
#include <fstream>
#include <ctime>
#include <conio.h>
#include <ctime>
#include <cstdlib>
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"
using namespace std;
void f091();
void f092();
void f093();
void f094();
void f095();
void f096();
void f097();
void f09()
{
    string menuItem[] = {
        "[0] 離開",
        "[1] 駭客任務",
        "[2] 練習",
        "[3] 魯迪烏斯",
        "[4] 生肖",
        "[5] 星座",
        "[6] 成績輸入",
        "[7] 威力彩",
        "[8] 魯迪烏斯對戰",
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

            break;
        case 1:
            f091();
            break;
        case 2:
            f092();
            break;
        case 3:
            f093();
            break;
        case 4:
            f094();
            break;
        case 5:
            f095();
            break;
        case 6:
            f096();
            break;
        case 7:
            f097();
            break;
        }

        cout << "\n";
        //		system("pause");
        //		return 0;
        selMenu = 0;
    }
}

void f091()
{
    unsigned seed;
    seed = (unsigned)time(NULL);
    srand(seed);
    // system("color 0a");
    while (1)
    {
        for (int i = 0; i < 50; i++)
        {
            for (int j = 0; j < 120; j++)
            {
                cout << rand() % 2;
            }
            cout << "\n";
        }
        if (kbhit())
        {
            system("color");
            cout << "quit";
            break;
        }
    }
    system("pause");
}
void f092()
{
    int a[4];
    string b[] = {"座號", "國文", "英文", "基電"};

    for (int i = 0; i < 4; i++)
    {
        cout << "請輸入" << b[i] << "：";
        cin >> a[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cout << "a["
             << i
             << "]=" << a[i] << endl;
    }
    system("pause");
}
void f093()
{
    int ED[2], DPS[2], AS[2], CHC[2], CHD[2];
    int life[2], cnt[2];
    string name[2];
    int dps, chc, chd;
    bool isGameover = 0;
    bool isWin;
    int n = 0;
    // 初始化魯迪吾斯
    name[0] = "魯迪烏斯";
    ED[0] = 20;
    DPS[0] = 1000;
    AS[0] = 20;
    CHC[0] = 50;
    CHD[0] = 500;
    life[0] = 90000;
    cnt[0] = 0;
    // 初始化拉普拉斯
    name[1] = "拉普拉斯";
    ED[1] = 50;
    DPS[1] = 2000;
    AS[1] = 5;
    CHC[1] = 20;
    CHD[1] = 200;
    life[1] = 90000;
    cnt[1] = 0;

    unsigned seed;
    seed = (unsigned)time(NULL);
    srand(seed);

    cout << "魯迪烏斯，在他的同年時期，成爲了魔族魔法師洛琪希·米格路迪亞的學生。\n";
    cout << "洛琪希·米格路迪亞：魯迪，試試冥想，發出魔法！！\n";
    cout << "魯迪：好，魔法攻擊！！！\n";
    cout << "按空格鍵開始\n";
    cout << "------------------------------------\n";
    system("cls");
    while (!isGameover)
    {
        cout << name[0] << "\t"
             << "生命：" << life[1] << endl;
        char key = getch();
        int x = n % 2;
        dps = (1 + ED[x] / 100.0) * (DPS[x]) * (1 + AS[x]);
        chc = 1 + rand() % 100;
        if (chc <= CHC[x])
        {
            chd = rand() % CHD[x];
            dps = dps * (1 + chd / 100.0);
        };

        life[1 - x] = life[1 - x] - int(dps);
        cout << name[x] << " 向 " << name[1 - x] << " 發出攻擊 " << dps << endl;
        cnt[x]++;
        n++;
        getch();
        system("cls");

        if (life[0] < 0 || life[1] < 0)
        {
            isGameover = 1;
            life[0] > life[1] ? isWin = 0 : isWin = 1;
        }
    }
    cout << name[0] << "\t" << name[1] << endl;
    cout << "生命：" << life[0] << "\t"
         << "生命：" << life[1] << endl;
    if (isWin = 0)
    {
        cout << "邪不勝正！！" << endl;
    }
    else
    {
        cout << "垃圾勇者！！" << endl;
    }
    cout << "------------------------------\n";
    cout << "角色\t\t次數\t傷害\t均傷\t暴擊\t暴擊均傷\n";
    for (int i = 0; i < 2; i++)
    {
        cout << name[i] << "\t" << cnt[i] << "\t" << dps << "\t" << dps << "\t" << chc << "\t" << chd << endl;
    }
    system("pause");
}
void f094()
{
    int year;
    string ani[] = {"鼠",
                    "牛",
                    "虎",
                    "兔",
                    "龍",
                    "蛇",
                    "馬",
                    "羊",
                    "猴",
                    "鷄",
                    "狗",
                    "豬"};
    for (int i = 0; i < 12; i++)
    {
        cout << ani[i] << " ";
    }
    cout << endl;
    cout << "請輸入國曆年：";
    cin >> year;
    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 5; j++)
        {

            cout
                << setw(4) << year << "年：" << ani[year % 12] << " ";
            year += 1;
        }

        cout << endl;
    }

    // cout<<ani[year%12];

    system("pause");
}
void f095()
{
    int month, day;
    int signmonth[] = {
        21, 20, 21, 20, 21, 22, 23, 23, 23, 24, 22, 21};

    string sign[] = {"魔羯座 Capricorn",
                     "水瓶座 Aquarius",
                     "雙魚座 Pisces",
                     "牡羊座 Aries",
                     "金牛座 Taurus",
                     "雙子座 Gemini",
                     "巨蟹座 Cancer",
                     "獅子座 Leo",
                     "處女座 Virgo\n",
                     "天秤座 Libra",
                     "天蠍座 Scorpio",
                     "射手座 Sagittarius"};
    cout << "請輸入出生月份：";
    cin >> month;
    cout << "你是在" << month << "月哪一天出生的呢？";
    cin >> day;
    if (day <= 0 || day > 31)
    {

        month = 0;
    }
    if ((month == 2 && day > 29) || ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30))
    {

        month = 0;
    }

    if (month == 0)
    {
        cout << "火星人，Wellcome to the earth!!";
    }
    if (month == 12 && day >= 21)
    {
        month = 1;
        day = 1;
    }
    if (day < signmonth[month - 1])
    {
        cout << sign[month - 1];
    }
    else
    {
        cout << sign[month];
    }
    cout << endl;
    system("pause");
}
void f096()
{
    int i, j, count = 1, stu = 0;
    cout << "請輸入學生數目";
    cin >> stu;
    int cht[stu + 1], ckt[stu + 1], mat[stu + 1], sum[stu + 1];
    float avg[stu + 1];
    cht[0] = 0;
    ckt[0] = 0;
    mat[0] = 0;
    sum[0] = 0;
    avg[0] = 0;

    while (count <= stu)
    {
        cout << "------------------------------------" << endl;
        cout << "請輸入 " << count << " 號同學的國文分數：";
        cin >> cht[count];
        cout << "請輸入 " << count << " 號同學的數學分數：";
        cin >> mat[count];
        cout << "請輸入 " << count << " 號同學的基電分數：";
        cin >> ckt[count];
        sum[count] = cht[count] + ckt[count] + mat[count];
        avg[count] = sum[count] / 3.0;
        cht[0] += cht[count];
        mat[0] += mat[count];
        ckt[0] += ckt[count];
        sum[0] += sum[count];
        avg[0] += avg[count];
        count++;
    }
    cout << "\n座號\t國文\t數學\t基電\t總分\t平均\n";
    for (i = 1; i <= stu; i++)
    {
        cout << i << "\t" << cht[i] << "\t" << mat[i] << "\t" << ckt[i] << "\t" << sum[i] << "\t" << avg[i] << endl;
    }
    cout << "平均\t" << (float)cht[0] / stu << "\t" << (float)mat[0] / stu << "\t" << (float)ckt[0] / stu;
    cout << "\t" << (float)sum[0] / stu << "\t" << (float)avg[0] / stu << endl;
    system("pause");
}
void f097()
{
    int min = 1, max = 38;
    int i, j, randNum, existing;
    int lotto[7] = {0};

    srand(time(NULL));
    cout << "第 1 選號區：" << endl;
    const char *line = "0";
    for (i = 0; i < 6; i++)
    {
        do
        {
            existing = 0;
            randNum = rand() % 38 + 1;
            for (int j = 0; j < i; j++)
            {
                if (lotto[j] == randNum)
                {
                    existing = 1;
                    break;
                }
            }
        } while (existing > 0);
        {
            lotto[i] = randNum;
            cout << setw(2) << std::setfill('0') << lotto[i] << "\t";
        }
    }
    lotto[6] = rand() % 8 + 1;
    cout << endl
         << endl
         << "第 2 選號區：" << endl;
    cout << setw(2) << std::setfill('0') << lotto[6] << endl;

    int ans[7];
    int win = 0, wins = 0, tmp;
    for (int i = 1; i <= 6; i++)
    {
        
        do
        {
            existing = 0;
            cout << "請輸入號碼" << i  << "：";
            cin >> tmp;
            // cout << tmp;
            for (int j = 0; j < i; j++)
            {
                if (ans[j] == tmp)
                {
                    existing = 1;
                    cout << "repeat error\n";
                    break;
                }
                if (tmp > 38 || tmp < 1)
                {
                    existing = 1;
                    cout << "overrange error\n";
                }
            }
        } while (existing > 0);
        ans[i] = tmp;
        for (int j = 0; j < 6; j++)
        {
            if (ans[i] == lotto[j])
            {
                win++;
            }
        }
    }
    do
    {
        cout << "請輸入特別號碼：";
        cin >> ans[6];
        if (ans[6] < 1 || ans[6] > 8){
            cout<<"overrange error\n";
        }
    } while (ans[6] <1  || ans[6] > 8);

    if (ans[6] == lotto[6])
    {
        wins++;
    }
    cout << "第一區對中 " << win << " 個\t"
         << "第二區對中 " << wins << " 個";
    if (win == 6 && wins == 1)
    {
        cout << "頭獎\n";
    }
    else if (win == 6)
    {
        cout << "貳獎\n";
    }
    else if (win == 5 && wins == 1)
    {
        cout << "參獎 NT$150,000\n";
    }
    else if (win == 5)
    {
        cout << "肆獎 NT$20,000\n";
    }
    else if (win == 4 && wins == 1)
    {
        cout << "伍獎 NT$4,000\n";
    }
    else if (win == 4)
    {
        cout << "陸獎 NT$800\n";
    }
    else if (win == 3 && wins == 1)
    {
        cout << "柒獎 NT$400\n";
    }
    else if (win == 2 && wins == 1)
    {
        cout << "捌獎 NT$200\n";
    }
    else if (win == 3)
    {
        cout << "玖獎 NT$100\n";
    }
    else if (win == 1 && wins == 1)
    {
        cout << "普獎 NT$100\n";
    }
    else
    {
        cout << "杠龜\n";
    }

    system("pause");
}