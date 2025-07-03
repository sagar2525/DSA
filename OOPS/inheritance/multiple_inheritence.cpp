#include <iostream>
#include <iomanip>  // For manipulators
using namespace std;

int main() {
    double num = 123.456789;

    cout << "Default: " << num << endl;
    cout << "Fixed: " << fixed << setprecision(2) << num << endl;
    cout << "Scientific: " << scientific << setprecision(3) << num << endl;
    cout << "Width: " << setw(10) << right << num << endl;

    return 0;
}
