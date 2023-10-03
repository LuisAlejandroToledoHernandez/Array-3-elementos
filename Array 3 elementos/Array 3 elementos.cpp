#include<iostream>

int main() {

	int n[] = { 3, 4, 5 };

	std::cout << "elementos del arreglo: ";
	for (int i = 0; i < 3; i++) {
		std::cout << n[i] << " ";
	}
	std::cout << std::endl;

	system("pause");
	return 0;
}