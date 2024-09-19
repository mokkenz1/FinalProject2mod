#include <iostream>

int main()
{
	std::cout << "Enter three numbers:\n";
	int x = 0, y = 0;
	std::cin >> x >> y;
	if (x > 0)
	{
		if (y > 0) std::cout << "1\n";
		else if (y == 0) std::cout << "1 4\n";
		else std::cout << "4\n";
	}
	else if (x == 0)
	{
		if (y > 0) std::cout << "1 2\n";
		else if (y == 0) std::cout << "1 2 3 4\n";
		else std::cout << "3 4\n";
	}
	else
	{
		if (y > 0) std::cout << "2\n";
		else if (y == 0) std::cout << "2 3\n";
		else std::cout << "3\n";
	}
	return 0;
}