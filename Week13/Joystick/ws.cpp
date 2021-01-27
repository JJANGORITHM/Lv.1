#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int checkChar(char c) {
    if (c <= 'N') {
        char a = 'A';
        int x = 0;
        while (c != a + x) {
            x++;
        }
        return x;
    }
    else {
        char a = '[';
        int x = 0;
        while (c != a - x) {
            x++;
        }
        return x;
    }
}

int nextA(int index, string name, int notA[]) {
    for (int i = index + 1; i < name.length(); i++) {
        if (notA[i] == 1)
            return i;
    }
    return 0;
}

int solution(string name) {
    int answer = 0;
    static int* notA = new int[name.length()];
    int lastA = 0;

    for (int i = 0; i < name.length(); i++) {
        if (name[i] != 'A') {
            notA[i] = 1;
            lastA = i;
            answer += checkChar(name[i]);
        }
        else
            notA[i] = 0;
    }

    int move = lastA;
    for (int i = 0; i < name.length(); i++) {
        if (notA[i] == 1) {
            int left = i + i + name.length() - nextA(i, name, notA);
            move = min(move, left);
        }
    }
    answer += move;

    return answer;
}