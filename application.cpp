#include "Application.h"

void Application::run() {
    DataManager dataManager;
    dataManager.loadData();

    TrendAnalysis trendAnalysis;
    BarChart barChart;

    const auto& data = dataManager.getProcessedData();
    trendAnalysis.performAnalysis(data);
    barChart.drawChart(data);
}
