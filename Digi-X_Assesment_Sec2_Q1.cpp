#include <iostream>
using namespace std;

// This is a program that use a for loop to print all multiples of 3 and 5 up to 100

int main(){

	for(int i = 3, j = 5; i<=100 || j<=100 ; ){
		if (i<j)
		{
			cout<<i<<" ";
			i = i + 3;
		}
		else if (i==j) //prevent duplicate
		{
			j = j + 5;
		}
		else
		{
			cout<<j<<" ";
			j = j + 5;
		}
	}
}