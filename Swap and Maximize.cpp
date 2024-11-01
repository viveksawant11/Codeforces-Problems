#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int maxAbsoluteDifferenceSum(vector<int>& arr) {
  int n = arr.size();
  // Step 1: Sort the array
  ort(arr.begin(), arr.end());

  // Step 2: Arrange in the order of min, max, min, max, ...
  vector<int> rearranged;
  int left = 0, right = n - 1;
  
  while (left <= right) {
      if (left == right) {
          rearranged.push_back(arr[left]);
      } else {
          rearranged.push_back(arr[left]);
          rearranged.push_back(arr[right]);
      }
      left++;
      right--;
  }

  // Step 3: Calculate the sum of absolute differences using long long to avoid overflow
  int maxSum = 0;
  for (int i = 0; i < n; i++) {
      maxSum += abs(rearranged[i] - rearranged[(i + 1) % n]);
  }
  
  return maxSum;
}

int main() {
  vector<int> arr = {4, 2, 1, 8}; 
  cout << "Maximum Sum of Absolute Differences: " << maxAbsoluteDifferenceSum(arr) << endl;
  return 0;
}
