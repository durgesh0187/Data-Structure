#include <iostream>
using namespace std;

int main() {
	
	int n,i;
	int f=1;
	cin>>n>>i;
	f=f<<i;
	int res = n&f;
	if(res==0)
	{
		cout<<"False"<<endl;
	}
	else
	{
		cout<<"True"<<endl;
	}
	
	
	return 0;
}
