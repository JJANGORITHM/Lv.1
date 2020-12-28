#include <string>
#include <vector>
#include<algorithm>

using namespace std;

bool cmp(string a, string b) {

    if (a + b > b + a) 
        return true;
    else
        return false;
}

string solution(vector<int> numbers) {
   
    string answer = "";

    vector<string>temp;
    for(int i=0;i<numbers.size();i++)
        temp.push_back(to_string(numbers[i]));
    sort(temp.begin(), temp.end(), cmp);

    for (int i = 0; i < temp.size(); i++)
        answer = answer + temp[i];
    if (answer[0] == '0')return "0";

    return answer;
}