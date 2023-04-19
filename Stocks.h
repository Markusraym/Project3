#pragma once
#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

using namespace std;

struct StockInfo {

    string symbol;
    double open;
    double high;
    double low;
    double close;
    long long int volume;
    double dividends;
    // Add additional members as needed
    std::map<std::string, StockInfo> stockList;

    void LoadStocks();

};


