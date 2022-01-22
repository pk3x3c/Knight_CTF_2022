#include<iostream>

using namespace std;

int main()
{
	unsigned int number=0;
	unsigned int first=0;
	unsigned int second=0; 
	cout<<"enter the number"<<endl;
	cin>>number;
	for(first ; first <=number; ++first)
	{
		for(second=first; second<=number; ++second)
		{
			if(first*first + second*second == number)
				cout<<"{"<<first<<","<<second<<"}"<<endl;
		}
	}
	return 0;
}
