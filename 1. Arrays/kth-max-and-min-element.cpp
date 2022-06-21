#include <iostream>
using namespace std;

//Constant to define fast input output operations
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

//Function to sort the array
void BubbleSortArray(int arr[], int n){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n - i; ++j){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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

    int k;
    cin>>k;

    BubbleSortArray(arr, n);

    int max = arr[n - k];
    int min = arr[k - 1];
    
    cout<<"Kth Max Element: "<<max;
    cout<<"\nKth Min Element: "<<min;

	return 0;
}