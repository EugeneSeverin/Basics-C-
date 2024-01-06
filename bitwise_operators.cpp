// Bitwise operators (incomplete)

// & - and

// | - OR

// ^ - x-OR

// ~ - not

// << - left shift

// >> - right shift


// & - AND -----------------------------

// bit1 = 0, bit2 = 0, bit1 & bit2 is 0;

// bit1 = 1, bit2 = 0, bit1 & bit2 is 0;

// bit1 = 0, bit2 = 1, bit1 & bit2 is 0;

// bit1 = 1, bit2 = 1, bit1 & bit2 is 1;

// : - OR -----------------------------

// bit1 = 0, bit2 = 0, bit1 | bit2 is 0;

// bit1 = 1, bit2 = 0, bit1 | bit2 is 1;

// bit1 = 0, bit2 = 1, bit1 | bit2 is 1;

// bit1 = 1, bit2 = 1, bit1 | bit2 is 1;

// ^ - x-OR -----------------------------

// bit1 = 0, bit2 = 0, bit1 ^ bit2 is 0;

// bit1 = 1, bit2 = 0, bit1 ^ bit2 is 1;

// bit1 = 0, bit2 = 1, bit1 ^ bit2 is 1;

// bit1 = 1, bit2 = 1, bit1 ^ bit2 is 0;


#include <iostream>

using namespace std;

int main(){

    int x = 11, y = 5, z;

    z = x ^ y;

    cout << z <<endl;

    return 0;

}