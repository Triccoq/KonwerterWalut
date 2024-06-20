#include "Konwerter.h"

CurrencyConverter::CurrencyConverter() {
    setupRates();
}

void CurrencyConverter::setupRates() {
    rates["USD"] = {4.10, 1 / 4.10};
    rates["EUR"] = {4.50, 1 / 4.50};
    rates["GBP"] = {5.30, 1 / 5.30};
    rates["BTC"] = {100000.00, 1 / 100000.00};
    rates["PLN"] = {1.00, 1.00};
}

double CurrencyConverter::convert(double amount, const std::string& fromCurrency, const std::string& toCurrency) {
    if (rates.find(fromCurrency) == rates.end() || rates.find(toCurrency) == rates.end()) {
        return 1; // nieobsługiwana waluta
    }

    // Konwersja kwoty do PLN
    double amountInPLN = amount * rates[fromCurrency].toPLN;

    // Konwersja kwoty z PLN do waluty docelowej
    double convertedAmount = amountInPLN * rates[toCurrency].fromPLN;

    return convertedAmount;
}
