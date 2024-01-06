#include <iostream>

int main(){

    float base, height, area;    

    std::cout << "Enter base and height"<<std::endl;
    std::cin >> base >> height;

    area = (base*height)/2;

    std::cout <<"Area is " << area << std::endl;

}