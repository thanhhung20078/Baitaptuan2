#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
 int N;
 cout<<"Nhap vao so N: ";
 cin>>N;
 for(int i = 0; i<N; i++)
 {
 	for(int j = 0; j<N; j++)
    {
    	if(j<i)
    	{
    		cout<<" ";
		}
		if(j>=i)
		{
			cout<<"*";
		}
	}
	cout<<"\n";
}
return 0;
}
