//youmna hatem
//202106140

#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cin>>x;
	while(x>0)
	{
		y=x%10;
		x=x/10;
	}
	if(y%2==0)
	cout<<"EVEN";
	else
	cout<<"ODD";

}