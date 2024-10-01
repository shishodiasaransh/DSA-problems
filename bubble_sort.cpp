
#include <iostream>
using namespace std;
void swap(int arr[],int a ,int b)
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
    int c=0;
    while (c<n)
    {
        for (int i=0;i<n-c-1;i++)
        {
            if (a[i]>a[i+1])
            {
                swap(a,i,i+1);
            }
        }
        c++;
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        
    return 0;
}
