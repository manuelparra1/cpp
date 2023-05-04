#include <iostream>
#include <cmath>
#include "gnuplot-iostream.h"

int main() {
    // Generate some sample data
    const int n = 100;
    std::vector<double> x(n), y(n);
    for (int i = 0; i < n; i++) {
        x[i] = i / 10.0;
        y[i] = std::sin(x[i]);
    }

    // Plot the data
    Gnuplot gp;
    gp << "plot '-' with lines title 'sin(x)'\n";
    gp.send1d(std::make_tuple(x, y));

    return 0;
}
