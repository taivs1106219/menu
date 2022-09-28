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

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
string menuItem[]= {
		"[1]f01",
		"[2]",
		"[3]",
		"[4]",
		"[5]",
		"[6]",
		"[7]",
		"[8]",
		"[9]"
	};
	int i,num;
	int selMenu=99;
	while(selMenu!=0) {
		system("chcp 950");
		system("cls");
		cout<<"資訊一乙 OO 李OO\n";
		cout<<"-----------------------------"<<endl;
		int arrLength=sizeof(menuItem)/sizeof(menuItem[1]);
		for(i=0; i<arrLength; i++) {
			cout<<menuItem[i]<<endl;
		}
		cout<<"請輸入：";
		cin>>selMenu;
		switch(selMenu) {
			case 1:
				f01();
				break;
			case 2:
				f02();
				break;
			
		}
		cout<<"\n";
		system("pause");
	}
}

void f01() {
	cout << "f01";
} 

void f02() {
	cout << "f02";
} 

