#define COL                   GetStdHandle(STD_OUTPUT_HANDLE)        // �ܼ�â�� �ڵ����� �ޱ�

// ** ��ä�� **
#define BLACK                SetConsoleTextAttribute(COL, 0x0000);        // ������
#define WHITE                SetConsoleTextAttribute(COL, 0x000f);        // ���
#define GRAY                 SetConsoleTextAttribute(COL, 0x0008);        // ȸ��
#define ORIGINAL            SetConsoleTextAttribute(COL, 0x0007);        // ���� ȸ�� (default)

// ** ���� ** 
#define RED                   SetConsoleTextAttribute(COL, 0x000c);        // ������
#define YELLOW             SetConsoleTextAttribute(COL, 0x000e);        // �����
#define DARK_BLUE         SetConsoleTextAttribute(COL, 0x0001);        // �Ķ���
#define GREEN                SetConsoleTextAttribute(COL, 0x0002);        // ���
#define BLUE_GREEN        SetConsoleTextAttribute(COL, 0x0003);        // û���
#define BLOOD               SetConsoleTextAttribute(COL, 0x0004);        // �˺�����
#define PURPLE               SetConsoleTextAttribute(COL, 0x0005);        // �����
#define GOLD                 SetConsoleTextAttribute(COL, 0x0006);        // �ݻ�
#define BLUE                  SetConsoleTextAttribute(COL, 0x0009);        // �Ķ���
#define HIGH_GREEN       SetConsoleTextAttribute(COL, 0x000a);        // ���λ�
#define SKY_BLUE           SetConsoleTextAttribute(COL, 0x000b);        // �ϴû�
#define PLUM                SetConsoleTextAttribute(COL, 0x000d);        // ���ֻ�

#include <iostream> // �����
#include <string> // string ����
#include <conio.h> // get ���
#include <windows.h> // sleep ���
#include <cstdlib> // ������ ���
#include <ctime> // ������ ���

using namespace std;

extern string cafe_name; // ī�� �̸�
extern string user_name; // ���� �̸�

extern int money; // �ں�

extern int month; // �濵 ���� �Ϸκ��� ���� ��

extern int rank; // �濵 ��ŷ(����)

extern int have_menu[]; // ������ �ִ� �޴�

void intro(); // ��Ʈ�� ȭ��
void init();  // ���� �� ī�� �̸� ����
void play(); // ���� ȭ��