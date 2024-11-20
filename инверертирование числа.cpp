#include <iostream>
int main() {
	long long a, b=0;
	std::cout<<"Input a:  ";
	std::cin>>a;
	while (a!=0) {
		b *= 10;
		b += a%10;
		a /= 10;
	}
	std::cout<<std::endl<<b;
}