#include "Stocks.h"

void StockInfo::LoadStocks() {

    std::map<std::string, StockInfo> stockMap;

    // Open the CSV file
    std::ifstream file("stocks.csv");
    if (!file.is_open()) {
        std::cout << "Failed to open CSV file." << std::endl;

    }

    std::string line;
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        std::string symbol;
        double price;
        int quantity;
        // Read stock information from CSV
        if (iss >> symbol >> price >> quantity)
        {
            StockInfo stock; //create a stock object
            stock.symbol = symbol; //Assign the name/symbol of the stock
            stock.price = price; //Assign the price of one share of the stock
            stock.quantity = quantity; //Assign the quantity, maybe? Maybe risk?

            // Store stock information in the map with stock name as the key
            stockMap[symbol] = stock;
        }
        else
        {
            std::cout << "Failed to read stock information from line: " << line << std::endl;
        }
    }

    stockList = stockMap;

    // Access stock information from the map
    for (const auto& pair : stockMap)
    {
        std::cout << "Stock name: " << pair.first << std::endl;
        std::cout << "Price: " << pair.second.price << std::endl;
        std::cout << "Quantity: " << pair.second.quantity << std::endl;
        // Access other members of StockInfo struct as needed
    }


}
