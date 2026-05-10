#include<iostream>
using namespace std;

bool canReach(double fuelleft,double distance,double mpg){
	double maxdistance=fuelleft*mpg;
	if(maxdistance>=distance)
		return true;
	else
		return false;
	
}
int main(){
	int left,carmpg,dist;
	cout<<"value of fuelleft ";
	cin>>left;
	cout<<"value of mpg ";
	cin>>carmpg;
	cout<<"value of distance ";
	cin>>dist;
	if(canReach(left,carmpg,dist))
	cout<<"yes "<<endl;
	else
	cout<<"No out of fuel "<<endl;
}
