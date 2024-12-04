#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <vector>
#include <string>
#include <utility>

class DataManager {
private:
    std::vector<std::pair<std::string, double>> processedData;

public:
    void loadData();
    const std::vector<std::pair<std::string, double>>& getProcessedData() const;
};

#endif
