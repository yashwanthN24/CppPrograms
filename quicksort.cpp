#include<iostream>
using namespace std;
void printdata(int a[] , int n )
{
    int i ; 
    for(i = 0 ; i<n ; i++)
    {
        cout << a[i] << " " ; 
    }
    cout << endl ; 
}
int partition(int a[] , int low , int high)
{
    int pivot = a[high];
    int i = low -1 , temp ; 
    for(int j = low ; j<high ; j++)
    {
        if(a[j] < pivot)
        {
            i++ ; 
            temp = a[i];
            a[i]= a[j];
            a[j]= temp ; 
        }
    }
    i++;
    temp = a[i];
    a[i]=a[high];
    a[high]=temp ;
    return i ; 
}
void quicksort(int a[] , int low , int high)
{
    if(low < high)
    {
        int pivotindex = partition(a , low , high);
        quicksort(a , low , pivotindex-1);
        quicksort(a , pivotindex+1 , high);
    }
}

int main()
{
    int a[50] , n , i ; 
    cout << "Enter the number of elements" << endl ; 
    cin >> n ; 
    cout << "Enter " << n  << "elements of array :" << endl;
    for(i = 0 ; i<n ; i++)
    {
        cin >> a[i];
    }
    quicksort(a , 0 , n-1);
    printdata(a , n );

}
