#define UP 0x48
#define DOWN 0x50
#define LEFT 0x4b
#define RIGHT 0x4d

#include "main.h"

int rank_im = 1000; // ���� ( �̺�Ʈ 2�� ����)
int money = 10000;
int month_see = 1; // �������� month
int month_nonesee = 0;

int plus_money = 0; // ����

int have_menu[] = { 1, 0, 0, 0, 0 };
int menu_count = 0; // ���� �޴�
int menu_today = 0; // ���� �޴� ������ ����?

string sale_menu[] = { "�Ƹ޸�ī��", "ī���", "�������ֽ�", "���ݸ���ũ", "�����" };
int sale_menu_price[] = { 2000, 2500, 3000, 4500, 5000 };

string employ[] = { "������", "������", "������", "�ȶǱ�", "����" };
int employ_plus[] = { 0, 2, 3, 4, 5 };
int employ_count = 0; // ���� ���� ������ �ִ� �������ε� ��� ����(�迭 �ε���)

int cout_length = 65;

int customer[] = { 5, 10, 15, 20 };

int today_menu_price = sale_menu_price[menu_count];

int event_buff = 1;

string loading[8] = { "��������" ,  "��������" ,  "��������" ,  "��������" ,  "��������" ,  "��������" ,  "��������" ,  "��������" };

int money_length() {
	int i = 1, num_len = 1;

	while (money >= i) {
		i *= 10;
		num_len++;
	}

	if (money == 0) num_len++;

	return cout_length - num_len;
}

int rank_im_length() {
	int i = 1, num_len = 1;

	while (rank_im >= i) {
		i *= 10;
		num_len++;
	}

	if (rank_im == 0) num_len++;

	return num_len;
}

int customer_num_length(int count) {
	int i = 1, num_len = 1;

	while (count >= i) {
		i *= 10;
		num_len++;
	}

	if (count == 0) num_len++;

	return num_len;
}

int all_sell_length(int price) {


	int sell_length = 0;

	if (price < 100000) {
		sell_length = 5;
	}
	else {
		sell_length = 6;
	}

	return sell_length;
}

void ending() {
	rank_im = 1000 - (money / 120);
	if (rank_im < 1) rank_im = 1;

	system("cls");
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "              ���� ��ũ" << rank_im << " ��                                 " << endl;
	cout << "              ���� �ں�" << money << "��                                    " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	system("pause");

	if (rank_im == 1) {
		system("cls");
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "            �̰ͺ��� �����! ���õ� ���� ī�䰡 TV�� ���Ծ��!              " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		system("pause");

		system("cls");
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		GRAY cout << "            �̰ͺ��� �����! ���õ� ���� ī�䰡 TV�� ���Ծ��!              " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		WHITE cout << "           ī�並 �������� ������ ������ ���� ���� 1�� ī���� ... " << endl;
		cout << "                      ���� �ʹ��ʹ� ���ݽ������� ...                      " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		system("pause");

		system("cls");
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		GRAY cout << "            �̰ͺ��� �����! ���õ� ���� ī�䰡 TV�� ���Ծ��!              " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "           ī�並 �������� ������ ������ ���� ���� 1�� ī���� ... " << endl;
		cout << "                      ���� �ʹ��ʹ� ���ݽ������� ...                      " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		WHITE cout << "                  " << cafe_name << "��(��) ����� ���������̾�! " << endl;
		cout << "                �����ε� �̴�θ� �� ��ϸ� ���� 1�� ī�䵵                    " << endl;
		cout << "                ���� �����Ŷ�� Ȯ���ؿ�! ����� �ְ�!                      " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;

		system("pause");


		system("cls");

		GRAY cout << "            �̰ͺ��� �����! ���õ� ���� ī�䰡 TV�� ���Ծ��!              " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "           ī�並 �������� ������ ������ ���� ���� 1�� ī���� ... " << endl;
		cout << "                      ���� �ʹ��ʹ� ���ݽ������� ...                      " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                  " << cafe_name << "��(��) ����� ���������̾�! " << endl;
		cout << "                �����ε� �̴�θ� �� ��ϸ� ���� 1�� ī�䵵                    " << endl;
		cout << "                ���� �����Ŷ�� Ȯ���ؿ�! ����� �ְ�!                      " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		WHITE cout << "                                                                            " << endl;
		cout << "              �������� 100%!  �� �����̿��� ( >0< )b             " << endl;
		cout << "            �׷� ���� �ؿ� �б��� ���ǰ� �ͼ� ���� ��������!                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;

		system("pause");
		exit(0);
	}

	else if (rank_im < 100) {
		system("cls");
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "         �̰ͺ��� �����!  ���� ī�䰡 100�� �ȿ� ������!              " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		system("pause");

		system("cls");
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		GRAY 		cout << "         �̰ͺ��� �����!  ���� ī�䰡 100�� �ȿ� ������!              " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		WHITE cout << "           1����� �� �ȳ��Ҵٴ°� �������׿�! " << endl;
		cout << "      ��ħ �ݹ� 2ȣ���� �ϰ� �ʹٴ� ī�信�� ������ �Ծ��!                     " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		system("pause");

		system("cls");
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		GRAY cout << "         �̰ͺ��� �����!  ���� ī�䰡 100�� �ȿ� ������!              " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "           1����� �� �ȳ��Ҵٴ°� �������׿�! " << endl;
		cout << "      ��ħ �ݹ� 2ȣ���� �ϰ� �ʹٴ� ī�信�� ������ �Ծ��!                     " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		WHITE cout << "       " << cafe_name << "��, ����Ե� ��� �����ε� �� ��Ź�����! " << endl;
		cout << "                  ������ 70%! ������������!           " << endl;
		cout << "          ������ �� ���� ī�並 ��������! (^_^)o    " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;

		system("pause");
		exit(0);
	}

	else if (rank_im < 500) {
		system("cls");
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "        �� ... ������ ī��� �ƴ����� ������ ������ ���� ������?            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		system("pause");

		system("cls");
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		GRAY 		cout << "        �� ... ������ ī��� �ƴ����� ������ ������ ���� ������?            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		WHITE cout << "               ���ݸ� �� ������ �� ¥�����??  " << endl;
		cout << "       �׷��� �ܰ� �մԵ��� ������ �ͼ� �������� �ʳ׿�!                     " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		system("pause");

		system("cls");
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		GRAY cout << "        �� ... ������ ī��� �ƴ����� ������ ������ ���� ������?            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "               ���ݸ� �� ������ �� ¥�����??  " << endl;
		cout << "       �׷��� �ܰ� �մԵ��� ������ �ͼ� �������� �ʳ׿�!                     " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		WHITE cout << "                " << cafe_name << "! ���� �������ſ���! " << endl;
		cout << "                  ������ 50%! �׳� �׷�����           " << endl;
		cout << "            ī�� ������ ���ݸ� �ٲ㺼���?? 'v'/    " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;

		system("pause");
		exit(0);
	}

	else {
		system("cls");
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                              ��~~~~~ ��~~~~~                               " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		system("pause");

		system("cls");
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		GRAY 		cout << "                              ��~~~~~ ��~~~~~                               " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		WHITE cout << "                     �ĸ��� �����׿� ... ������ 0...  " << endl;
		cout << "                   �� " << cafe_name << " ����ϰڽ��ϴ�(-_-)...                     " << endl;
		cout << "                                                                              " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		system("pause");

		exit(0);
	}

}

