#include<iostream>
using namespace std;

class LTMatrix
{
	int *arr;
	int size;
	int n;
	public:
		LTMatrix(int n)
		{
			this->n = n;
			size = (n+1)*n/2;
			arr = new int[size];
		}

		void create();
		//int element(int i, int j);
		void display();

		~LTMatrix()
		{
			delete [] arr;
		 }
};

void LTMatrix :: create()
{

	for(int i = 0; i<size; i++)
	{
		cout<<"Enter Element:";
		cin>>arr[i];
	}
}

/*int LTMatrix :: element(int i, int j)
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

void LTMatrix :: display()
{
	for(int i = 1; i<=n; i++)
	{
		int k = (i-1)*i/2;
		for(int j = 1; j<=n ; j++)
		{
			if(j>i) cout<<"0";
			else cout<<arr[j+k-1];
			cout<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int n;
	cout<<"Dimension of square matrix"<<endl;
	cin>>n;

	LTMatrix matrix1(n);
	matrix1.create();
	matrix1.display();

}
