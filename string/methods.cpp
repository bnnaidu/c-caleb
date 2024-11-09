#include "header.h"

int main() {
    string greeting="hello";
    greeting.insert(3," ");
    cout << greeting << endl;
    greeting.erase(3,1);
    cout << greeting << endl;

    return 0;
}

