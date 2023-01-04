#include <iostream>

using namespace std;

void f11();
void f111();
void f112();
void f113();
void f114();
void f115();
void f116();
void f117();
void f118();
void f119();
void f1110();
void f1111();
void f11()
{
	string menuItem[] = {
		"[1] 我愛 fubuki",
		"[2] 計程車車資",
		"[3] 數列",
		"[4] 解二元一次方程式",
		"[5] 質數",
		"[6] 3的倍數",
		"[7] 箭頭",
		"[8] 我愛東東",
		"[9] 繞口令",
		"[10] 邏輯閘",
		"[11] ",
	};
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
			f111();
			break;
		case 2:
			f112();
			break;
		case 3:
			f113();
			break;
		case 4:
			f114();
			break;
		case 5:
			f115();
			break;
		case 6:
			f116();
			break;
		case 7:
			f117();
			break;
		case 8:
			f118();
			break;
		case 9:
			f119();
			break;
		case 10:
			f1110();
			break;
		case 11:
			f1111();
			break;
		}

		cout << "\n";
		selMenu = 0;
	}
}
void f111()
{
	int f_cl, f_tu, f_sh;
	int b_cl, b_tu, b_sh;

	cout << "-----------------------------" << endl;
	cout << "請輸入 fubuki 的點擊數";
	cin >> f_cl;
	cout << "請輸入 fubuki 的按讚數";
	cin >> f_tu;
	cout << "請輸入 fubuki 的分享數";
	cin >> f_sh;
	cout << "-----------------------------" << endl;
	cout << "請輸入 絆愛 的點擊數";
	cin >> b_cl;
	cout << "請輸入 絆愛 的按讚數";
	cin >> b_tu;
	cout << "請輸入 絆愛 的分享數";
	cin >> b_sh;

	cout << "姓名\t點擊\t按讚\t分享\t總分\t平均\n";
	cout << "fubuki\t" << f_cl << "\t" << f_tu << "\t" << f_sh << "\t" << f_cl + f_tu + f_sh << "\t" << (f_cl + f_tu + f_sh) / 3 << endl;
	cout << "絆愛\t" << b_cl << "\t" << b_tu << "\t" << b_sh << "\t" << b_cl + b_tu + b_sh << "\t" << (b_cl + b_tu + b_sh) / 3 << endl;
	cout << "平均\t" << (f_cl + b_cl) / 2 << "\t" << (f_tu + b_tu) / 2 << "\t" << (f_sh + b_sh) / 2 << "\t" << ((f_cl + f_tu + f_sh) + (b_cl + b_tu + b_sh)) / 2 << "\t" << ((b_cl + b_tu + b_sh) / 3 + (b_cl + b_tu + b_sh) / 3) / 2 << endl;
	system("pause");
}
void f112()
{
	int d = 0;
	int price = 85;
	cout << "輸入乘坐計程車里程（公尺）：";
	cin >> d;
	if (d > 1500)
	{
		d -= 1500;
		price += (d / 200) * 5;
		if (d % 200)
		{
			price += 5;
		}
	}
	cout << "總共車資為：" << price << "元" << endl;
	system("pause");
}
void f113()
{
	for (int i = 1; i <= 9; i++)
	{
		cout << i << "\t";
	}
	cout << endl;

	for (int i = 9; i >= 1; i--)
	{
		cout << i << "\t";
	}
	cout << endl;

	for (int i = 0; i < 9; i++)
	{
		cout << 1 + 3 * i << "\t";
	}
	cout << endl;

	for (int i = 9; i >= 1; i--)
	{
		cout << 3 * i << "\t";
	}
	cout << endl;

	for (int i = 1; i <= 9; i++)
	{
		cout << 9 * i << "\t";
	}
	cout << endl;

	system("pause");
}
void f114()
{
	int a, b, p;
	int c, d, q;
	cout << "請輸a b p：";
	cin >> a >> b >> p;
	cout << "請輸c d q：";
	cin >> c >> d >> q;

	cout << a << "x+" << b << "y=" << p << endl;
	cout << c << "x+" << d << "y=" << q << endl;

	cout << "x=" << (d * p - b * q) / (a * d - b * c) << endl;
	cout << "y=" << (c * p - a * q) / (b * c - a * d) << endl;

	system("pause");
}
void f115()
{
	int n;
	bool zhishu = 1;
	cout << "n=";
	cin >> n;

	for (int i = 3; i <= n; i++)
	{
		zhishu = 1;
		for (int j = 3; j < i; j++)
		{
			if (!(i % j))
			{
				//				cout<<i<<"/"<<j<<endl;
				zhishu = 0;
				break;
			}
		}
		if (zhishu && i != 1 && i != 2 && i != 4)
		{
			cout << i << " ";
		}
	}

	system("pause");
}

void f116()
{
	int input, num = 0, count = 0;
	int nums[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	for (int i = 0; i < 10; i++)
	{
		cout << "請輸入第 " << i + 1 << " 個整數：";
		input = 0;
		cin >> nums[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if (nums[i] % 3 == 0)
		{
			count++;
			num += nums[i];
		}
	}
	cout << "3 的倍數有 " << count << " 個" << endl;
	cout << "總和為 " << num << endl;
	system("pause");
}
void f117()
{
	int a;
	cout << "請輸入a：";
	cin >> a;
	for (int i = 0; i <= a; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 0; i <= a; i++)
	{
		for (int j = 0; j <= a - i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	//	cout<<"*"<<endl;
	system("pause");
}
void f118()
{
	int r1, r2, r3;
	cout << "請輸入電阻R1 R2 R3 ";
	cin >> r1 >> r2 >> r3;
	int sum = r1 + r2 + r3;
	cout << "電阻Ra：" << r1 * r2 / sum << endl;
	cout << "電阻Rb：" << r2 * r3 / sum << endl;
	cout << "電阻Rc：" << r1 * r3 / sum << endl;

	system("pause");
}
void f119()
{
	string texts[] = {
		"星期一，猴子穿新衣",
		"星期二，猴子肚子餓",
		"星期三，猴子去爬山",
		"星期四，猴子看電視",
		"星期五，猴子去跳舞",
		"星期六，猴子去斗六",
		"星期日，猴子過生日"};

	int n;
	cout << "請輸入星期：";
	cin >> n;
	cout << "今天" << texts[n - 1] << endl;
	system("pause");
}
void f1110()
{
	int n;
	cout << "請輸入邏輯閘數目：";
	cin >> n;
	switch (n)
	{
	case 0 ... 12:
		cout << "SSI";
		break;
	case 13 ... 100:
		cout << "MSI";
		break;
	case 101 ... 1000:
		cout << "LSI";
		break;
	case 1001 ... 10000:
		cout << "VLSI";
		break;
	}
	if (n > 10000)
	{
		cout << "ULSI";
	}
	cout << endl;

	system("pause");
}
void f1111()
{
	system("pause");
}
