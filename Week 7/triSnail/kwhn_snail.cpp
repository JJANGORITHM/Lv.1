#include<string>
#include<vector>
#include<map>
using namespace std;

vector<int>solution(int n)
{
	int snail[1000][1000]; //n�� 1000�� max�̹Ƿ� ���Ƿ� �������� 2���� �迭(level, order)
	int start = 0;
	vector<int>answer;

	for (int j = 0; j < n; j++) //�����Ⱚ ��� ������ ����, ������ �ش��ϴ� ���� �� ���� �� 0���� �ʱ�ȭ
	{
		for (int p = n - j; p < n+1; p++)
		{
			snail[j][start] = 0;
			start++;
		}
		start = 0;
	}
	int check = 0;
	int value = 1;
	int level = 0;
	int order = 0;
	int loop = n;
	int count = 0;

	do
	{
		switch (check % 3)
		{
			case 0:
			{
				while (count != loop)
				{
					snail[level][order] = value;
					value++;
					level++;
					count++;
				}
				count = 0;
				loop--;
				level--;
				order++;
				check++;
				break;
			}
			case 1:
			{
				while (count != loop)
				{
					snail[level][order] = value;
					value++;
					order++;
					count++;
				}
				count = 0;
				loop--;
				level--;
				order -= 2;
				check++;
				break;
			}
			case 2:
			{
				while (count != loop)
				{
					snail[level][order] = value;
					value++;
					level--;
					order--;
					count++;
				}
				count = 0;
				loop--;
				check++;
				order++;
				level += 2;
				break;
			}
		}
	} while (loop > 0);

	int start2 = 0;

	for (int j = 0; j < n; j++)
	{
		for (int p = n - j; p < n + 1; p++)
		{
			answer.push_back(snail[j][start2]);
			start2++;
		}
		start2 = 0;
	}
	return answer;
}