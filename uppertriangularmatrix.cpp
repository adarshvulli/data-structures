#include<iostream>
using namespace std;

class UTmatrix
{
	int arr[5][5];
	int size;
	int n;
	public:
		UTmatrix(int n)
		{
			this->n = n;
			/*size = (n+1)*n/2;
			arr[0] = new int[size];
			arr[1] = new int[size];
			arr[2] = new int[size];
			arr[3] = new int[size];arr[4] = new int[size];*/
		}

		void create();
		//int element(int i, int j);
		void display();

		~UTmatrix()
		{
			delete [] arr;
		 }
};

void UTmatrix :: create()
{
    cout<<"Enter Element:";
	for(int i = 1; i<=n; i++)
	{
		for(int j=1; j<=n;j++){
		cin>>arr[i][j];
	}
	cout<<endl;
	}
}

/*int LTMatrix :: element(int i, int j)
{
	if((j>n && j<1) || (i>n && j<1))
	{
		cout<<"Element not found"<<endl;
		return 0;
	}

	//if(j>i) return 0;
	int k = (i-1)*i/2;
	return arr[j+k-1];
}*/

void UTmatrix :: display()
{

	for(int i = 1; i<=n; i++)
	{
		int k = (i-1)*i/2;
		for(int j = 1; j<=n ; j++)
		{
			if(j<i) cout<<"0";
			else cout<<arr[i][j];
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

	UTmatrix matrix1(n);
	matrix1.create();
	matrix1.display();

}
