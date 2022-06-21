#include <iostream>
using namespace std;

//Constant to define fast input output operations
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

//Function to find max element
int maxElement(int *arr, int n){
    int max = arr[0];

    for(int i = 1; i < n; ++i){
        if(max < arr[i])
            max = arr[i];
    }

    return max;
}

//Function to find min element
int minElement(int *arr, int n){
    int min = arr[0];

    for(int i = 1; i < n; ++i){
        if(min > arr[i])
            min = arr[i];
    }

    return min;
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

    int max = maxElement(arr, n);
    int min = minElement(arr, n);
    
    cout<<"Max Element: "<<max;
    cout<<"\nMin Element: "<<min;

	return 0;
}