void sell() {
	for (int g = 0; g < 8; g++) {

		system("cls");

		cout << "���������������������������������������" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                           `                            ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                    `                                                   ��" << endl;
		cout << "��                                    `           `                       ��" << endl;
		cout << "��                                                                `       ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��           `               �Ǹ��� : " << loading[g] << "         `            ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                      `                              `                  ��" << endl;
		cout << "��                                      `                                 ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                 `                                      ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "���������������������������������������" << endl;

		Sleep(300);
		system("cls");

		cout << "���������������������������������������" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                           `                            ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                      `                                                 ��" << endl;
		cout << "��                                     `             `                    ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                   `       �Ǹ��� : " << loading[g] << "    `                 ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                    `                   `                               ��" << endl;
		cout << "��                                                 `         `            ��" << endl;
		cout << "��                             `                                          ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "���������������������������������������" << endl;

		Sleep(300);

	} // for��!
}

void sell_result() {

	int sell_result = ((customer[month_nonesee] + employ_plus[employ_count]) * today_menu_price) * event_buff;
	int customer_num = (customer[month_nonesee] + employ_plus[employ_count]);


	system("cls");
	cout << "���������������������������������������" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                            @ ������ ���� @                             ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                       �� �մ��� �� : " << customer_num << " ��"; cout.width(34 - customer_num_length(customer_num)); cout.fill(' '); cout << "��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                       ������ �޴� ���� : " << today_menu_price << "                          ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                       �� ���� :  " << sell_result; cout.width(40 - all_sell_length(sell_result)); cout.fill(' '); cout << "��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                      �ƹ� Ű�� ���� �Ѿ�ϴ�.                        ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "���������������������������������������" << endl;

	month_nonesee += 1;
	month_see += 3;
	event_buff = 1;
	money += sell_result;
	plus_money = sell_result;

	_getch();

	if (month_nonesee == 4) ending();

}

