#include<stdio.h>
#include "panel.h"
#include<stdlib.h>


int panel_origin() {
	system("cls");
	int choice;
	printf("*-- ��ӭʹ��ATM! --*\n");
	printf("* 1��������������¼*\n");
	printf("* 2������������ע��*\n");
	printf("*------------------*\n");
	printf("�������Ӧ����ѡ��: ");
    scanf_s("%d", &choice);
	return choice;
};

int panel_login(FunctionType_Check login) {
	system("cls");
	printf("*-- ��ӭʹ��ATM! --*\n");
	char cardID[19] = {};
	char password[16] = {};
	printf("���������п���: \n");
	scanf_s("%20s", cardID, 19);
	printf("�������¼����: \n");
	scanf_s("%17s", password, 16);

	if (login(cardID, password)) {
		printf("��¼�ɹ�! ");
		system("pause");
		return 1;
	}
	else {
		printf("��¼ʧ��! ");
		system("pause");
		return 0;
	}
};
int panel_register() {
	system("cls");
	printf("*-- ��ӭʹ��ATM! --*\n");
	printf("ע�� ������...\n");
	system("pause");
	return 0;
};

int panel_menu() {
	system("cls");
	int choice;
	printf("*-- ��ӭʹ��ATM! --*\n");
	printf("* 1���������������*\n");
	printf("* 2������������ȡ��*\n");
	printf("* 3������������ת��*\n");
	printf("* 4����������ѯ���*\n");
	printf("* 5���������û�����*\n");
	printf("*------------------*\n");
	printf("�������Ӧ����ѡ��: ");
	scanf_s("%d", &choice);
	return choice;
};

int panel_user() {
	system("cls");
	int choice;
	printf("*-- ��ӭʹ��ATM! --*\n");
	printf("* 0����������������*\n");
	printf("*------------------*\n");
	printf("�������Ӧ����ѡ��: ");
	scanf_s("%d", &choice);
	return choice;
};