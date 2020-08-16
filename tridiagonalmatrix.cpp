#include<iostream>
using namespace std;

class Tridiag
{
	int *arr;
	int size;
	int n;
	public:
		Tridiag(int n)
		{
			this->n = n;
			size = 3*n-2;
			arr = new int[size];
		}

		void create();
		int element(int i, int j);
		void display();

		~Tridiag()
		{
			delete [] arr;
		 }
};

void Tridiag :: create()
{

	for(int i = 0; i<size; i++)
	{
		cout<<"Enter Element:";
		cin>>arr[i];
	}
}

/*int Tridiag :: element(int i, int j)
{
	if((j>n && j<1) || (i>n && j<1))
	{
		cout<<"Element not found"<<endl;
		return 0;
	}

	if(j>i) return 0;
	int k = (i-1)*i/2;
	return arr[j+k-1];
}*/

void Tridiag :: display()
{
	for(int i = 1; i<=n; i++)
	{
          for(int j = 1; j<=n ; j++)
		{
			if (i-j==0) cout<<arr[n-1+i-1]<<"\t";
			else if (i-j==1) cout<<arr[i-2]<<"\t";
			else if (i-j==-1) cout<<arr[2*n-1+i-1]<<"\t";
			else cout<<"0"<<"\t";
		}
		cout<<endl;
	}
}

int main()
{
	int n;
	cout<<"Dimension of square matrix"<<endl;
	cin>>n;

	Tridiag matrix1(n);
	matrix1.create();
	matrix1.display();

}
