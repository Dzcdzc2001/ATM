#ifndef PANEL_H
#define PANEL_H

// ͷ�ļ�����
int panel_origin();

typedef int (*FunctionType_Check)(char account[], char password[]);
int panel_login(FunctionType_Check login);

int panel_register();

int panel_menu();

int panel_user();
#endif // PANEL_H

