#include <iostream>
using namespace std;

int main() {

	int ar[1001];
	int n,res=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}

	for(int i=1;i<=n;i++)
	{
		int cntZ=0, cntO=0;
		for(int j=1;j<=n;j++)
		{
			if(ar[j]&(1<<i))
			{
				cntO++;
			}
			else
			{
				cntZ++;
			}
			int p=cntZ*cntO;
			res+=(1<<i)*p;
		}
		cout<<res<<endl;
	}
	return 0;
}
