// https://www.hackerrank.com/challenges/marcs-cakewalk/problem

long marcsCakewalk(vector<int> calorie) {

    sort(calorie.begin(), calorie.end(), greater<int>()); 
    
    long sum = 0;
    
    for (int i = 0; i < calorie.size(); i++){
        sum += pow(2,i) * calorie[i];    
    }
    
    return sum;
}

