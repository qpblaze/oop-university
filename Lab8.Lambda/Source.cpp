#include <cstdlib>
#include <iostream>
#include <vector>
#include <functional>

using namespace std;

template <class T>
int CompareDecreasing(T& e1, T& e2)
{
	if (e1 > e2)
	{
		return -1;
	}
	
	if(e1 == e2)
	{
		return 0;
	}

	return 1;
}

template <class T>
void Sort(vector<T>& lista, int(*Compare)(T &e1, T &e2))
{
	for(int i =0; i < lista.size() - 1; i++)
	{
		for(int j =i; j < lista.size(); j++)
		{
			if(Compare(&lista[i], &lista[j]) > 0)
			{
				swap(&lista[i], &lista[j]);
			}
		}
	}
}

template <class T>
void SortLambda(vector<T>& lista, function<int(T &e1, T &e2)> Compare)
{
	for (int i = 0; i < lista.size() - 1; i++)
	{
		for (int j = i + 1; j < lista.size(); j++)
		{
			if (Compare(lista[i], lista[j]) > 0)
			{
				swap(lista[i], lista[j]);
			}
		}
	}
}

int main()
{
	vector<int> v = { 4, 0, 5, 2, 3, 10 };
	SortLambda<int>(v, [](int &e1, int &e2) -> int 
		{
			if (e1 < e2)
			{
				return -1;
			}

			if (e1 == e2)
			{
				return 0;
			}

			return 1;
		});

	for (int i : v)
	{
		cout << i << " ";
	}

	vector<const char*> chars = { "sa", "b", "bg", "aa", "z" };
	SortLambda<const char*>(chars, [](const char* &e1, const char* &e2) -> int
	{
		return -strcmp(e1, e2);
	});

	cout << endl;
	for(auto i : chars)
	{
		cout << i << " ";
	}

	cout << endl;
	system("pause");
	return 0;
}
