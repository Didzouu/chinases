#include <iostream>
#include <string>
using namespace std;

double balance = 1000.0;

void withdrawMoney() {
    double amount;
    cout << "������ ���� ��� ������: ";
    cin >> amount;

    if (amount > balance) {
        cout << "����������� ����� �� �������!" << endl;
    }
    else {
        balance -= amount;
        cout << "�������� ������. ������� �� �������: " << balance << " ���" << endl;
    }
}

void checkBalance() {
    cout << "��� �������� ������: " << balance << " ���" << endl;
}

int main() {
    string correctPin = "1234"; 
    string enteredPin;
    int attempts = 0; 
    bool isAuthenticated = false;

    while (attempts < 3 && !isAuthenticated) {
        cout << "������ PIN-���: ";
        cin >> enteredPin;

        if (enteredPin == correctPin) {
            isAuthenticated = true;
        }
        else {
            attempts++;
            cout << "������������ PIN-���. ���������� �����: " << 3 - attempts << endl;
        }
    }

    if (!isAuthenticated) {
        cout << "��� ������ �����������!" << endl;
        return 0;
    }

    int choice;
    do {
        cout << "\n--- ���� ��������� ---\n";
        cout << "1. ����������� ������\n";
        cout << "2. ����� �����\n";
        cout << "3. ��������� ������\n";
        cout << "������� ��: ";
        cin >> choice;

        switch (choice) {
        case 1:
            checkBalance();
            break;
        case 2:
            withdrawMoney();
            break;
        case 3:
            cout << "������ �� ������������ ����������. ������� ���!" << endl;
            break;
        default:
            cout << "������������ ����. ��������� �� ���." << endl;
        }
    } while (choice != 3);

    return 0;

    bool checkLibraryCard() {
        string cardNumber;
        cout << "������ ����� ���������� ������: ";
        cin >> cardNumber;
    }
        if (cardNumber == "12345") {
            cout << "������ ��������� ������!\n";
            return true;
        }
        else {
            cout << "������� ����� ������!\n";
            return false;
        }
    }