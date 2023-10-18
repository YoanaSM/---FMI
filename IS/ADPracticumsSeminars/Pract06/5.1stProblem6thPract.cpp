#include<iostream>
const int MAX_SIZE = 60;

int lengthMaxSeq(int array[MAX_SIZE], int n)
{
	int currSeq = 1;
	int maxSeq = 1;

	for (int i = 0; i <= n - 1; i++)
	{

		if (array[i] == array[i + 1])
		{
			currSeq++;
		}
			
		else if (array[i] != array[i + 1])
		{
			if (currSeq > maxSeq)
			{
				maxSeq = currSeq;
			}

			currSeq = 1;
		}
	}
	return maxSeq;
}
int main()
{
	int n;
	std::cin >> n;

	int array[MAX_SIZE];
	for (int i = 0; i < n; i++)
	{
		std::cin >> array[i];
	}


	std::cout << lengthMaxSeq(array, n) << std::endl;


	return 0;
}