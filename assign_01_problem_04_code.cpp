//youmna hatem 
//202106140
#include<iostream>
using namespace std;
int main()
{
	int A,B,C;
	cin>>A>>B>>C;
	if(A<B&&A<C)
	{
		if(B<C)
		cout<<A<<endl<<B<<endl<<C;
		else
		cout<<A<<endl<<C<<endl<<B;
	}
	if(B<A&&B<C)
	{
		if(A<C)
		cout<<B<<endl<<A<<endl<<C;
		else
		cout<<B<<endl<<C<<endl<<A;
	}
	if(C<A&&C<B)
	{
		if(A<B)
		cout<<C<<endl<<A<<endl<<B;
		else
		cout<<C<<endl<<B<<endl<<A;
	}
	cout<<endl;
	cout<<endl;
	cout<<A<<endl<<B<<endl<<C;
	return 0;
}
