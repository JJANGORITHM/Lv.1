#include <string>
#include <vector>
#include<iostream>
#include<algorithm>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    string temp;
    vector<int>size;
    int pre_min;
    int min;
    answer = skill_trees.size();

    for (int i = 0; i < skill_trees.size(); i++) {
        for (int j = 0; j < skill.size(); j++) {
            size.push_back(skill_trees[i].find(skill[j]));
        }
        if (is_sorted(size.begin(), size.end()) == false)
            answer--;
        else {
            for (int k = 0; k < size.size() - 1; k++) {
                for (int i = k + 1; i < size.size(); i++) {
                    if (size[k] < 0 && size[i]>=0){
                        answer--;
                        break;
                    }
                }
            }
        }//���ĵǾ��ִ��� Ȯ��->�ȵǾ������� -1
        //�߰��� -1�ִµ� �ڿ� ���� 0�̻��̸� -1
        for (int i = 0; i < size.size(); i++)
            cout << size[i] << ' ';
        size.clear();
    }
    return answer;
}

int main() {
    vector<string>skill_trees = { "BACDE", "CBADF", "AECB", "BDA" };
    string skill = { "CBD" };
    int answer = solution(skill, skill_trees);
    cout << solution(skill, skill_trees) << endl;
    cout << answer;
    
    
}