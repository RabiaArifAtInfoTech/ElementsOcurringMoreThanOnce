#include<iostream>
#include<vector>
#include<algorithm>

template<typename T>
bool matching(std::vector<T> arr, T ele)
{
	bool match = 0;

	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] == ele)
		{
			match = 1;
		}

	}
	return match;
}

template<typename T>
int occurrence(T arr[], int n, T element)
{
	int occur = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == element)
		{
			occur++;
		}
	}
	return occur;
}

template<typename T>
std::vector<T> returnElements(T arr[], int n)
{
	std::vector<T> elements;
	for (int j = 0; j < n; j++)
	{
		if (occurrence(arr, n, arr[j]) > 1 && !(matching(elements,arr[j])) )
		{
			elements.push_back(arr[j]);
		}
	}
	return elements;
}



int main()
{
	const int N = 10;
	int arr[N] = { 4,6,2,7,4,8,6,3,3,2 };
	std::vector<int> findElements = returnElements(arr, N);


	for (auto k = findElements.begin(); k != findElements.end(); ++k)
		std::cout << *k << " ";

	std::cout << "\n\n\n";

	const int N2 = 15;
	float arr2[N2] = { 2.3, 4.3, 0.5, 4.13, 34.3, 43.43, 34.2, 4.3, 43.43, 77.76, 0.5 , 0.5, 46.6 , 0.5, 4.13 };
	std::vector<float> findElements1 = returnElements(arr2, N2);

	for (auto l = findElements1.begin(); l != findElements1.end(); ++l)
		std::cout << *l << " ";


	std::cout << "\n\n\n";
	return 0;
}