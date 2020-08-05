#include<iostream>
using namespace std;

void set(int *A,int i , int j , int x)

{
    if(i==j){
        A[i-1]=x;
    }

}
int get (int A[], int i , int j )
{
    if(i==j)
        return A[i-1];
    else
        return 0;
}

void display(int A[])
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++){
               if (i==j)
                 cout<<A[i-1]<<" ";
        else
            cout<<"0"<<" ";

        }
        cout<<endl;
    }

}
int main()
{
    int *A;
    A=(int *)malloc(4*sizeof(int));
    //int n;
    //cout<<"enter the order";
//    cin>>n;
    set(A,0,0,3);set(A,1,1,5);set(A,2,2,7),set(A,3,3,9);
    display(A);
    return 0;
}
