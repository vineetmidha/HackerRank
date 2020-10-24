// https://www.hackerrank.com/challenges/icecream-parlor/problem

vector<int> icecreamParlor(int m, vector<int> arr) {
    vector<int> result;
    unordered_map<int, int> mp;

    for (int i = 0; i < arr.size(); i++)
    {
        if (mp.find(m-arr[i]) != mp.end())
        {
            result.push_back(mp[m-arr[i]]+1);
            result.push_back(i+1);
            break;
        }
        mp[arr.at(i)] = i;
    }
    return result;
}

/*

Sample Input

2  // test cases
4   // m
5   // total costs 
1 4 5 3 2  // individual cost
4
4
2 2 4 3

Sample Output

1 4
1 2

*/
