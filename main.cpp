#include <iostream>
using namespace std;

union Data {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    Data d;

    d.intValue = 10;
    cout << "intValue: " << d.intValue << endl;

    d.floatValue = 5.5;
    cout << "floatValue: " << d.floatValue << endl;

    d.charValue = 'A';
    cout << "charValue: " << d.charValue << endl;

    // Note: Only the last assigned value is valid
    cout << "intValue after assigning charValue: " << d.intValue << endl;

    return 0;
}
