// C++ program to implement
// the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to get the count
// of elements that satisfy
// the given condition.
// int equvInverse(float arr[],
// 				int N)
// {
// 	// Stores count of elements
// 	// that satisfy the condition
// 	int cntElem = 0;

// 	// Traverse the given array.
// 	for (int i = 0; i < N-1; i++) {
//         for(int j=0;i<N-1;j++)
// 		// If square of current
// 		// element is equal to 1
//         {
// 		if ((arr[i] * arr[j])>=(arr[i]+arr[j]))
// 	    {
// 			cntElem++;
// 		}
// 	}
//     }
// 	return cntElem;
// }

// Driver Code
int main()
{
	float arr[] = { 0.5,1.5,2.0,2.0,3.0,5.02 };
	int N = sizeof(arr) / sizeof(arr[0]);
    // cout<<N;
    // float b=;
    // int count=0;
    // // float c=];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
        {
	if(((arr[i]+arr[j])>=(arr[i]*arr[j])));
	// // cout << equvInverse(arr, N);
    // {
    //     count++;
    }
        }
    // }
}
