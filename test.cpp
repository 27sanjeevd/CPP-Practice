#include <iostream>
using namespace std;

int calculate(int x, int y, bool temp) {
    if (temp){
        goto next;
    }

    cout << "asd";
    next:

    cout << "water";
    return 5;
}

int main() {
    cout << calculate(5, 10, false);
}