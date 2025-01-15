// if (condition1) {
//     // Code if condition1 is true
// } else if (condition2) {
//     // Code if condition2 is true
// } else {
//     // Code if none of the conditions are true
// }

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    if (number > 0) {
        cout << "Positive number" << endl;
    } else if (number < 0) {
        cout << "Negative number" << endl;
    } else {
        cout << "Zero" << endl;
    }
    return 0;
}
