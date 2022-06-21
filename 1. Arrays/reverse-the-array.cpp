#include <iostream>
using namespace std;

//Constant to define fast input output operations
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

//Function to reverse an array
void arrayReverse(int arr[], int n){
    for(int i = 0; i < n/2; ++i){
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

//Driver Code
int main() 
{
	fastio;

    int n;
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; ++i)
        cin>>arr[i];

    arrayReverse(arr, n);

    for(int i = 0; i < n; ++i)
        cout<<arr[i]<<" ";
    
	return 0;
}