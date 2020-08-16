#include<iostream>
using namespace std;

class symmetric
{
	int *arr;
	int size;
	int n;
	public:
		symmetric(int n)
		{
			this->n = n;
			size = (n+1)*n/2;
			arr = new int[size];
		}

		void create();
		int element(int i, int j);
		void display();

		~symmetric()
		{
			delete [] arr;
		 }
};

void symmetric :: create()
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

void symmetric :: display()
{
	for(int i = 0; i<n; i++)
	{

		for(int j=0 ; j<n ; j++)
		{
			if (i==j) cout<<arr[i*(i+3)/2]<<" ";
			else if (i>j)  cout<<arr[i*(i+1)/2+j]<<" ";
			else cout<<arr[j*(j+1)/2+i]<<" ";

					}
		cout<<endl;
	}
}

int main()
{
	int n;
	cout<<"Dimension of square matrix"<<endl;
	cin>>n;

	symmetric matrix1(n);
	matrix1.create();
	matrix1.display();

}
