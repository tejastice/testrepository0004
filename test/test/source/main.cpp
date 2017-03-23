#include <iostream>
#include <fstream>

int main() {
	std::fstream file;
	file.open("data.csv", std::ios::out);

	file << "aaaaaa" << std::endl;


	return 0;
}