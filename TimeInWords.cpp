// https://www.hackerrank.com/challenges/the-time-in-words/problem

string units[] = {"","one","two","three","four","five","six","seven","eight","nine","ten"};
string teens[] = {"","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eightee","nineteen"};
string tens[] = {"","ten","twenty","thirty","forty","fifty"};

string getWords(int hm)
{
    string hours_min = "";
    
    if (hm <= 10)
        hours_min += units[hm];
    else if (hm < 20)
        hours_min += teens[hm%10];
    else
    {
        hours_min += tens[hm/10];
        if (hm%10 > 0)
            hours_min += " " + units[hm%10];        
    }
    
    return hours_min; 
}

string timeInWords(int h, int m) {
    string stime;
    
    if (m == 0)
        stime = getWords(h) + " o\' clock";
    else if (m > 0 && m < 30)
        if (m == 15)
            stime = "quarter past " + getWords(h);
        else
            stime = getWords(m) + (m==1 ? " minute past ":" minutes past ") + getWords(h);
    else if (m == 30)
        stime = "half past " + getWords(h);
    else if (m > 30 && m < 60)
        if (m == 45)
           stime = "quarter to " + getWords(h+1);
        else
            stime = getWords(60-m)+((m==1 or 60-m==1)?" minute to ":" minutes to ") + getWords(h+1);
            
    return stime;
}

/*

Sample Input 0

5
47

Sample Output 0

thirteen minutes to six

Sample Input 1

3
00

Sample Output 1

three o' clock
Sample Input 2

7
15

Sample Output 2

quarter past seven

*/
