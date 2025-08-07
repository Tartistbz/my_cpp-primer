#include <iostream>
int main() {
	int a=0,b=0;
	std::cout<<"Enter two Number:"<<std::endl;
	std::cin>>a>>b;
	while(a>b){
		int temp = 0;
		temp = a;
		a = b;
		b = temp;
	}
	while(a<=b){
	std::cout<<a<<std::endl;
	a++;
	}
}
