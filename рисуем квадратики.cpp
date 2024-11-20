#include <iostream>
void print_border(int width, int height, char wall = '#', char space = ' ') {
	for (int w = 0; w < width; ++w) {
    	std::cout << wall;
    }
    std::cout << std::endl;

	for (int h = 1; h < height - 1; ++h) {
    	std::cout << wall;
		for (int w = 1; w < width - 1; ++w) {
        	std::cout << space;
    	}
		std::cout << wall;
		std::cout << std::endl;
	}

	for (int w = 0; w < width; ++w) {
    	std::cout << wall;
    }
  std::cout << std::endl;
}
int main() {
  print_border(10, 7);
  print_border(42, 8, '|');
  print_border(5, 4, '#', '@');
  print_border(7, 7, '-', '#');
  return 0;
} 