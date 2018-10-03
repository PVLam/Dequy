
#include <iostream>
using namespace std;

void Sinh(int pos, int a[], int N)
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
		for (int i = 0; i<=1 ; ++i)
		{
			a[pos -1] = i;
			Sinh(pos+1,a,N);
		}
	}


}

int main()
{
	int a[100];
	int N = 3;
	Sinh(1,a,N);
	return 0;
}