#include <iostream>
#include "choose.h"

using namespace std;

void swich(int code, int code1,int n)
{
	switch (n)
	{
	case 1:
		if (code > 64 && code < 91 && code1 > 96 && code1 < 123)
		{
			cout << "������� ����� ��������� � �������� ����� ���������� �������� � ASCII = " << code1 - code;
		}
		else {
			cout << "������ �����";
		}
		break;
	case 2:
		if (code > 191 && code < 224 && code1 > 223 && code1 <= 255)
			cout << "������� ����� ��������� � �������� ����� �������� �������� � Windows1251 = " << code1 - code;
		else {
			cout << "������ �����";
		}
		break;
	case 3:
		if (code > 47 && code < 58)
		{
			cout << "��� ������ ������� " << code;
		}
		else {
			cout << "������ �����";
		}
		break;
	}
}
