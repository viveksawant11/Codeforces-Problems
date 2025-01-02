#include<iostream>
using namespace std;

int main() 
{
    int t; 
    cin >> t;
    
    while (t--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        
        int cycleSum = a + b + c;
    
        int fullCycles = n / (a + b + c);
        int distCovered = fullCycles * cycleSum;
        
        int remainingDist = n - distCovered;
        int days = 3 * fullCycles;
        
        if (remainingDist > 0) {
            if (remainingDist <= a)
                days += 1;
            else if (remainingDist <= a + b)
                days += 2;
            else 
                days += 3;
        }
        
        cout << days << endl;
    }
    return 0;
}