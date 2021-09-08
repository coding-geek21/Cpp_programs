//6) Given two sets A={1,2,3,4} and B={3,4,5,6,7} of size N and M .
//Perform set operation i.e union, intersection and difference on sets

#include <bits/stdc++.h>

int main()
{
	int first[] = { 5, 10, 15, 20, 25 };
	int second[] = { 50, 40, 30, 20, 10 };
	int n = sizeof(first) / sizeof(first[0]);

	std::vector<int> v1(5);
	std::vector<int> v2(5);
	std::vector<int>::iterator it, ls;

	std::sort(first, first + 5);
	std::sort(second, second + 5);

	std::cout << "First array :";
	for (int i = 0; i < n; i++)
		std::cout << " " << first[i];
	std::cout << "\n";

	std::cout << "Second array :";
	for (int i = 0; i < n; i++)
		std::cout << " " << second[i];
	std::cout << "\n\n";

	
	ls = std::set_intersection(first, first + 5, second, second + 5, v1.begin());

	std::cout << "The intersection has " << (ls - v1.begin()) << " elements:";
	for (it = v1.begin(); it != ls; ++it)
		std::cout << ' ' << *it;
	std::cout << "\n";
	
	std::vector<int> v(10);
    std::vector<int>::iterator  st;
	it = std::set_union(first, first + n, second,
                        second + n, v.begin());
 
    std::cout << "\nThe union has " << (it - v.begin())
              << " elements:\n";
    for (st = v.begin(); st != it; ++st)
        std::cout << ' ' << *st;
    std::cout << '\n';
	
	ls = std::set_difference(first, first + 5, second, second + 5, v2.begin());
  
    
    std::cout << "\nThe difference has " << (ls - v2.begin()) << " elements :";
    for (it = v2.begin(); it < ls; ++it)
        std::cout << " " << *it;
    std::cout << "\n";
	
	
	return 0;
}

