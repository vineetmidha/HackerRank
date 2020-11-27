// https://www.hackerrank.com/challenges/insertionsort2/problem

void display(vector<int> a){
    for (auto i: a){
        cout << i << " ";
    }
    cout << endl;
}

void insertionSort2(int n, vector<int> a) {
    for (int i=1; i<n; i++){
        
        int current = a[i];
        
        int j = i;
        
        while (j > 0 && a[j-1] > current){
            a[j] = a[j-1];
            j--;
        }
        
        a[j] = current;
        display(a);
    }
}

/*

Sample Input

6
1 4 3 5 6 2

Sample Output

1 4 3 5 6 2 
1 3 4 5 6 2 
1 3 4 5 6 2 
1 3 4 5 6 2 
1 2 3 4 5 6 

*/
