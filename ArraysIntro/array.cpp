#include <iostream>
#include <vector>
#include <algorithm>


std::vector<int> sortIt(std::vector<int> &n)
{
	
	std::reverse(n.begin(),n.end());

	return n;

}


int main()
{
	int n = 0;
	int input = 0;
	std::vector<int> cont;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::cin>>input;
		cont.push_back(input);
	}

	sortIt(cont);

	for(auto &&e : cont)
	{
		std::cout << e << " ";
	}
	std::cout << std::endl;

	return 0;
}
