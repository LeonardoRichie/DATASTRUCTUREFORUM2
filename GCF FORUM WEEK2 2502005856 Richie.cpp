#include<iostream>
using namespace std;

int GCD(int x, int y){
	if (y != 0)
		return GCD(y, x%y);//general case,recall again
	else
		return x;//base case
}

int main(){
	//printing the GCD
	cout<<"The GCD for the integers is "<<GCD(3, 9)<<endl;
	cout<<"The GCD for the integers is "<<GCD(4, 5)<<endl;
	cout<<"The GCD for the integers is "<<GCD(25, 75)<<endl;
	//since finding gcd can be split to smaller problems, we can use the
	//recursion to find the greatest common decimal.
}
