// https://www.hackerrank.com/challenges/minimum-distances/problem

int minimumDistances(vector<int> a) {
    map<int, int> mp;
    
    int min = -1;
    
    for (int i=0; i<a.size(); i++){
        if (mp.find(a[i]) == mp.end()){
            mp[a[i]] = i;
        } else {
            int index = mp[a[i]];
            int diff = abs(index - i);
            if (min == -1 || diff < min){
                min = diff;
            }
        }
    }
    return min;
}

/*

Input:
7 1 3 4 1 7
1 2 3 4 5

Output:
3
-1

*/
