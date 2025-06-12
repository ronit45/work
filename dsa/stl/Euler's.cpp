#include <iostream>

// Define the differential equation: dy/dx = f(x, y)
// Example: dy/dx = x + y
#define f(x, y) (x + y)

using namespace std;

int main() {
    float x0, y0, xn, h, yn, slope1, slope2, y_predict;
    int n;

    cout << "Enter Initial Condition:\n";
    cout << "x0 = ";
    cin >> x0;
    cout << "y0 = ";
    cin >> y0;
    cout << "Enter calculation point xn = ";
    cin >> xn;
    cout << "Enter number of steps: ";
    cin >> n;

    h = (xn - x0) / n;

    cout << "\nx0\t\ty0\t\tslope1\t\ty_predict\t\tslope2\t\tyn\n";
    cout << "------------------------------------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        slope1 = f(x0, y0);  // Initial slope
        y_predict = y0 + h * slope1;  // Predictor step
        slope2 = f(x0 + h, y_predict);  // Corrected slope
        yn = y0 + (h / 2) * (slope1 + slope2);  // Modified Euler update

        cout << x0 << "\t" << y0 << "\t" << slope1 << "\t\t" 
             << y_predict << "\t\t" << slope2 << "\t\t" << yn << "\n";

        x0 = x0 + h;
        y0 = yn;
    }

    cout << "\nValue of y at x = " << xn << " is " << yn << "\n";

    return 0;
}
