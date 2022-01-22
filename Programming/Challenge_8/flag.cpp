#include<iostream>

using namespace std;


int main()
{       
        string flag="CFb5cp0rm1gK{1r4nT_m4}6";
               
	
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
                                

