#include <iostream>
using namespace std;
 int main()
 {
 	int n;
 	cout<<"Hay nhap vao so n: ";
 	cin>>n;
    int a[100][100];
    for(int i = 0; i<n; i++)
    {
    	for(int j = 0; j<n; j++)
    	{
    		cin>>a[i][j];
		}
	}
	for(int i = 0; i<n; i++)

{
	for(int j = 0; j<n; j++)

{
	cout<<a[i][j]<<" ";
}
cout<<endl;
}
return 0;
}
