#define UP 0x48
#define DOWN 0x50
#define LEFT 0x4b
#define RIGHT 0x4d

#include "main.h"

int money = 100000;
int month;

int have_menu[] = { 1, 0, 0, 0, 0 };
int menu_count = 0;
int menu_today = 0; // ���� �޴� ������ ����?

int employ_count = 0; // ���� ���� ������ �ִ� �������ε� ��� ����(�迭 �ε���)


string today_menu = "";
int today_menu_price = 0;

int money_length() {
	int i = 1, num_len = 0;

	while (money > i) {
		i *= 10;
		num_len++;
	}

	return num_len;
}

void devel_menu() { // 2. �޴� ����
	string sale_menu[] = { "�Ƹ޸�ī��", "ī���", "�������ֽ�", "���ݸ���ũ", "�����" };
	int sale_menu_price[] = { 2000, 2500, 3000, 4500, 5000 };
	int my_num = -1;

	while (true) { // ���� �޴� ���� ����
		srand((unsigned int)time(NULL));
		my_num = rand() % 5;

		if (have_menu[my_num] == 0) {
			have_menu[my_num] = 1;
			break;
		}
	}

	menu_today = 1;
	int i = 0;
	while(i < 6) {
		system("cls");
		cout << "���������������������������������������" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                         '     '     '                                  ��" << endl;
		cout << "��                    '                     '                             ��" << endl;
		cout << "��                                             '                          ��" << endl;
		cout << "��                .                                                       ��" << endl;
		cout << "��                   " + sale_menu[my_num] + "��(��) ���ߵǾ����ϴ�!"; cout.width(33 - sale_menu[my_num].length()); cout.fill(' '); cout << "��" << endl;
		cout << "��                .                                                       ��" << endl;
		cout << "��                                               .                        ��" << endl;
		cout << "��                                             .                          ��" << endl;
		cout << "��                                             .                          ��" << endl;
		cout << "��                       .     .       .    .                             ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "���������������������������������������" << endl;
		Sleep(100);

		system("cls");
		cout << "���������������������������������������" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                         .     .     .                                  ��" << endl;
		cout << "��                    .                     .                             ��" << endl;
		cout << "��                                             .                          ��" << endl;
		cout << "��                '                                                       ��" << endl;
		cout << "��                   " + sale_menu[my_num] + "��(��) ���ߵǾ����ϴ�!"; cout.width(33 - sale_menu[my_num].length()); cout.fill(' '); cout << "��" << endl;
		cout << "��                '                                                       ��" << endl;
		cout << "��                                               '                        ��" << endl;
		cout << "��                                             .                          ��" << endl;
		cout << "��                                             '                          ��" << endl;
		cout << "��                       '     '       '    '                             ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "���������������������������������������" << endl;
		Sleep(100);
		i++;
	}
	menu_count++;
}

void employ_person() { // 3. ���� ���
	string employ[] = { "������", "������", "������", "�ȶǱ�", "����" };
	int employ_plus[] = { 0, 2, 3, 4, 5 };

	int i = 0;

	employ_count++;
	while (i < 6) {
		system("cls");
		cout << "���������������������������������������" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                         '     '     '                                  ��" << endl;
		cout << "��                    '                     '                             ��" << endl;
		cout << "��                                             '                          ��" << endl;
		cout << "��                .                                                       ��" << endl;
		cout << "��                   " + employ[employ_count] + "��(��) ä��Ǿ����ϴ�!"; cout.width(33 - employ[employ_count].length()); cout.fill(' '); cout << "��" << endl;
		cout << "��                .                                                       ��" << endl;
		cout << "��             " << employ_plus[employ_count] << " ���� ����� �޴��� �߰��� �����մϴ�!                    ��" << endl;
		cout << "��                                             .                          ��" << endl;
		cout << "��                                             .                          ��" << endl;
		cout << "��                       .     .       .    .                             ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "���������������������������������������" << endl;
		Sleep(100);
		system("cls");
		cout << "���������������������������������������" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                         .     .     .                                  ��" << endl;
		cout << "��                    .                     .                             ��" << endl;
		cout << "��                                             .                          ��" << endl;
		cout << "��                '                                                       ��" << endl;
		cout << "��                   " + employ[employ_count] + "��(��) ä��Ǿ����ϴ�!"; cout.width(33 - employ[employ_count].length()); cout.fill(' '); cout << "��" << endl;
		cout << "��                .                                                       ��" << endl;
		cout << "��             " << employ_plus[employ_count] << " ���� ����� �޴��� �߰��� �����մϴ�!                    ��" << endl;
		cout << "��                                             .                          ��" << endl;
		cout << "��                                             '                          ��" << endl;
		cout << "��                       '     '       '    '                             ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "���������������������������������������" << endl;
		Sleep(100);
		i++;
	}
}

void pausing() { // 4. �Ͻ�����
	char key;

	while (1)
	{
		system("cls");
		cout << "���������������������������������������" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                   - �� * �� * �� * �� * �� * �� -                      ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                      �ƹ� Ű�� ���� �����մϴ�                         ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "���������������������������������������" << endl;
		Sleep(100);
		key = _getch();
		if (key > 0)
			break;
	}
}

