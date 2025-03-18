#include<stdio.h>
#include "panel.h"
#include<stdlib.h>


int panel_origin() {
	system("cls");
	int choice;
	printf("*-- 欢迎使用ATM! --*\n");
	printf("* 1······登录*\n");
	printf("* 2······注册*\n");
	printf("*------------------*\n");
	printf("请输入对应数字选择: ");
    scanf_s("%d", &choice);
	return choice;
};

int panel_login(FunctionType_Check login) {
	system("cls");
	printf("*-- 欢迎使用ATM! --*\n");
	char cardID[19] = {};
	char password[16] = {};
	printf("请输入银行卡号: \n");
	scanf_s("%20s", cardID, 19);
	printf("请输入登录密码: \n");
	scanf_s("%17s", password, 16);

	if (login(cardID, password)) {
		printf("登录成功! ");
		system("pause");
		return 1;
	}
	else {
		printf("登录失败! ");
		system("pause");
		return 0;
	}
};
int panel_register() {
	system("cls");
	printf("*-- 欢迎使用ATM! --*\n");
	printf("注册 开发中...\n");
	system("pause");
	return 0;
};

int panel_menu() {
	system("cls");
	int choice;
	printf("*-- 欢迎使用ATM! --*\n");
	printf("* 1······存款*\n");
	printf("* 2······取款*\n");
	printf("* 3······转账*\n");
	printf("* 4····查询余额*\n");
	printf("* 5····用户中心*\n");
	printf("*------------------*\n");
	printf("请输入对应数字选择: ");
	scanf_s("%d", &choice);
	return choice;
};

int panel_user() {
	system("cls");
	int choice;
	printf("*-- 欢迎使用ATM! --*\n");
	printf("* 0······返回*\n");
	printf("*------------------*\n");
	printf("请输入对应数字选择: ");
	scanf_s("%d", &choice);
	return choice;
};