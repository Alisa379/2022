#include <iostream>
int factorial(int n) {
	if (n==0 ||n==1) {
		return 1;
	}
	else {
		return n*factorial(n-1);
	}
}
	
int factorial_cycle(int a) {
	int result=1;
	for (int i=1; i<=a; ++i) {
		result*=i;
	}
	return result;
}

int main() {
	std::cout<<factorial(0)<<std::endl;
	std::cout<<factorial_cycle(0);
}

