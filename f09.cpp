
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
void f09()
{
    string menuItem[] = {
        "[0] 離開",
        "[91] 駭客任務",
        "[92] 練習",
        "[93] ??",
        "[94] 生肖",
        "[95] 星座",
        "[96] ",
        "[97]",
        "[98] ",
        "[99]"};
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
        case 91:
            f091();
            break;
        case 92:
            f092();
            break;
        case 93:
            f093();
            break;
        case 94:
            f094();
            break;
        case 95:
            f095();
            break;
            // case 2:
            //     f092();
            //     break;

            // case 3:
            //     f093();
            //     break;

            // case 4:
            //     f094();
            //     break;
            // case 5:
            //     f095();
            //     break;
            // case 6:
            //     f096();
            //     break;
            // case 7:
            //     f097();
            //     break;
            // case 8:
            //     f098();
            //     break;
            // case 9:
            //     f099();
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
    float DPS;
    int ed, dps, as;
    int cc = 80, chd = 500, CHC, CHD;
    ed = 21;
    dps = 2100;
    as = 14;
    cout << "魯迪烏斯，在他的童年時期，他成爲了魔族魔法師洛琪希·米格路迪亞的學生\n";
    cout << "洛琪希·米格路迪亞:魯迪，試試冥想，發出魔法！！\n";
    cout << "魯迪：好，魔法攻擊！！！\n";
    cout << "按任意鍵繼續\n";
    getch();
    for (int i = 0; i < 6; i++)
    {
        DPS = (1 + ed / 100.0) * dps * (1 + as / 100.0);
        CHC = 1 + rand() % 101;
        cout << "第" << i + 1 << "次";
        if (CHC <= cc)
        {
            CHD = rand() % chd;
            DPS *= (1 + chd / 100.0);
            cout << "暴擊傷：" << setw(4) << CHD << "%，傷害：" << setw(8) << (int)DPS << endl;
        }
        else
        {
            cout << "無暴擊" << setw(4) << "  ，傷害" << setw(8) << (int)DPS << endl;
        }
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
    if(month==12&&day>=21){
        month=1;
        day=1;
    }
    if(day<signmonth[month-1]){
        cout<<sign[month-1];
    }else{
        cout<<sign[month];
    }
    cout<<endl;
    system("pause");
}