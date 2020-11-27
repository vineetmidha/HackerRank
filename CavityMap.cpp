// https://www.hackerrank.com/challenges/cavity-map/problem

bool isCavity(vector<string> grid, int i, int j){
    char cell = grid[i][j];
    
    char up = grid[i-1][j];
    char down = grid[i+1][j];
    char left = grid[i][j-1];
    char right = grid[i][j+1];
   
    if (cell > up && cell > down && cell > left && cell > right)
        return true;
    else 
        return false;
}
vector<string> cavityMap(vector<string> grid) {
    if (grid.size()==2){
        return grid;
    }
    for (int i=1; i<grid.size()-1; i++){
        for (int j=1; j<grid[i].size()-1; j++){
            if (isCavity(grid, i, j)){
                grid[i][j] = 'X';
            }           
        }
    }
    
    return grid;
}

/*

Sample Input

4
1112
1912
1892
1234

Sample Output

1112
1X12
18X2
1234

*/
