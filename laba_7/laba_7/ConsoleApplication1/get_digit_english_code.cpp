#include <iostream>
#include "get_digit_english_code.h"

using namespace std;

void getDigitEnglishCode(int code,int difference)
{
	if ((code >= 65 && code <= 90) || (code >= 97 && code <= 122))
	{
		cout << "������� ����� ��������� � �������� ����� ���������� �������� � ASCII = " << difference;
	}
	else 
	{
		cout << "������ �����.";
	}
}