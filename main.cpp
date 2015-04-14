// Written by Brandon Holland
// Simple program to calculate the number of primes with a given input

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> calcPrimes(int input)
{
	vector<int> solution;
    solution.push_back(2);
    solution.push_back(3);
    solution.push_back(5);
    solution.push_back(7);

    int n = input;

    for(int a = 11; a <= n; a = a + 2)
    {
    	bool test = false;
    	int root = sqrt(a);
    	int size = solution.size();

    	for(int b = 0; b < size; b++)
    	{
    		if(root < solution[b])
    		{
    			break;
    		}

    		if(a % solution[b] == 0)
    		{
    			test = true;
    			break;
    		}
    	}

    	if(test == false)
    	{
    		solution.push_back(a);
    	}
    }

    return solution;
}

int NumberOfPrimes(int input)
{
	return calcPrimes(input).size();
}

int main()
{
	cout << "Enter a number" << endl;

	int input;

	cin >> input;

	if(input < 0)
	{
		cout << "Entered Invalid Number" << endl;
		return -1;
	}

	if(input == 1 || input == 0)
	{
		cout << "Number of Primes: 0" << endl;
		return -1;
	}

	if(input == 2)
	{
		cout << "Number of Primes: 1" << endl;
		return -1;
	}

	if(input == 3 || input == 4)
	{
		cout << "Number of Primes: 2" << endl;
		return -1;
	}

	if(input == 5 || input == 6)
	{
		cout << "Number of Primes: 3" << endl;
		return -1;
	}

	int result = NumberOfPrimes(input);

	cout << "Number of Primes: " << result << endl;

	return 0;

}