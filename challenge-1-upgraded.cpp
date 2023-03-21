#include <iostream>

int main(){
    int num;
    std::cout<< "enter your favorite number between 1 and 100: ";
    std::cin>> num;
    
    if(num == 5) {
        std::cout<<"Amazing! That's my favorite number too !"<<std::endl;
        std::cout <<"No really "<<num<<" is my favorite number !"<< std::endl;
    }else {
        std::cout <<"The "<<num<<" is your favorite number !"<< std::endl;
    }
    
    std::cout<<std::endl;
    
    return 0;
}
