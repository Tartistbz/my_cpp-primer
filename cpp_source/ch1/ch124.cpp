#include <iostream>
#include "../Sales_item.hpp"
#include <map>
int main(){
    Sales_item item;
    std::map<std::string,Sales_item> item_count; 
    while (std::cin>>item)
    {
        item_count[item.isbn()]+= item;
    }
    for(const auto & entry : item_count){
        std::cout  <<entry.first<< entry.second << std::endl;
    }
    return 0;
}