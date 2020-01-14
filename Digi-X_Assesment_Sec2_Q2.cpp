#include <iostream>
using namespace std;

//Changing negative number to 0 as 0 mod anything will be 0

int findHCF(int num , int arr[]) 
{
	int biggestInt = 0;
	int biggestCF = 1;
	for (int i = 0; i < 5; ++i)
	{
		if (arr[i]<0)
		{
			arr[i]=0;
		}
		else if(arr[i] > biggestInt)
		{
			biggestInt = arr[i];
		}
	}
	//check for the common factor from 1 to the largest number in the array.
	for (int i = 1; i <= biggestInt; ++i)
	{
		if(arr[0]%i == 0 && arr[1]%i == 0 && arr[2]%i == 0 && arr[3]%i == 0 && arr[4]%i == 0)
		{
			biggestCF = i;
		}
	}

	return biggestCF;
}

//utility function to print array that is size 5
void printArr(int arr[]) 
{
	for (int i = 0; i < 5; ++i)
	{
		cout<<arr[i]<<",";
	}
}

//This is a program to find the highest common factor from 5 numbers.
int main()
{
	int num;
	cout<<"Please key in the number of positive integers."<<endl;
	cout<<"Number of positive integers = ";
	cin>>num;
	int arr[5];
	cout<<"Please enter the numbers."<<endl;
	for (int i = 0; i < 5; ++i)
	{
		cout<<"arr["<<i<<"] = ";
		cin>>arr[i];
	}
	cout<<"findHCF("<<num<<",[";
	printArr(arr);
	cout<<"]) -> "<<findHCF(num,arr);
}