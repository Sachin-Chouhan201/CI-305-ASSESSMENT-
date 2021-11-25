// Online C++ compiler to run C++ program online
#include <iostream>
//#include <sstream>
#include <bitset>

int main() {
    // Write C++ code here
    std::cout << "Hello world!\n";
    int n=32;
    int k= 0;//std::hex;//>>n;
    std::cout<<n<<"  ------ "<<std::dec<<n<<"\n";
   //std::cout<<std::binary<<n<<"\n";
    std::cout<<n<<"  ------ "<<std::hex<<n<<"\n";
    std::cout<<n<<"  ------ "<<std::oct<<n<<"\n";
    std::cout<<"90  ------ "<<std::bitset<8>{90}<<"\n";
    return 0;
}
