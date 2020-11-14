
int howManyGames(int p, int d, int m, int s) {
    if (p > s) return 0;
    
    int c = 0;
    
    while (s >= p){
        s -= p;
        p = max(p-d, m);
        c++;
    }
    
    return c;
}

/*

20 3 6 80
6

20 3 6 85
7

100 19 1 180    // corner case
1

100 3 1 80      // corner case
0

*/
