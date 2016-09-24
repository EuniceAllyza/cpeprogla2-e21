#include<iostream>
#include<cmath>
using namespace std;
int a[3],i,x,y;
int main()
{
	for(i=0;i<3;i++)
	{
		cin>>x>>y;
		a[i]=abs(x-y);
	}
	cout<<"\n"<<a[0]<<"\n"<<a[1]<<"\n"<<a[2]<<endl;
	return 0;
}
