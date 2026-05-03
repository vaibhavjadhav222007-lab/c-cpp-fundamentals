
#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];   

    
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    
    cout << "\nArray elements: ";
    for(int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }

    
    int sum = 0;
    for(int i = 0; i < n; i++) 
    {
        sum += arr[i];
    }
    cout << "\nSum = " << sum;

    
    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i < n; i++) 
    {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "\nMaximum = " << max;
    cout << "\nMinimum = " << min;

    
    cout << "\nReverse order: ";
    for(int i = n-1; i >= 0; i--) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}