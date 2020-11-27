// https://www.hackerrank.com/challenges/runningtime/problem

int runningTime(vector<int> a) {
    int shifts = 0;
    int n = a.size();
    for (int i=1; i<n; i++){
        
        int current = a[i];
        
        int j = i;
        
        while (j > 0 && a[j-1] > current){
            a[j] = a[j-1];
            j--;
            shifts++;
        }
        
        a[j] = current;
    }
    return shifts; 
}

/*

Sample Input

5
2 1 3 1 2

Sample Output

4

*/
