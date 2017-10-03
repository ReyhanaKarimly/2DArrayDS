#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
long sum(int arr[6][6],int n,int m)
{
	long S = 0;
	for (size_t i = m; i < m+3; i++)
	{
		S += arr[n][i];
		S += arr[n + 2][i];
	}
	S += arr[n + 1][m + 1];
	return S;

}

int main() {
	int arr[6][6];
	for (int arr_i = 0; arr_i < 6; arr_i++) {
		for (int arr_j = 0; arr_j < 6; arr_j++) {
			cin >> arr[arr_i][arr_j];
		}
	}
	int a[16];
	int i = 0;
	for (int arr_i = 0; arr_i < 4; arr_i++) 
		for (int arr_j = 0; arr_j < 4; arr_j++)
		{
			
			a[i] = sum(arr, arr_i, arr_j);
			i++;
		}
		


	
	int max=-63;
	
		for (size_t j = 0; j < 16; j++)
		{
			max = (max < a[j]) ? a[j] : max;


		}

	
	cout << max << endl;

	system("pause");
	return 0;
}
