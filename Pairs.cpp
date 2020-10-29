// https://www.hackerrank.com/challenges/pairs/problem

int pairs(int k, vector<int> arr) {
    int pair_count = 0;
    map <int, int> mp;

    for (int i = 0; i < arr.size(); i++){
        if (mp.find(arr[i]+k) != mp.end()){
            pair_count++;
        }
        if (mp.find(abs(arr[i]-k)) != mp.end()){
            pair_count++;
        }
        mp[arr[i]] = 1;
    }

    return pair_count;
}
