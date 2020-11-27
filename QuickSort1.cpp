// https://www.hackerrank.com/challenges/quicksort1/problem

vector<int> quickSort(vector<int> a) {
    int left = 0;
    
    int right = a.size()-1;

    int pivot = a[left++];
    
    while (left <= right){
        while (left <= right && a[left] <= pivot){
            left++;
        }
        
        while (left <= right && a[right] >= pivot){
            right--;
        }
        
        cout << left << " " << right << endl;
        
        if (left <= right){
            int t = a[left];
            a[left] = a[right];
            a[right] = t;
            
            left++;
            right--;
        }
        else {
            int t = a[0];
            a[0] = a[right];
            a[right] = t;
        }
    }

    return a;
}

/*

Sample Input

5
4 5 3 7 2

Sample Output

3 2 4 5 7

*/
