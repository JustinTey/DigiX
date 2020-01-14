#include <iostream>
#include <string>
using namespace std;


bool palindrome(string input)
{
	for (int i = 0; i < input.length()/2; ++i)
	{
		if (toupper(input[i]) != toupper(input[input.length()-1-i]))
		{
			return false;
		}
	}
	return true;
}


int main()
{
	string input;
	cout<<"Please enter a string to test whether it is a palindrome."<<endl;
	cout<<"-> "; 
	cin>>input;
	cout<<" '"<<input<<"' -> "<<boolalpha<<(palindrome(input));

}