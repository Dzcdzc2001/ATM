#include<stdio.h>
#include "panel.h"
#include<stdlib.h>


int panel_origin() {
	int choice = 0;
	printf("*-- ��ӭʹ��ATM! --*\n");
	printf("* 1��������������¼*\n");
	printf("* 2������������ע��*\n");
	printf("*------------------*\n");
	scanf_s("�������Ӧ����ѡ��: %d", &choice);
	return choice;
};

typedef bool (*FunctionType_Check)(char account[], char password[]);
int panel_login(FunctionType_Check login) {
	char cardID[19] = {};
	char password[16] = {};
	scanf_s("���������п���%20s", cardID, 19);
	scanf_s("�������¼����%17s", password, 16);

	if (login(cardID, password)) {
		printf("��¼�ɹ� ����...\n");
		system("pause");
		system("cls");
		panel_menu();
	}
	else {
		printf("��¼ʧ�� ����...\n");
		system("pause");
		system("cls");
		panel_origin();
	}
	return 0;
};

int panel_menu() {
	int choice;
	printf("1. ���\n");
	printf("2. ȡ��\n");
	printf("3. ת��\n");
	printf("4. ��ѯ���\n");
	printf("5. �û�����\n");
	scanf_s("�������Ӧ����ѡ��: %d", &choice);
	/*switch (choice) {
	case 1:
		printf("���\n");
		break;
	case 2:
		printf("ȡ��\n");
		break;
	case 3:
		printf("ת��\n");
		break;
	case 4:
		printf("��ѯ���\n");
		break;
	case 5:
		printf("�û�����\n");
		break;
	default:
		printf("��Ч����\n");
		break;
	}*/
	return choice;
};

int panel_user() {
	int choice;
	printf("Please enter your account number: ");
	return choice;
};