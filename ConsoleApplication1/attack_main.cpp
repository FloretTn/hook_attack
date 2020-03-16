#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

#define WIDTH  45
#define HEIGHT 25

//设置画布大小
void init(void) {
	char cmd[128];
	sprintf_s(cmd, "mode con cols=%d lines=%d", WIDTH, HEIGHT);
	system(cmd);
}
//账号登陆实现
void login(void) {
	string name;
	string pwd;

	while (1) {
		system("cls");

		cout << "请输入账号:";
		cin >> name;
		cout << "请输入密码:";
		cin >> pwd;

		if (name == "54hk" && pwd == "123123") {
			break;
		}
		else {
			cout << "账号或密码输入错误请重新输入..." << endl;
			system("pause");
		}
	}
}

//功能菜单实现
void menu_print(void) {
	string menu[] = {
	"1-404攻击",
	"2-篡改攻击",
	"3-攻击记录查询",
	"4-网站攻击修复",
	"5-退出"
	};

	int max = 0;
	int menu_height = sizeof(menu) / sizeof(menu[0]);

	for (int i = 0; i < menu_height; i++) {
		if (menu[i].length() > max) {
			max = menu[i].length();
		}
	}

	int left_space = (WIDTH - max) / 2;
	
	for (int i = 0; i < menu_height; i++) {
		for (int j = 0; j < left_space; j++) {
			cout << " ";
		}
		cout << menu[i] << endl;
	}
}

//功能输入
int input_function(void) {
	int input = 0;
	
	while (1) {
		cin >> input;

		if (cin.fail()) {
			cin.clear();
			cin.sync();
			cout << "输入无效请重新输入..." << endl;
		}
		else {
			break;
		}
	}
	return input;
}

int main(void) {
	init();
	login();

	while (1) {
		menu_print();
		int input = input_function();

		switch (input) {
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			return 0;
		default:
			cout << "无效输入请重新输入..." << endl;
			system("pause");
			break;
		}
	}
	system("pause");
	return 0;
}