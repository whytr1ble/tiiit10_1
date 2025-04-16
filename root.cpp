#include <iostream>
#include <cmath>    // For sqrt() and pow() functions
#include <iomanip>  // For setprecision()

using namespace std;

int main() {
    double a, b, c;
    double discriminant;
    double root1, root2;
    
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c
    
    discriminant = b*b - 4*a*c;
    
    if (dscriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << fixed << setprecision(4);
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (discriminant == 0) {
        root1 = -b/(2*a);
        cout << fixed << setprecision(4);
        cout << "Root = " << root1 << endl;
    }
    else {
        cout << "No real roots." << endl;
    }
}