#include <iostream>
#include <vector>

int main() {
	    
	int n, size, query, contents, pos;
	std::vector<std::vector<int> > array;
	std::vector<int> output;

	std::cin >> n >> query;
							
	for (int i = 0; i < n; ++i)
	{
		std::vector<int> temp;
		std::cin >> size;
		for (int j = 0; j < size; ++j)
		{
			std::cin >> contents;
			temp.emplace_back(contents);
		}
		array.emplace_back(temp);
	}

	for (int i = 0; i < query; ++i)
	{
		std::cin >> n >> pos;
		contents = array[n][pos];
		output.emplace_back(contents);
	}

	for (auto &&e : output)
	{
		std::cout << e << std::endl;
	}

	return 0;
}

