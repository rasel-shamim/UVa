#include<iostream>

using namespace std;

int main()
{
	int t,cnt=1,i;

	cin>>t;

	while(t--){

		int radius;
		cin>>radius;

		int x,y;

		cout<<"Case "<<cnt<<":"<<endl;

		x = radius*(-2.25);
		y = radius*1.5;

		cout<<x<<" "<<y<<endl;

		x =radius*2.75;
		y = radius*1.5;

		cout<<x<<" "<<y<<endl;

		x = radius*2.75;
		y = radius*(-1.5);

		cout<<x<<" "<<y<<endl;

		x = radius*(-2.25);
		y = radius*(-1.5);

		cout<<x<<" "<<y<<endl; 

		cnt++;
	}

	return 0;
}