void event_1() {
	int answer;

	system("cls");
	cout << "���������������������������������������" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                       ** ������� ���� ���� **                         ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                     �츮 ī���� �̸��� �����ϱ��?                     ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                             1. ����ī��                                ��" << endl;
	cout << "��                             2. ����� ī��                             ��" << endl;
	cout << "��                             3. " << cafe_name;  cout.width(42 - cafe_name.length()); cout.fill(' '); cout << "��" << endl;
	cout << "��                             4. ������ ī��                             ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                            ���� �Է����ּ���!                          ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "��                                                                        ��" << endl;
	cout << "���������������������������������������" << endl;

	fflush(stdin);
	cout << "�� : ";
	cin >> answer;

	if (answer == 3) {
		int i = 0;
		while (i < 3) {
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
			cout << "��                            �����Դϴ�!                                 ��" << endl;
			cout << "��                .  ������ 1.5�踦 �� ��� �˴ϴ�   '                    ��" << endl;
			cout << "��                      ����� �ǸŸ� �����մϴ�                          ��" << endl;
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
			Sleep(400);

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
			cout << "��                            �����Դϴ�!                                 ��" << endl;
			cout << "��                '  ������ 1.5�踦 �� ��� �˴ϴ�                        ��" << endl;
			cout << "��                      ����� �ǸŸ� �����մϴ�      '                   ��" << endl;
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
			Sleep(400);
			i++;
		}
		event_buff = 1.5;
	}

	else {
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
		cout << "��                      _      -     -     -                              ��" << endl;
		cout << "��                -                              -                        ��" << endl;
		cout << "��                            �����Դϴ� ...          -                   ��" << endl;
		cout << "��                -  ���� �Ϻ��� ������� ���� �����̱���   -             ��" << endl;
		cout << "��                      ����� �ǸŸ� �����մϴ�                          ��" << endl;
		cout << "��                   -                             -                      ��" << endl;
		cout << "��                       -     -       -    -                             ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "���������������������������������������" << endl;

		Sleep(3000);
	}

}
void event_2() {

	int i = 0;
	while (i < 3) {
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
		cout << "��                .        [ ��ŷ 500�� �̻� ]                            ��" << endl;
		cout << "��                             ���ϼ���!!                                 ��" << endl;
		cout << "��                .   20,000���� ���ϱ��� �޾ҽ��ϴ�!   '                 ��" << endl;
		cout << "��                       ����� �ǸŸ� �����մϴ�                         ��" << endl;
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
		Sleep(400);

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
		cout << "��                '        [ ��ŷ 500�� �̻� ]                            ��" << endl;
		cout << "��                             ���ϼ���!!                                 ��" << endl;
		cout << "��                '   20,000���� ���ϱ��� �޾ҽ��ϴ�!                     ��" << endl;
		cout << "��                       ����� �ǸŸ� �����մϴ�      '                  ��" << endl;
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
		Sleep(400);
		i++;
	}


}

void sell_day() {
	if (month_nonesee == 1) event_1();
	else if (rank_im < 500) event_2();
	sell();
	sell_result();
}


void devel_menu() { // 2. �޴� ����
	menu_count++;
	today_menu_price = sale_menu_price[menu_count];
	int i = 0;
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
		cout << "��                   " + sale_menu[menu_count] + "�� ���׷��̵� �Ǿ����ϴ�!"; cout.width(30 - sale_menu[menu_count].length()); cout.fill(' '); cout << "��" << endl;
		cout << "��                .                                                       ��" << endl;
		cout << "��             " << sale_menu_price[menu_count] << " ���� �������� �޴��� �Ǹ��մϴ�!                      ��" << endl;
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
		cout << "��                   " + sale_menu[menu_count] + "�� ���׷��̵� �Ǿ����ϴ�!"; cout.width(30 - sale_menu[menu_count].length()); cout.fill(' '); cout << "��" << endl;
		cout << "��                .                                                       ��" << endl;
		cout << "��             " << sale_menu_price[menu_count] << " ���� �������� �޴��� �Ǹ��մϴ�!                      ��" << endl;
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

void employ_person() { // 3. ���� ���
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
	int month = 0;

	int i = 10;
	int menu_num = 0; // �޴� ������!!

	string menu_name[4] = { "1. �� ǰ �� ��", "2. �� �� �� ��", "3. �� �� �� ��", "4. �� �� �� ��" };
	string ischecked[4] = { "**************","","","" };

	string sysmsg = "���õ� ���� �Ϸ� �Ǽ���!";

	char key;

	while (true) {
		system("cls");

		rank_im = 1000 - (money / 120);

		if (rank_im < 1) rank_im = 1;

		cout << "���������������������������������������" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��"; cout.width(62); cout.fill(' ');  cout << " �濵 ���� "; YELLOW cout << month_see << " ���� "; ORIGINAL cout << "° ��" << endl;
		cout << "�� "; SKY_BLUE cout << "ī�� [ "; YELLOW cout << cafe_name; SKY_BLUE cout << " ]"; cout.width(64 - cafe_name.length()); cout.fill(' '); ORIGINAL  cout << "��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "�� "; SKY_BLUE cout << "���� [ "; YELLOW cout << user_name; SKY_BLUE cout << " ]"; cout.width(64 - user_name.length()); cout.fill(' '); ORIGINAL  cout << "��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "�� "; SKY_BLUE cout << "�ں� [ "; YELLOW cout << money; SKY_BLUE cout << " ]"; cout.width(money_length()); cout.fill(' '); ORIGINAL  cout << "��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��                                                                        ��" << endl;
		cout << "��"; cout.width(63); cout.fill(' ');  cout << " �츮 ī��� ���� ���� "; YELLOW; cout.width(8 - rank_im_length()); cout.fill(' '); cout << rank_im << " ��!"; ORIGINAL cout << " ��" << endl;
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
				sell_day();
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