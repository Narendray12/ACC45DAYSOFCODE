#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--)
	{
	    long long e,k,count=1;
	    std::cin >> e>>k;
	    while(e/k>0)
	    {
	        e=floor(e/k);
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
