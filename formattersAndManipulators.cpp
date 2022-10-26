#include <iostream>
#include <iomanip>

int main(){
    float f = 31.12345f;
    std::cout<<std::setprecision(20)<<f<<std::endl;//setting precision of the float
    std::cout.setf(std::ios::showpos);//adding positive sign, by setting showpos flag
    std::cout<<f;
    std::cout.width(5);//setting width
    int a = 5;
    std::cout<<a;
    std::cout<<a<<std::endl;
    std::cout.fill('&');// filling empty spaces with &
    std::cout.width(7);
    std::cout<<a<<std::endl;
    std::cout.setf(std::ios::showpos | std::ios::showpoint);//to not unset showpoint flag, while unsetting showpos flag
    std::cout.unsetf(std::ios::showpos);//to unset showpos flag
    float b = 823;
    std::cout<<b<<std::endl;
    std::cout<<std::setbase(16)<<20<<std::endl;//to print 20 in hexadiecimal form
    
    return 0;
}