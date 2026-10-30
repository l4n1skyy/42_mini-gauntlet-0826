#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void sortAsc(std::vector<int> &v);
void sortDesc(std::vector<int> &v);
int binarySearch(const std::vector<int> &v, int target);

// O(n log n) overall program
int main(int argc, char *argv[])
{
	// argv to vector: O(n) — one stoi + push_back per argument
	std::vector<int> vec;
	for (int i = 2; i < argc; i++)
		try
		{
			vec.push_back(std::stoi(argv[i]));
		}
		catch (const std::exception &e)
		{
			std::cerr << "invalid input: " << e.what() << "\n";
			return 1;
		}

	// sort & print
	sortAsc(vec);  // O(n log n) sort + O(n) print
	sortDesc(vec); // O(n log n) sort + O(n) print
	{
		// resort - O(n log n) — std::sort
		std::sort(vec.begin(), vec.end(),
				  [](const int &a, const int &b) { return a < b; });

		int target = std::stoi(argv[1]);

		// search: O(log n) — binary search on sorted data
		int targetIndex = binarySearch(vec, target);

		if (targetIndex == -1)
			std::cout << "find " << target << " -> " << targetIndex << "\n";
		else
			std::cout << "find " << target << " -> index " << targetIndex
					  << "\n";
	}
}

void sortAsc(std::vector<int> &v)
{
	// sort ascending
	std::sort(v.begin(), v.end(),
			  [](const int &a, const int &b) { return a < b; });

	std::cout << "sorted asc:  ";
	for (const auto &i : v)
		std::cout << i << " ";
	std::cout << "\n";
}

void sortDesc(std::vector<int> &v)
{
	// sort descending
	std::sort(v.begin(), v.end(),
			  [](const int &a, const int &b) { return a > b; });

	std::cout << "sorted desc: ";
	for (const auto &i : v)
		std::cout << i << " ";
	std::cout << "\n";
}

int binarySearch(const std::vector<int> &v, int target)
{
	// search
	int lo = 0, hi = static_cast<int>(v.size());
	while (lo < hi)
	{
		int mid = lo + (hi - lo) / 2;
		if (v[mid] == target)
			return mid;
		else if (v[mid] < target)
			lo = mid + 1;
		else
			hi = mid;
	}
	return -1;
}
