# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

# Source files and target
SRC = DataManager.cpp TrendAnalysis.cpp BarChart.cpp Application.cpp
HEADERS = DataManager.h Analysis.h Chart.h Application.h
TARGET = BusinessAnalyzer

all: $(TARGET)

$(TARGET): $(SRC) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
