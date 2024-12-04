#include "DataManager.h"
#include <iostream>

void DataManager::loadData() {
    processedData = {{"Product A", 5000}, {"Product B", 7000}, {"Product C", 4500}};
    std::cout << "Data Loaded.\n";
}

const std::vector<std::pair<std::string, double>>& DataManager::getProcessedData() const {
    return processedData;
}
