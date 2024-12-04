#ifndef CHART_H
#define CHART_H

#include <vector>
#include <string>
#include <utility>
#include <iostream>

class Chart {
public:
    virtual void drawChart(const std::vector<std::pair<std::string, double>>& data) = 0;
    virtual ~Chart() = default;
};

class BarChart : public Chart {
public:
    void drawChart(const std::vector<std::pair<std::string, double>>& data) override;
};

class PieChart : public Chart {
public:
    void drawChart(const std::vector<std::pair<std::string, double>>& data) override;
};

class LineChart : public Chart {
public:
    void drawChart(const std::vector<std::pair<std::string, double>>& data) override;
};

#endif
