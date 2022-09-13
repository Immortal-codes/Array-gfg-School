#include <iostream> 
#include <algorithm>

using namespace std;

int main()


{
    int i;
    int n=3;
    int arr[8]={1, 2, 3, 4, 5, 6, 7, 8};
    for ( i = 0; i < 10; i++)
    {
        
        cout<<arr[i]<<endl;
        i=n;
        swap(arr[i],arr[n-i]);
    }
     cout<<arr[i]<<endl;
    
    
}