#include <iostream>
#include "../Sales_item.hpp"
int main(){
    Sales_item item_a;
    if(std::cin>>item_a){
        int cnt=1;
        Sales_item item_b;
        while (std::cin>>item_b)
        {
            if(item_a.isbn()==item_b.isbn()){
                ++cnt;
            }else{
                std::cout<<item_a.isbn()<<"times:"<<cnt<<std::endl;
                cnt=1;
                item_a = item_b;
            }
        }
        std::cout<<item_a.isbn()<<"times:"<<cnt<<std::endl;
    }
    else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }   
    return 0;
}