void play() { // �߰� ���� ������ �� ���� �з��� ����!
	month = 0;
	int rank = 1000; // ����
	int i = 10;
	int menu_num = 0; // �޴� ������!!

	string menu_name[4] = { "1. �� ǰ �� ��", "2. �� �� �� ��", "3. �� �� �� ��", "4. �� �� �� ��" };
	string ischecked[4] = { "**************","","","" };

	string sysmsg = "���õ� ���� �Ϸ� �Ǽ���!";

	char key;

	string sale_menu[] = { "�Ƹ޸�ī��", "ī���", "�������ֽ�", "���ݸ���", "�����" };
	int sale_menu_price[] = { 2000, 2500, 3000, 4500, 5000 };

	string employ[] = { "������", "������", "������", "�ȶǱ�", "����" };
	int employ_plus[] = { 0, 2, 3, 4, 5 };
	int employ_count = 0;

	while (true) {
		system("cls");

		cout << "���������������������������������������" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��"; cout.width(62); cout.fill(' ');  cout << " �濵 ���� "; YELLOW cout << month << " ���� "; ORIGINAL cout << "° ��" << endl;
		cout << "�� "; SKY_BLUE cout << "ī�� [ "; YELLOW cout << cafe_name; SKY_BLUE cout << " ]"; cout.width(64 - cafe_name.length()); cout.fill(' '); ORIGINAL  cout << "��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "�� "; SKY_BLUE cout << "���� [ "; YELLOW cout << user_name; SKY_BLUE cout << " ]"; cout.width(64 - user_name.length()); cout.fill(' '); ORIGINAL  cout << "��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "�� "; SKY_BLUE cout << "�ں� [ "; YELLOW cout << money; SKY_BLUE cout << " ]"; cout.width(63 - money_length()); cout.fill(' '); ORIGINAL  cout << "��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��"; cout.width(63); cout.fill(' ');  cout << " �츮 ī��� ���� ���� "; YELLOW cout << rank;  ORIGINAL cout << " ��! ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��"; cout.width(43); cout.fill(' ');  GOLD cout << "system : " << sysmsg << " "; cout.width(30 - sysmsg.length()); cout.fill(' '); ORIGINAL cout << "��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "���������������������������������������" << endl;
		cout << "��                                   ��                                   ��" << endl;

		if (menu_num == 0) {
			ischecked[0] = "**************";
			ischecked[1] = "              ";
			ischecked[2] = "              ";
			ischecked[3] = "              ";
		}
		else if (menu_num == 1) {
			ischecked[0] = "              ";
			ischecked[1] = "**************";
			ischecked[2] = "              ";
			ischecked[3] = "              ";
		}
		else if (menu_num == 2) {
			ischecked[0] = "              ";
			ischecked[1] = "              ";
			ischecked[2] = "**************";
			ischecked[3] = "              ";
		}
		else if (menu_num == 3) {
			ischecked[0] = "              ";
			ischecked[1] = "              ";
			ischecked[2] = "              ";
			ischecked[3] = "**************";
		}

		cout << "��          "; cout << menu_name[0] << "           ��          " << menu_name[1] << "           ��" << endl; // 1.2�� �޴� �̸�
		cout << "��          "; cout << ischecked[0] << "           ��          " << ischecked[1] << "           ��" << endl; // 1.2�� üũ ����
		cout << "��                                   ��                                   ��" << endl;
		cout << "���������������������������������������" << endl;
		cout << "��                                   ��                                   ��" << endl;
		cout << "��          "; cout << menu_name[2] << "           ��          " << menu_name[3] << "           ��" << endl;
		cout << "��          "; cout << ischecked[2] << "           ��          " << ischecked[3] << "           ��" << endl;
		cout << "��                                   ��                                   ��" << endl;
		cout << "���������������������������������������" << endl;

		key = _getch();

		if (key == -32) { // ����Ű �Է��ΰ�?
			key = _getch();

			switch (key) {
			case UP:
			case DOWN:
				if (menu_num == 0 || menu_num == 1) menu_num += 2;
				else menu_num -= 2;
				break;
			case RIGHT:
				if (menu_num == 3) menu_num = 0;
				else menu_num++;
				break;
			case LEFT:
				if (menu_num == 0) menu_num = 3;
				else menu_num--;
				break;
			default:
				break;
			}
		}
		else if (key == 0xd)
		{
			if (menu_num == 0) {
				sysmsg = "0��";
			}
			else if (menu_num == 1) { // �޴� ����
				if (money < 10000) sysmsg = "�ں��� �����մϴ�!";
				else if (menu_count == 4) sysmsg = "������ �޴��� �����ϴ�!";
				else if (menu_today == 1) sysmsg = "��ȸ�� �̹� ����Ͽ����ϴ�!";
				else {
					devel_menu();
					money -= 10000;
				}
			}
			else if (menu_num == 2) { // ���� ����
				if (money < 30000) sysmsg = "�ں��� �����մϴ�!";
				else if (employ_count == 4) sysmsg = "����� ������ �����ϴ�!";
				else {
					employ_person();
					money -= 30000;
				}
			}
			else if (menu_num == 3) { // �Ͻ� ����
				pausing();
				sysmsg = "���õ� ���� �Ϸ� �Ǽ���!";
			}

		}
	}

}