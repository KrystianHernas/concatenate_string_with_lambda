#include <iostream>
#include <string>

//std::string str(const std::string& a, const std::string& b) { return a + b; }

int main()
{
	std::string a = "Ala ma", b = "Kota";
	auto result = [](const std::string& a, const std::string& b) {std::cout << (a + b); };
	result(a, b);
	return 0;
}