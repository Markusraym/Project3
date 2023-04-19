#include "Stocks.h"

 std::map<std::string, StockInfo> stockMap;

    // Open the CSV file
    std::ifstream file("stocks.csv");
    if (!file.is_open()) {
        std::cout << "Failed to open CSV file." << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        string symbol;
        double open;
        double high;
        double low;
        double close;
        long long int volume;
        double dividends;
        // Read stock information from CSV
        if (iss >> symbol >> open >> high >> low >> close >> volume >> dividends) 
        {
            StockInfo stock; //create a stock object
            stock.symbol = symbol; //Assign the name/symbol of the stock
            stock.open = open; 
            stock.high = high;
            stock.low = low;
            stock.close = close;
            stock.volume = volume;
            stock.dividends = dividends;

            // Store stock information in the map with stock name as the key
            stockMap[symbol] = stock;
        }
        else 
        {
            std::cout << "Failed to read stock information from line: " << line << endl;
        }
    }

    // Access stock information from the map
    for (const auto& pair : stockMap) 
    {
        cout << "Stock name: " << pair.first << endl;
        cout << "Open: " << pair.second.open << endl;
        cout << "High: " << pair.second.high << endl;
        cout << "Low: " << pair.second.low << endl;
        cout << "Close: " << pair.second.close << endl;
        cout << "Volume: " << pair.second.volume << endl;
        cout << "Dividends: " << pair.second.dividends << endl;
        // Access other members of StockInfo struct as needed
    }


}
