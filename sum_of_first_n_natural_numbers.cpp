// sum = n*(n+1)/2

#include <iostream>

using namespace std;

int main(){

    int n, sum;

    cout << "Enter n" << endl;

    cin >> n;

    sum = n*(n+1)/2;
    
    cout << "Sum is: " << sum << endl;

    return 0;

}