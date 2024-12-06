/**
* Name: Alexander Dela Cruz
* Course: 4883 - Programming Techniques
* Date: 9-10-2024
*/
#include <iostream>
#include <cstdlib> // For abs()

#define endl "\n"

using namespace std;

int main() {
    long B = 0, A = 0, difference = 0;

    while (cin >> A >> B) {

        // your stuff here
        difference = A - B;
        difference = abs(difference);
        cout << difference << endl;

    }
    return 0;
}
