#include <iostream>
using namespace std;

int main() {
	int a;
	std::cin >> a;
	while(a>0)
	{
	    int n;
	    cin>>n;
        for(int i=n%2==0?n-1:n;i>=1;i-=2)
        {
            cout << i<<" ";
        }
        for(int i=2;i<=n;i+=2)
        {
            cout << i<<" ";
        }
        cout << endl;
	    a--;
	}
	return 0;
}
