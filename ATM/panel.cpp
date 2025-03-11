#include<stdio.h>
#include "panel.h"
#include<stdlib.h>


int panel_origin() {
	int choice = 0;
	printf("*-- 欢迎使用ATM! --*\n");
	printf("* 1······登录*\n");
	printf("* 2······注册*\n");
	printf("*------------------*\n");
	scanf_s("请输入对应数字选择: %d", &choice);
	return choice;
};

typedef bool (*FunctionType_Check)(char account[], char password[]);
int panel_login(FunctionType_Check login) {
	char cardID[19] = {};
	char password[16] = {};
	scanf_s("请输入银行卡号%20s", cardID, 19);
	scanf_s("请输入登录密码%17s", password, 16);

	if (login(cardID, password)) {
		printf("登录成功 继续...\n");
		system("pause");
		system("cls");
		panel_menu();
	}
	else {
		printf("登录失败 继续...\n");
		system("pause");
		system("cls");
		panel_origin();
	}
	return 0;
};

int panel_menu() {
	int choice;
	printf("1. 存款\n");
	printf("2. 取款\n");
	printf("3. 转账\n");
	printf("4. 查询余额\n");
	printf("5. 用户中心\n");
	scanf_s("请输入对应数字选择: %d", &choice);
	/*switch (choice) {
	case 1:
		printf("存款\n");
		break;
	case 2:
		printf("取款\n");
		break;
	case 3:
		printf("转账\n");
		break;
	case 4:
		printf("查询余额\n");
		break;
	case 5:
		printf("用户中心\n");
		break;
	default:
		printf("无效输入\n");
		break;
	}*/
	return choice;
};

int panel_user() {
	int choice;
	printf("Please enter your account number: ");
	return choice;
};