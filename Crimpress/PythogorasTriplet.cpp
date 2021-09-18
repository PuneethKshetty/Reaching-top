#include <algorithm> 
#include <iostream>   
#include <math.h> 
using namespace std; 

void findTriplet(int arr[], int n) 
{ 
  // Step 1
  for (int i = 0; i < n; i++) 
    arr[i] = arr[i] * arr[i]; 

  // Sort array elements 
  sort(arr, arr + n); 

  // Step 2 and Step 3 
  for (int i = n - 1; i >= 2; i--) {  // Fixing a
    int b = 0;    // Fixing b
    int c = i - 1;    // Fixing c
    while (b < c) { 
      // A triplet found 
      if (arr[b] + arr[c] == arr[i]){
        cout << "Triplet: "<< sqrt(arr[b]) <<", "<< sqrt(arr[c]) <<", "<< sqrt(arr[i])<<"\n"; 
        b++;
        c--;
      }

      // Else either move 'b' or 'c' 
      else if (arr[b] + arr[c] < arr[i]) {
        b++;
      }
      else { 
        c--; 
      }
    } 
  } 
} 
  
// Driver code
int main() 
{ 
  int arr[] = { 10, 4, 6, 12, 5 }; 
  int n = sizeof(arr) / sizeof(arr[0]); 
  findTriplet(arr, n);
  return 0; 
} 
