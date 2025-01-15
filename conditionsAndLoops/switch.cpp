// switch (variable) {
//     case value1:
//         // Code for value1
//         break;
//     case value2:
//         // Code for value2
//         break;
//     default:
//         // Code if none of the cases match
// }


#include <iostream>
using namespace std;

int main() {
    int day = 3;
    switch (day) {
        case 1:
            cout << "Saturday" << endl;
            break;
        case 2:
            cout << "Sunday" << endl;
            break;
        case 3:
            cout << "Monday" << endl;
            break;
        default:
            cout << "Invalid day" << endl;
    }
    return 0;
}
