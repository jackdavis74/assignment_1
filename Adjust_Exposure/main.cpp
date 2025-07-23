#include <cstdio>
#include <iostream>

void adjust_exposure(double &notional, double pct_change){
    notional *= (1 + pct_change);
}

int main() {
    double current_notional = 1000;
    std::cout << "Current notional: ";
    std::cout << current_notional;
    std::cout << "\n";
    double percent_change = -0.07;
    std::cout << "Percent change: ";
    std::cout << percent_change;
    std::cout << "\n";
    //calc notional change
    adjust_exposure(current_notional, percent_change);
    std::cout << "New notional: " << current_notional << "\n";
    return 0;
}