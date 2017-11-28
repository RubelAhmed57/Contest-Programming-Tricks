#include<iostream>
using namespace std;
int main()
{
	int ara[3][3] = {}; //array input size can be made dynamic, see in this repo
	//take input
	for (int row = 0; row < 3;row++)
	{
		for (int col = 0; col < 3;col++)
		{
			cin >> ara[row][col];
		}
	}

	/*
	sample input:
	5 4 2
	3 4 1
	5 3 2
	*/

	int temp;
	try {
		for (int r = 0; r < 3;r++) {
			for (int c = 0; c < 3; c++) {
				//cout << i<<"  ";
				for (int m = 0; m < 3;m++) {
					for (int j = 0; j < 3; j++) {
						if (ara[r][c] < ara[m][j]) {
							temp = ara[r][c];
							ara[r][c] = ara[m][j];
							//cout << ara[i] << " ";
							ara[m][j] = temp;
							//cout << "ok";
						}
					}
				}
			}
		}
	}
	catch (const char*msg)
	{
		cout << msg << endl;
	}
	cout << endl;
	for (int a = 0; a < 3;a++)
	{
		for (int k = 0; k < 3;k++) {
			cout << ara[a][k] << " ";
		}
		cout << endl;
	}
	return 0;
