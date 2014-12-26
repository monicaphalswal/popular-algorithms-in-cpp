/*
    Dynamic Programming implementation of LIS problem.
    A straight-forward solution in O(n^2) time.
    For eg, length of LIS for { 10, 22, 9, 33, 21, 50, 41, 60, 80 } is 6
    and LIS is {10, 22, 33, 50, 60, 80}.
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define pb push_back

int main() {

	int i;
	vector<int> m, n;
	while(cin>>i)
	{
		m.pb(i);
	}

	for(int i=0; i<m.size(); i++)
	{
		int maxe =0;
		for(int j=0; j<i; j++)
		{
			if(m[i]>=m[j])
			{
				maxe = max(maxe, n[j]);
			}
		}
		n.pb(1+maxe);
	}

	cout<<*max_element(n.begin(), n.end());
	return 0;
}
