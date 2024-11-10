#include "header.h"

int main() {
    string greeting="hello";
    // greeting.insert(3," ");
    greeting.erase(greeting.length()-1);
    cout << greeting << endl;

    return 0;
}

