#include <bits/stdc++.h>
using namespace std;
// function that accepts the array and it's size and returns
// the number of distince elements
int distinct(int* arr, int len)
{

	// declaring a set container using STL
	set<int> S;
	for (int i = 0; i < len; i++) {

		// inserting all elements of the
		// array into set
		S.insert(arr[i]);
	}
	// calculating the size of the set
	int ans = S.size();
	return ans;
}
int main()
{
	int arr[] = { 12, 10, 9, 45, 2, 10, 10, 45 };
	// calculating the size of the array
	int l = sizeof(arr) / sizeof(int);
	// calling the function on array
	int dis_elements = distinct(arr, l);
	cout << dis_elements << endl;
	return 0;
}
