#include <iostream>

std::string conditional(int n)
{
	
	if(n == 1)
	{
		return "one";
	}
	else if(n == 2)
	{
		return "two";
	}
	else if(n == 3)
	{
		return "three";
	}
	else if(n == 4)
	{
		return "four";
	}
	else if(n == 5)
	{
		return "five";
	}
	else if(n == 6)
	{
		return "six";
	}
	else if(n == 7)
	{
		return "seven";
	}
	else if(n == 8)
	{
		return "eight";
	}
	else if(n == 9)
	{
		return "nine";
	}
	else
	{
		return "Greater than 9.";
	}
}

int main()
{
	
	int n = 0;
	std::cin >> n;

	std::cout << conditional(n);

	return 0;

}
