// https://www.hackerrank.com/challenges/minimum-absolute-difference-in-an-array/problem

int minimumAbsoluteDifference(vector<int> arr) {
    
    sort(arr.begin(), arr.end());
    
    int min_diff = INT32_MAX;
    
    for (int i=1; i<arr.size(); i++){
        int diff = abs(arr[i] - arr[i-1]);        
        min_diff = min(diff, min_diff);
        
        if (min_diff == 0) break;
    }
    
    return min_diff;
}
