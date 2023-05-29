#include <iostream>
using namespace std;

int main() {
    double remainingMoney = 0.0;

    // Iterate through each temple visit
    for (int i = 0; i < 4; i++) {
        remainingMoney = (remainingMoney + 64.0) / 2.0;
    }

    double initialAmount = remainingMoney ;

    cout << "Rama initially had Rs. " << initialAmount << endl;
    return 0;
}
