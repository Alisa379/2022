#include <iostream>
int main() {
	int n, m, sum=0, b=0;
	std::cin>>n;
	int arrn[n], arrm[n][2];
	for (int i=0; i<n; ++i) {
		std::cin>>arrn[i];
	}
	std::cin>>m;
	for (int i=0; i<m; ++i) {
		for (int j=0; j<2; ++j) {
			std::cin>>arrm[i][j];
		}
	}
	for (int i=0; i<m; ++i) {
		for (int k=arrm[i][0]; k<=arrm[i][1]; ++k) {
			b=b+1;
			if (b%2!=0) {
				sum=sum+arrn[k-1];
				continue;
			} 
			else {
				sum=sum-arrn[k-1];
			}
		}
		std::cout<<sum<<" ";
		b=0;
		sum=0;
	}
}