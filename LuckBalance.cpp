// https://www.hackerrank.com/challenges/luck-balance/problem

int luckBalance(int k, vector<vector<int>> contests) {
    vector<int> important;
    int sum = 0;
    
    for (int i=0; i<contests.size(); i++){
        sum += contests[i][0];
        
        if (contests[i][1]==1){
            important.push_back(contests[i][0]);
        }
    }
    
    sort(important.begin(), important.end());
    
    int n = important.size();
    
    for (int i = 0; i < n-k; i++){
        sum -= important[i]*2;
    }
    
    return sum;
}
