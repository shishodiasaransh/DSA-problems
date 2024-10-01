
#include <iostream>
using namespace std;
void swap(int arr[],int a,int b)
{
     int temp;
     temp=arr[a];
     arr[a]=arr[b];
     arr[b]=temp;
}
int main() {
    int n, a[10];
    cout<<"Input the number of elements in the array:";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
            {
                if (a[j]<a[i])
                {
                   swap(a,i,j);
                }
            }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        
    return 0;
}