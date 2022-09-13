#include<iostream>

using namespace std;

int main()
{
   int i,j;
int arr[10]={1, 2, 3, 2, 1};
int arr2[10];
for ( i = 0; i < 5; i++)
{
    cout<<arr[i]<<endl;
}

for ( i = 0; i < 6; i++)


{
   for ( j = 0; j < 6; j++)
   {
    arr2[j]=arr[i];
   }
   
}

for ( j = 0; j<6; j++)
{
    cout<<arr2[j];
}



    
}