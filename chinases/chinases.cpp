#include <iostream>
#include <string>
using namespace std;

double balance = 1000.0;

void withdrawMoney() {
    double amount;
    cout << "Введіть суму для зняття: ";
    cin >> amount;

    if (amount > balance) {
        cout << "Недостатньо коштів на рахунку!" << endl;
    }
    else {
        balance -= amount;
        cout << "Операція успішна. Залишок на рахунку: " << balance << " грн" << endl;
    }
}

void checkBalance() {
    cout << "Ваш поточний баланс: " << balance << " грн" << endl;
}

int main() {
    string correctPin = "1234"; 
    string enteredPin;
    int attempts = 0; 
    bool isAuthenticated = false;

    while (attempts < 3 && !isAuthenticated) {
        cout << "Введіть PIN-код: ";
        cin >> enteredPin;

        if (enteredPin == correctPin) {
            isAuthenticated = true;
        }
        else {
            attempts++;
            cout << "Неправильний PIN-код. Залишилось спроб: " << 3 - attempts << endl;
        }
    }

    if (!isAuthenticated) {
        cout << "Ваш доступ заблоковано!" << endl;
        return 0;
    }

    int choice;
    do {
        cout << "\n--- Меню банкомата ---\n";
        cout << "1. Переглянути баланс\n";
        cout << "2. Зняти гроші\n";
        cout << "3. Завершити роботу\n";
        cout << "Виберіть дію: ";
        cin >> choice;

        switch (choice) {
        case 1:
            checkBalance();
            break;
        case 2:
            withdrawMoney();
            break;
        case 3:
            cout << "Дякуємо за користування банкоматом. Гарного дня!" << endl;
            break;
        default:
            cout << "Неправильний вибір. Спробуйте ще раз." << endl;
        }
    } while (choice != 3);

    return 0;

    bool checkLibraryCard() {
        string cardNumber;
        cout << "Введіть номер читацького квитка: ";
        cin >> cardNumber;
    }
        if (cardNumber == "12345") {
            cout << "Квиток перевірено успішно!\n";
            return true;
        }
        else {
            cout << "Невірний номер квитка!\n";
            return false;
        }
    }