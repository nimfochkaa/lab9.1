#include <iostream>
#include <iomanip>
#include <cmath>
#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main() {
    cout << "x_p = "; cin >> x_p;
    cout << "x_k = "; cin >> x_k;
    cout << "dx = "; cin >> dx;
    cout << "e = "; cin >> e;
    cout << endl;

    cout << "---------------------------------------------" << endl;
    cout << "|     x     | ln(1 - x) |    sum   |  Count |" << endl;
    cout << "---------------------------------------------" << endl;

    x = x_p;
    while (x <= x_k) {
        sum();  
        cout << "| " << fixed << setprecision(5) << setw(9) << x << " "
            << "| " << setw(9) << log(1 - x) << " "
            << "| " << setw(8) << -s << " "
            << "| " << setw(6) << n << " |" << endl;
        x += dx;
    }

    cout << "---------------------------------------------" << endl;
    return 0;
}
