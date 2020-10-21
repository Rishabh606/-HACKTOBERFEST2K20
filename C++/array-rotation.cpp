#include <iostream>
using namespace std;

void reverse(int arr[],int l,int h)
{
    int temp;
    while(l<h)
    {
        temp  =  arr[l];
        arr[l]=  arr[h];
        arr[h]=  temp;
        l++;
        h--;
    }
}

void left_rotate_array(int arr[],int n,int d)
{  
    d=d%n; //For corner case when d>n
    
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    
}

void right_rotate_array(int a[],int n,int d)
{
    d=d%n;
    reverse(a,0,n-1);
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    
}

int main() {
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int d;
    cin>>d;
    
    left_rotate_array(a,n,d);
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    right_rotate_array(a,n,d);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
