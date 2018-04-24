#include <vector>
#include <iterator>

using std::vector;
using std::iterator;

template<class T>
void Swap(T* A, T* B)
{
	T swap = *A;
	*A = *B;
	*B = swap;
}

template<class T>
int size(vector<T> vec1)
{
	vector<T>::iterator<T> iT;

}

// QuickSort

template<class T>
double Partition(vector<T>& vec1, int low, int high)
{
	T pivot = vec1[high], i = (low - 1);

	int ascii1 = pivot;

	for (int j = low; j <= (high - 1); j++)
	{
		int ascii2 = vec1[j];
		
		if (ascii2 <= ascii1)
		{
			i++;
			Swap(&vec1[i], &vec1[j]);
		}
	}

	Swap(&vec1[i + 1], &vec1[high]);

	return (i + 1);
}

template<class T>
void Sort(vector<T>& vec1, int low, int high)
{
	if (low < high)
	{
		int pi = Partition(vec1, low, high);
		Sort(vec1, low, pi - 1);
		Sort(vec1, pi + 1, high);
	}
}

template<class T>
vector<T> QuickSort(vector<T>& vec1)
{
	Sort(vec1, 0, size(vec1) - 1);
	return vec1;
}

// Binary Search

bool BinarySearch(vector<char> vec1, char data)
{
	QuickSort(vec1);

	if (vec1[(vec1.size() - 1) / 2] == data)
	{
		return true;
	}
	else if (vec1.size() == 1)
	{
		return false;
	}
	else if (data < vec1[(vec1.size() - 1) / 2])
	{
		vector<char> vec2;

		for (int i = 0; i < (vec1.size()) / 2; i++)
		{
			vec2.push_back(vec1[i]);
		}

		return BinarySearch(vec2, data);
	}
	else if (data > vec1[(vec1.size() - 1) / 2])
	{
		vector<char> vec3;

		for (int i = (vec1.size()) / 2; i < vec1.size() - 1; i++)
		{
			vec3.push_back(vec1[i]);
		}

		return BinarySearch(vec3, data);
	}
}

bool BinarySearch(vector<double> vec1, double data)
{
	QuickSort(vec1);

	if (vec1[(vec1.size() - 1) / 2] == data)
	{
		return true;
	}
	else if (vec1.size() == 1)
	{
		return false;
	}
	else if (data < vec1[(vec1.size() - 1) / 2])
	{
		vector<double> vec2;

		for (int i = 0; i < (vec1.size()) / 2; i++)
		{
			vec2.push_back(vec1[i]);
		}

		return BinarySearch(vec2, data);
	}
	else if (data > vec1[(vec1.size() - 1) / 2])
	{
		vector<double> vec3;

		for (int i = (vec1.size()) / 2; i < vec1.size() - 1; i++)
		{
			vec3.push_back(vec1[i]);
		}

		return BinarySearch(vec3, data);
	}
}

// Merge Sort

template<class T>
void Merge(vector<T> vec1, vector<T> vec2)
{
	vector<T> vecL, vecR;

	for (int i = 0; i < vec1.size() / 2; i++)
	{
		vecL.push_back(vec1[i]);
	}

	for (int i = vec1.size() / 2; i < vec1.size() - 1; i++)
	{
		vecR.push_back(vec1[i]);
	}
}

template<class T>
void MSort(vector<T> vec1, int left, int right)
{

}

template<class T>
void MergeSort(vector<T> vec1)
{
	MSort(vec1, 0, vec1.size() - 1)
}

