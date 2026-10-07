#include <iostream>
#include <queue>
int main()
{
	//FIFO stands for First in, First Out so top here is bmw if we delete bmw the top will be volvo
	std::queue<std::string> cars ;
	cars.push("bmw");
	cars.push("volvo");
	cars.push("ferrari");
	cars.push("lamborghini");
	cars.push("mercedes");
	std::cout << cars.front() << std::endl;
	std::cout << cars.back() << std::endl;
	std::cout << cars.size() << std::endl;
	return 0;
}