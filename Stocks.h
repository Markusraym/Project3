#pragma once
#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

using namespace std;

struct StockInfo {

    std::string symbol;
    double price;
    int quantity;
    std::map<std::string, StockInfo> stockList;

    void LoadStocks();

};


