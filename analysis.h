#ifndef ANALYSIS_H
#define ANALYSIS_H

#include <vector>
#include <string>
#include <iostream>
#include <utility>

class Analysis {
public:
    virtual void performAnalysis(const std::vector<std::pair<std::string, double>>& data) = 0;
    virtual ~Analysis() = default;
};

class TrendAnalysis : public Analysis {
public:
    void performAnalysis(const std::vector<std::pair<std::string, double>>& data) override;
};

class SalesBreakdown : public Analysis {
public:
    void performAnalysis(const std::vector<std::pair<std::string, double>>& data) override;
};

class ProfitMarginAnalysis : public Analysis {
public:
    void performAnalysis(const std::vector<std::pair<std::string, double>>& data) override;
};

#endif