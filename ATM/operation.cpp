#include "operation.h"
#include "panel.h"
#include<stdio.h>
#include<stdlib.h>

int loginCheck(char account[], char password[]) {
	return 1;
};

int loaded() {
	if (panel_origin() == 1) {
		if (panel_login(loginCheck)) {
			unsigned int flag = 1;
			while (flag) {
				//flag = 0;
				switch (panel_menu())
				{
				case 1:
					printf("��� ������...\n");
					system("pause");
					break;
				case 2:
					printf("ȡ�� ������...\n");
					system("pause");
					break;
				case 3:
					printf("ת�� ������...\n");
					system("pause");
					break;
				case 4:
					printf("��ѯ��� ������...\n");
					system("pause");
					break;
				case 5:
					if (panel_user()) {
						//flag = 1;
					}
					else {
						//flag = 1;
					}
					break;
				default:
					printf("��Ч����\n");
					flag = 1;
					break;
				}
			}
		}
		else {
			loaded();
		}
	}
	else if (panel_origin() == 2) {
		if (panel_register()) {
			loaded();
		}
		else {
			loaded();
		}
	}
	else {
		printf("������� ����������");
		loaded();
	}
	return 0;
};

int saver() {

	return 0;
};

int unloaded() {

	return 0;
};