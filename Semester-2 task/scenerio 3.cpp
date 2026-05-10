#include<iostream>
using namespace std;

bool canVote(int age){
	if (age>=18)
	return true;
	else
	return false;
 
}
int main(){
	int userage;
	cout<<"the eligible vote age is =";
	cin>>userage;
	bool Age=canVote(userage);
	cout<<"Vote eligibility status is  "<<  Age<< endl;
}

