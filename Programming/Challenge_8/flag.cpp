#include<iostream>

using namespace std;


int main()
{       
        string flag="CFb5cp0rm1gK{1r4nT_m4}6";      // this is the string we have to match ( i.e. the end result) so i reversed it to get the input flag
               
	
	for(int i=flag.length()-1; i>=0; --i)
	{
		for(int j=flag.length()-2; j>=i; --j)
		{
			char x=flag[j+1];
			flag[j+1]=flag[j];
			flag[j]=x;
			
		}
	}
	cout<<flag;
	return 0;

}       
                                

