// https://www.hackerrank.com/challenges/insertionsort1/problem

void display(vector<int> a){
    for (auto i: a){
        cout << i << " ";
    }
    cout << endl;
}
void insertionSort1(int n, vector<int> a) {
    int current = a[n-1];
    
    int j = n-1;
    
    while (j > 0 && a[j-1] > current){
        a[j] = a[j-1];
        j--;
        display(a);
    }
    
    a[j] = current;
    display(a);
}

/*

Sample Input

5
2 4 6 8 3

Sample Output

2 4 6 8 8 
2 4 6 6 8 
2 4 4 6 8 
2 3 4 6 8 

*/
