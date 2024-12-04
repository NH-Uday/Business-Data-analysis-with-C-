#include "Chart.h"

void BarChart::drawChart(const std::vector<std::pair<std::string, double>>& data) {
    std::cout << "Rendering Bar Chart...\n";
    for (const auto& item : data) {
        std::cout << item.first << ": " << std::string(item.second / 1000, '|') << "\n";
    }
}
