#include <iostream>
#include "get_code_of_number.h"

using namespace std;

void getCodeOfNumber(int code)
{
	if (code > 47 && code < 58)
	{
		cout << "��� ������ ������� " << code;
	}
	else 
	{
		cout << "������ �����.";
	}
}