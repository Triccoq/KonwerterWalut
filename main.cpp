#include <iostream>
#include <string>
#include "Konwerter.h"

using namespace std;

void menu(void) {
    cout<<endl;
    cout << "0 - Exit" << endl;
    cout << "1 - Use Converter" << endl;
    cout << "Select an option: ";
}

int main() {
    CurrencyConverter converter;
    std::string fromCurrency, toCurrency;
    double amount;
    double convertedAmount;
    int option=0;
    do {
        menu();
        cin>>option;
        switch (option) {
            case 0:
                break;
            case 1:
                cout << "Available currencies: PLN, USD, EUR, GBP, BTC" << endl;

                // Pobranie waluty wejściowej
                cout << "Enter your input currency: "<<endl;
                cin >> fromCurrency;

                // Pobranie waluty wyjściowej
                cout << "Enter your output currency: "<<endl;
                cin >> toCurrency;

                // Pobranie kwoty
                cout << "Enter the amount: "<<endl;
                cin >> amount;

                convertedAmount = converter.convert(amount, fromCurrency, toCurrency);

                if (convertedAmount == 1) {
                    std::cout << "Nieobsługiwana waluta." << std::endl;
                } else {
                    std::cout << amount << " " << fromCurrency << " to " << convertedAmount << " " << toCurrency << std::endl;
                }
                break;
            default:
                std::cout << "Invalid option. Please choose again." << std::endl;
                break;
        }
    } while (option != 0);
    return 0;
}
