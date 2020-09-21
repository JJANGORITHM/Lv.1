#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
	int answer = 0;
	vector<int> students(n, 1); //�л����� ü���� ������ 1�� �ʱ�ȭ
	for (int i = 0; i < n; i++) //lost �迭�� �ִ� ������ �ش��ϴ� �л����� ü���� ������ --�� ��
	{
		for (int j = 0; j < lost.size(); j++)
		{
			if ((i + 1) == lost[j])
			{
				students[i]--;
			}
		}
	}

	for (int i = 0; i < n; i++) //reserve �迭�� �ִ� ������ �ش��ϴ� �л����� ü���� ������ ++�� ��
	{
		for (int j = 0; j < reserve.size(); j++)
		{
			if ((i + 1) == reserve[j])
			{
				students[i]++;
			}
		}
	}

	for (int k = n - 1; k > 0; k--) //�ڿ� �ִ� �л��� �� 2�� ,�տ� �ִ� �л��� �� 0���̸� �տ� �л����� �����ش�
	{
		if ((students[k] == 2) && (students[k - 1] == 0))
		{
			students[k]--;
			students[k - 1]++;
		}
	}

	for (int i = 0; i < students.size() - 1; i++) //�տ� �ִ� �л��� �� 2 ��, �ڿ� �ִ� �л��� �� 0���̸� �ڿ� �л����� �����ش�
	{
		if ((students[i] == 2) && (students[i + 1] == 0))
		{
			students[i]--;
			students[i + 1]++;
		}
	}



	for (int a = 0; a < students.size(); a++) //������ ���鼭, �迭 ���� 0���� ũ�� answer++ �����ش�.
	{
		if (students[a] > 0)
			answer++;
	}

	return answer;
}