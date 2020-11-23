#include<string>
#include<vector>
#include<queue>
using namespace std;

vector<int>solution(vector<int> progresses, vector<int> speeds)
{
	vector<int>answer;
	int check = 0; //���� �Ϸ�Ǿ� �ϴ� �켱���� �۾��� 100%�Ϸ� �Ǵ� �� ����, ���Ҿ� ���� �� �ִ� �۾��� �� ����
	int loop = 0; //���� �Ϸᰡ �Ǿ�� �ϴ� �켱 ���� �۾��� index�� ��Ÿ��, �� �۾��� ���� ������ 1�� ����
	int count = 0; //������ �Ϸ�� �۾����� ������ -> �� �̻��� �۾����� ���� ����(while��)
	queue<int> factory;

	while (count != progresses.size())
	{
		for (int i = loop; i < progresses.size(); i++)
			progresses[i] += speeds[i];
		for (int j = loop; j < progresses.size(); j++)
			factory.push(progresses[j]);
		if (factory.front() < 100)
		{
			while (!factory.empty())
				factory.pop();
		}
		else if (factory.front() >= 100)
		{
			while ((factory.front() >= 100) && (!factory.empty()))
			{
				check++;
				loop++;
				count++;
				factory.pop();
			}
			while (!factory.empty())
				factory.pop();
			answer.push_back(check);
			check = 0;
		}
	}
	return answer;
}