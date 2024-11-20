#include <iostream>
int main() {
	int a, m=0;
	std::cin>>a;
	while (a) {
		m=m*10+a%10;
		a/=10;
	}
	std::cout<<m;
}