#include <iostream>

using namespace std;

void changeVal(int* x, int* y){

    *x = 3;
    *y = 4;

}

int main() {

    int x;
    int y;

    changeVal(&x, &y);
    cout << x << y << endl;

}