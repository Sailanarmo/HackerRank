#include <iostream>
#include <vector>
#include <string>


int main()
{
	std::vector<std::string> map = {"one","two","three","four","five",
								"six","seven","eight","nine"};
	int a = 0;
	int b = 0;

	std::cin >> a;
	std::cin >> b;

	for(int i = a; i < b+1; ++i)
	{
		if(i <=9)
		{
			std::cout << map[i-1] << std::endl;
		}
		else if(i%2==0)
		{
			std::cout << "even" << std::endl;
		}
		else
		{
			std::cout << "odd" << std::endl;
		}
	}

	return 0;
}
