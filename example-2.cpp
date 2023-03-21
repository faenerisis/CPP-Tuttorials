#include <iostream>

int main(){
    int data = 1;
    int data1;
    int data2;
    
    std::cout << "data is " << data << std::endl;//for skipping line
    std::cout << "data is " << data << "\n";//for skipping line
    
    std::cout << "data1" << "\n";
    std::cin >> data1;
    std::cout << "data2"<< "\n";
    std::cin >> data2;
    
    std::cout << "data1 + data2 " << "= " << data1 + data2 << "\n";
    
    return 0;
}
