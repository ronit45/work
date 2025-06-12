#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cmath>

struct DataPoint {
    double time; // Time in decimal format (e.g., 2:30 -> 2.5)
    double multiplier;
};

// Function to convert time string (hh:mm) to decimal
double convertTimeToDecimal(const std::string &timeStr) {
    int hours = std::stoi(timeStr.substr(0, 2));
    int minutes = std::stoi(timeStr.substr(3, 2));
    return hours + minutes / 60.0;
}

// Linear regression to predict next multiplier
double predictNextMultiplier(const std::vector<DataPoint> &data) {
    int n = data.size();
    if (n < 2) {
        std::cerr << "Not enough data points for prediction.\n";
        return 0.0;
    }

    double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0;
    for (const auto &point : data) {
        sumX += point.time;
        sumY += point.multiplier;
        sumXY += point.time * point.multiplier;
        sumX2 += point.time * point.time;
    }

    // Calculate slope (m) and intercept (b) for y = mx + b
    double m = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
    double b = (sumY - m * sumX) / n;

    // Predict next multiplier
    double nextTime = data.back().time + (1.0 / 60.0); // Increment by 1 minute
    return m * nextTime + b;
}

int main() {
    std::ifstream inputFile("data.csv"); // Replace with your file name
    if (!inputFile.is_open()) {
        std::cerr << "Failed to open the file.\n";
        return 1;
    }

    std::vector<DataPoint> data;
    std::string line;
    while (std::getline(inputFile, line)) {
        std::istringstream ss(line);
        std::string timeStr, multiplierStr;
        if (std::getline(ss, timeStr, '\t') && std::getline(ss, multiplierStr, '\t')) {
            DataPoint point;
            point.time = convertTimeToDecimal(timeStr);
            point.multiplier = std::stod(multiplierStr);
            data.push_back(point);
        }
    }

    inputFile.close();

    double nextMultiplier = predictNextMultiplier(data);
    std::cout << "Predicted next multiplier: " << std::fixed << std::setprecision(2) << nextMultiplier << "\n";

    return 0;
}
