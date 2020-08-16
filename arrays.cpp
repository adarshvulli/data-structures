#include <iostream>
using namespace std;
 
class Array{
 
private:
    int* A;
    int size;
    int length;
 
public:
    Array(int size){
        this->size = size;
        A = new int [size];
    }
 
    void create(){
        cout << "Enter number of elements: " << flush;
        cin >> length;
        cout << "Enter the array elements: " << endl;
        for (int i = 0; i < length; i++){
            cout << "Array element: " << i << " = " << flush;
            cin >> A[i];
        }
    }
 
    void display(){
        for (int i = 0; i < length; i++){
            cout << A[i] << " ";
        }
    }
    void append()
    {
    int x;
    cout<<"Enter the element you want to append";
    cin>>x;
    A[length]=x;
    length++;
    }
    
    void insert(int index, int element)
    {
    for(int i=length;i<index;i--)
{
     A[i]=A[i-1];
     }
     A[index]=element;
     length++;
     }
     
     void del(int index)
     {
     for(int i=index;i<length-1;i++)
     {
       A[i]=A[i+1];
       }
       length--;
       }
 
    ~Array(){
        delete[] A;
        cout << "Array destroyed" << endl;
    }
};


int main() {
 int a,index,ind;
 
    Array arr(10);
    arr.create();
    arr.display();
    arr.append();
    arr.display();
    cout<<"\n enter the element you want to insert";
    cin>>a;
    cout<<"\nenter the index where to enter the element";
    cin>>index;
    arr.insert(index,a);
    arr.display();
    cout<<"\nenter the index from where to delete the element";
    cin>>ind;
    arr.del(ind);
    arr.display(); 
     return 0;
}
