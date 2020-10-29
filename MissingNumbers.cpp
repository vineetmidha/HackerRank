// https://www.hackerrank.com/challenges/missing-numbers/problem

vector<int> missingNumbers(vector<int> other, vector<int> original) {
    vector<int> result;

    map<int, int> mp;

    for (int i = 0; i < original.size(); i++){
        mp[original[i]]++;
    }

    for (int i = 0; i < other.size(); i++){
        mp[other[i]]--;
    }

    for (auto i : mp){
        if (i.second != 0){
            result.push_back(i.first);
        }
    }

    return result;
}

/*

Sample Input

10
203 204 205 206 207 208 203 204 205 206
13
203 204 204 205 206 207 205 208 203 206 205 206 204

Sample Output

204 205 206

*/
