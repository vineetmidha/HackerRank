
// https://www.hackerrank.com/challenges/priyanka-and-toys/problem

int toys(vector<int> w) {
    sort(w.begin(), w.end());
    
    int min = w[0];
    int c = 1;
    
    for (int i=0; i<w.size(); i++){
        if (w[i] - min > 4){
            c++;
            min = w[i];
        }
    }

    return c;
}
