#include <iostream>

using namespace std;

enum day {mon=1, tue, wed, thu=10, fri, sat, sun};

typedef int marks;

int main(){

    day d;

    d = mon;
    
    cout << d << endl;
    cout << tue << endl;
    cout << wed << endl;
    cout << thu << endl;
    cout << fri << endl;
    cout << sat << endl;
    cout << sun << endl;

    marks m1, m2;

    m1=2;

    m2=5;

    return 0;
}