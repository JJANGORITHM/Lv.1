#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;
	vector<int> deposit; //����� �迭 �Ϻθ� �����ϴ� ��
	for (int i = 0; i < commands.size(); i++) //2���� �迭 commands�� ������ ��ŭ for�� �ݺ��ؼ� answer�� ���� �־���
	{
		deposit.assign(array.begin() + commands[i][0] - 1, array.begin() + commands[i][1]);//���� ���� ������ -1 ���� ���� ���� ���� �������� deposit�� ����
		sort(deposit.begin(), deposit.end()); //������ �迭 ������������ ����
		answer.push_back(deposit[commands[i][2] - 1]); //commands[i][2] ��° index, �� Ž����ġ�� �ִ� ���� answer �迭�� ����
	}
	return answer;
}