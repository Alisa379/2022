#include <iostream>
int main() {
	int arr[]={4, 7, 3, 8, 11};
	const int size=sizeof(arr)/sizeof(arr[0]);
	for (int &number : arr) {    // int number ссылается на оригинал элемента массива arr
		number *= 2;             // домножаем оригинал на 2 
	}
	for (int number : arr) {     // int number получает копию элемента массива arr
		std::cout<<number<<" ";
	}
}