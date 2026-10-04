#include <iostream>
#include <list>
int main()
{
	std::list<double> numbers = {22.5, 24.0, 21.5} ;
	numbers.pop_front();
	std::cout << numbers.front() << std::endl;
	std::cout << numbers.back() << std::endl;
    return 0;
}