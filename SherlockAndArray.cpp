// https://www.hackerrank.com/challenges/sherlock-and-array/problem?utm_campaign=challenge-recommendation&utm_medium=email&utm_source=24-hour-campaign


string balancedSums(vector<int> arr) {
    if (arr.size()==1) return "YES";

    int left_sum = 0;
    int right_sum = 0;

    for (int i = 0; i < arr.size(); i++){
        right_sum += arr[i];
    }

    right_sum -= arr[0];

    for (int i = 1; i < arr.size(); i++){
        if (left_sum == right_sum)
            return "YES";

        left_sum += arr[i-1];
        right_sum -= arr[i];
    }
    
    return "NO";
}

/*

Sample Input 0

2
3
1 2 3
4
1 2 3 3

Sample Output 0

NO
YES

Sample Input 1

3
5
1 1 4 1 1
4
2 0 0 0
4
0 0 2 0 

Sample Output 1

YES
YES
YES

*/
