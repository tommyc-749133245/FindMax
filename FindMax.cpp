#include <iostream>
using namespace std;

//function Max for checking max number
double Max(int& size, double const*const arr){

	//initialize variables and array
	double max = NULL;
	max = arr[0];

	//checking for max number
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j <= size; j++){
			if (arr[j] > max)
			{
				max = arr[j];
				break;
			}
		}
	}
	//return max number
	return max;
}

int main()
{
	//initialize variables and array
	int size;
	double answer;

	//ask for input size of array
	cout << "How many numbers do you like to enter? ";
	cin >> size;

	//initialize array for input
	double* test = new double[size];

	//ask for input
	cout << "Enter values: ";

	//store input to the array
	for (int i = 0; i < size; i++)
		cin >> test[i];

	//call function Max
	answer = Max(size, test);

	//print the answer
	cout << "The maximum value: " << answer << endl;
	system("pause");
	return 0;
}
