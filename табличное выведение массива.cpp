#include <iostream>
int main() {
	int arr[][4]={
		{7, 11, 76, 7},
		{8, 2, 32, 21},
		{6, 90, 4, 18}
	};
	for (int columns=0; columns<3; ++columns) {
		for (int rows=0; rows<4; ++rows) {
			std::cout<<arr[columns][rows]<<"\t";
		}
		std::cout<<"\n"<<std::endl;
	}
}