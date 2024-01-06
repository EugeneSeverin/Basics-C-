// Overflow




#include <iostream>

using namespace std;

int main(){
    
    char x = 127; // Range or char is (-128 to 127)

    cout << "x = " << x << endl;

    ++x;

    cout << "x = " << x << endl;

}