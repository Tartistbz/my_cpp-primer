#include <iostream>
#include "../Sales_item.hpp"
int main(){
    Sales_item sum_item;
    std::cin>>sum_item;
    for(Sales_item item;std::cin>>item;){
        sum_item+=item;
    }
    std::cout <<  sum_item << std::endl;
    return 0;
}