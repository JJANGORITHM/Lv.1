#include <string>
#include <vector>

using namespace std;

int abs(int num1) {
    if (num1 >= 0) return num1;
    else return (-1) * num1;
}

int solution(string name) {
    int answer = 0;
    int up, left, right, down = 0;
    if (name.length() == 1)
        return int(name[0]) - int('A');
    else {
        up = int(name[0]) - int('A');
        if (abs(int(name[1]) - int('A') >= int(name[name.length() - 1]) - int('A'))) {
            for (int i = name.length(); i > 0;i--) {
                answer += 1;
                answer += abs(int(name[i]) - int('A'));
            }
        }
        else {
            for (int i = 1; i < name.length(); i++) {
                answer += 1;
                answer += abs(int(name[i]) - int('A'));
            }
                
        }
    }
    return answer;
}