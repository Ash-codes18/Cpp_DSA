#include <vector>
#include <algorithm>
using namespace std;

vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
	sort(arr.begin(),arr.end());
	vector<int> result;
	result.push_back(arr[k-1]);
	result.push_back(arr[n-k]);

	return result;
}
