#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, M;
	int arr1[100002], arr2[100002];

	scanf("%d", &N);
	for (int i = 0 ; i < N ; i++)
		scanf("%d", &arr1[i]);
	scanf("%d", &M);
	for (int i = 0 ; i < M ; i++)
		scanf("%d", &arr2[i]);
	sort(arr1, arr1 + N);
	for (int i = 0 ; i < M ; i++)
		printf("%d\n", binary_search(arr1, arr1 + N, arr2[i]));
}
