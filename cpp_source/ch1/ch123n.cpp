#include <iostream>
#include "../Sales_item.hpp"
#include <map>
int main(){
    Sales_item item;
    std::map<std::string,int> sales_count; 
    while (std::cin>>item)
    {
        sales_count[item.isbn()]++;
    }
    for(const auto & entry : sales_count){
        std::cout << "ISBN: " << entry.first << " has " << entry.second << " sales." << std::endl;
    }
    return 0;
}