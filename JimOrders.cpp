// https://www.hackerrank.com/challenges/jim-and-the-orders/problem

vector<int> jimOrders(vector<vector<int>> orders) {

    multimap<int,int> m;

    for (int i=0; i<orders.size(); i++)
    {
        m.insert(make_pair(orders[i][0]+orders[i][1], i+1));
    }   
    
    vector<int> result;
    
    for(auto me: m)
    {
        result.push_back(me.second);
    }   
    
    return result;
}
