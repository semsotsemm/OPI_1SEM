#include <iostream>
#include <windows.h>
#include "get_digit_english_code.h"
#include "get_digit_russian_code.h"
#include "get_code_of_number.h"
#include "exit_from_program.h"

using namespace std;

int main() {

    setlocale(LC_CTYPE, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int userInput = 0;
    int capitalCode = 0, lowerCode = 0, difference = 0;
    unsigned char symbol = 0;

    do {
        cout << "\n������� ����� �������� ������ ���������:\n"
            << "1 � ����������� ������� �������� ����� � ASCII ����� � ��������� � �������� ���������, "
            << "���� ������ ������ ���������� ��������, ����� ����� ��������� �� ������;\n"
            << "2 � ����������� ������� �������� ����� � Windows - 1251 ����� � ��������� � �������� ���������, "
            << "���� ������ ������ �������� ��������, ����� ����� ��������� �� ������;\n"
            << "3 � ����� � ������� ���� �������, ���������������� ��������� �����, ����� ����� ��������� �� ������;\n"
            << "4 � ����� �� ���������." << endl;

        cin >> userInput;

        if (userInput == 3) {
            cout << "������� �����: ";
            cin >> symbol;
            capitalCode = symbol;
        }

        if (userInput > 0 && userInput < 3) {
            cout << "������� ������: ";
            cin >> symbol;
            if (userInput !=3 && !(symbol >=48 && symbol <= 57))
            {
                lowerCode = symbol;
            }
            else
            {
                cout << "������ �����\n";
                continue;
            }
            if ((userInput == 1 && lowerCode >= 'a' && lowerCode <= 'z') || (userInput == 2 && ((lowerCode >= 224 && lowerCode <= 255) || (lowerCode == 184))))
            {
                capitalCode = toupper(lowerCode);
                difference = lowerCode - capitalCode;
            }
            else if ((userInput == 1 && lowerCode >= 'A' && lowerCode <= 'Z') || (userInput == 2 && ((lowerCode >= 192 && lowerCode <= 223) || (lowerCode == 168))))
            {
                capitalCode = tolower(lowerCode);
                difference = capitalCode - lowerCode;
            }
        }

        switch (userInput) 
        {
        case 1:
            getDigitEnglishCode(capitalCode, difference);
            break;
        case 2:
            getDigitRussianCode(capitalCode, difference);
            break;
        case 3:
            getCodeOfNumber(capitalCode);
            break;
        case 4:
            exitFromProgram();
            break;
        default:
            cout << "������������ ����� ��������." << endl;
            break;
        }
    } while (userInput != 4);

    return 0;
}