#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n>>i;    
	
	cout<<n<<" << "<<i<<" = "<<(n>>i)<<endl;    // n/(2^i);
}
