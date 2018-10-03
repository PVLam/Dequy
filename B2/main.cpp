#include <iostream>
using namespace std;

bool ChuaXuatHien(int i, int a[], int N)
{
	for (int i = 0; i<N; ++i)
	{
		if(a[i] == i)
		{
			return false;
		}
	}
	return true;
}

void SinhHoanVi(int pos, int a[], int N)
{
	if(pos>3)
	{
		for (int i = 0; i<N; ++i)
		{
			cout<<a[i];
		}
		cout<<endl;
	}
	else
	{
		for (int i = 1; i<=N; ++i)
		{
			if (ChuaXuatHien(i,a,pos-1))
			{
				a[pos-1] = i;
				SinhHoanVi(pos+1,a,N);
			}
		}
	}
}

int main()
{
	int a[100];
	int N = 3;
	SinhHoanVi(1,a,N);
	return 0;
}