#include<iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 8, 10, 11, 12, 19};
int i;
int k=5;
int count=0;
int less=0;
    for ( i = 0; i < 7; i++)
    {
        if (arr[i]<k)
        {
            less++;
        }
        else{
             count++;
        }
       
        
    }
    cout<<less<<endl;
    cout<<count<<endl;
    
}