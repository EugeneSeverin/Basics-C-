// Increment and Decrement Operators

// pre inc ++x;

// post inc x++;

// pre dec --x;

// post dec x--;


#include <iostream>

using namespace std;

int main(){

    int i = 5;

    int x = ++i;

    cout << "X = " << x << "; I = " << i << endl;

    int y = i++;

    cout << "Y = " << y << "; I = " << i << endl;

    int z = i--;

    cout << "Z = " << z << "; I = " << i << endl;

    int g = --i;

    cout << "G = " << g << "; I = " << i << endl;

    int i_max;

    i_max = i++ + ++i + i++ + ++i + i++ + ++i;

    cout << "I MAX = " << i_max << endl;

    return 0;

}