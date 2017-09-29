#include <iostream>
#include <vector>
#include <algorithm>


int maxOfFour(int a, int b, int c, int d)
{
	std::vector<int> container = {a,b,c,d};
	std::sort(container.begin(),container.end());

	return container[3];
}


int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	std::cin >> a;	
	std::cin >> b;	
	std::cin >> c;	
	std::cin >> d;	
	
	int ans = maxOfFour(a,b,c,d);

	std::cout << ans << std::endl;

	return 0;
}
