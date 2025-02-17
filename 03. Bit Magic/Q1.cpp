// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  public static int countSetBits(int n)
    {
 
        // base case
        if (n == 0)
            return 0;
 
        else
 
            // if last bit set add 1 else add 0
            return (n & 1) + countSetBits(n >> 1);
    }
 
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}
  // } Driver Code Ends
