// a*sqr(x)+b*x+c = 0

// r1 = -b + sqrt(pow(b,2) - pow(4*a*c,2))
// r2 = -b - sqrt(pow(b,2) - pow(4*a*c,2))

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    float r1, r2, a, b, c, discriminant;

    cout << "Enter a, b, c" << endl;

    cin >> a >> b >> c;

    discriminant = pow(b,2) - 4 * a * c;

    r1 = (-b - sqrt(abs(discriminant)))/2*a;

    r2 = (-b + sqrt(abs(discriminant)))/2*a;

    cout << "r1 is: " << r1 << "r2 is: " << r2 <<endl;

    return 0;

}