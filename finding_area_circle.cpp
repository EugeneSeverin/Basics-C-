#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float radius, area;

    cout << "Enter radius: " << endl;

    cin >> radius;

    area = 3.1425f * pow(radius, 2);

    cout << "Area is: " << area << endl;

    return 0;

}