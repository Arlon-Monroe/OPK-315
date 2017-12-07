#include <iostream>

#include <math.h>

#include <vector>

#include <algorithm>

#include <time.h>



using namespace std;



bool Sortirovka(vector<int> li, vector<int> ri)

{

	if (li[0]<ri[0])return true;

	else if (li[0]>ri[0])return false;



	return li[1]>ri[1];

}



int main()

{



	srand(unsigned(time(NULL)));

	int n;

	n = rand() % (210 - 1) + 1;

	cout << n << "\n";

	vector<vector<int>> mas(n, vector<int>(3));

	for (int i = 0; i<n; i++)

	{

		do

		{

			mas[i][0] = rand() % (109 - 1);

			mas[i][1] = rand() % (109 - 1);

		} while (mas[i][0]>mas[i][1]);

		cout << i + 1 << ") ";

		cout << mas[i][0] << " ";

		cout << mas[i][1] << "\n";

		mas[i][2] = i + 1;

	}



	sort(mas.begin(), mas.end(), Sortirovka);

	cout << "\n";

	for (int i = 0; i<n; i++)

	{

		int j = i + 1;



		while (j<n && mas[j][0] <= mas[i][1])

		{

			if (mas[j][0] == mas[i][0] && mas[j][1] >= mas[i][1])

			{

				cout << mas[i][2];

				return 0;

			}



			mas[j][0] = mas[i][1] + 1;

			if (mas[j][1] - mas[j][0]<0)

			{

				cout << mas[j][2];

				return 0;

			}



			j++;

		}

	}



	cout << -1;

}