
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void read(std::vector<int>& vec) {

	int a;
	int n;
	cout << "Enter size: ";
	cin >> n;

	cout << "Enter "<< n << " numbers: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		vec.push_back(a);

	};
}

	void print(const std::vector<int>&vec) {

		cout << "Vector: ";

		for (auto elem : vec)
		{
			cout << elem << ' ';

		}
	}

int main() {
	std::vector<int> vec;
	read(vec);
	std::sort(vec.begin(), vec.end());
	print(vec);
	return 0;
}