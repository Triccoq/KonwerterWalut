#ifndef CURRENCY_CONVERTER_H
#define CURRENCY_CONVERTER_H

#include <map>
#include <string>

struct ExchangeRates {
    double toPLN;
    double fromPLN;
};

class CurrencyConverter {
private:
    std::map<std::string, ExchangeRates> rates;

public:
    CurrencyConverter();  // konstruktor
    void setupRates();    // ustawienie kursów walut
    double convert(double amount, const std::string& fromCurrency, const std::string& toCurrency);
};

#endif // CURRENCY_CONVERTER_H
