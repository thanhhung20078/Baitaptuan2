#include<iostream>
using namespace std;
int main()
{
    int x,y,ucln=1,min;
    cout<<"Nhap vao hai so x va y: ";
    cin>>x>>y;
    if(x==0 && y == 0)
    {
    	cout<<"x va y khong co ucln.";
	}
	else
	{
		if(x>y)
		{
			min = y;
		}
		else
		{
			min = x;
		}
		for(int i = 1; i<= min; i++)
		{
			if(x%i==0 && y%i==0)
			{
				ucln = i;
			}
		}
		cout<<"Uoc chung lon nhat cua x va y la: "<<ucln;
	}
	return 0;
}
