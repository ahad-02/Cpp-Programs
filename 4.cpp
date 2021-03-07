#include <iostream>
using namespace std;
int main()
{
	int h,m,sec,t_sec;
	char dm;
	cout<<"Enter the time in Hours:min:sec : ";
	cin>>h>>dm>>m>>dm>>sec,cout<<endl;
	t_sec=(h*3600)+(m*30)+sec;
	cout<<"\nTotal Time in Seconds is "<<dm<<t_sec;
	return 0;

}

