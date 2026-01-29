#include <iostream>


int main(){
    double a;
    double b;
    std::cout<<"Your hourly wage: ";
    std::cin >> a;
    std::cout<<"Your hours worked in a week: ";
    std::cin >> b;

    std::cout<<"Weekly Salary: "<<a*b<<std::endl;
}