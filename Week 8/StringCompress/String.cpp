#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<algorithm>

using namespace std;

int solution(string s) {
	int answer = 0;
	int loop = 1; //�ɰ��� ����� ��
	vector<int> result; //loop���� �ɰ��� ������ ���� ���� ����

	if (s.length() == 1)
		return 1;
	else
	{
		while (loop <= s.length() / 2)
		{
			int measure = 0;
			int count = 0; //���ڿ� ���� ���� ��ġ
			string tmp = ""; //������ ���ڿ� �ӽ� ���� -> test queue�� ����
			int num = 1;
			string tpa = s.substr(0, loop);
			count += loop;

			for (measure; measure < (s.length() / loop); measure++)
			{
				if (tpa == s.substr(count, loop))
					++num;
				else
				{
					if (num == 1)
						tmp = tmp + tpa;
					else
						tmp = tmp + to_string(num) + tpa;
					num = 1;
					tpa = s.substr(count, loop);
				}
				count += loop; //���� ��ġ ����
			} //�ɰ��� �����ϱ�

			int nam = (s.length() % loop); //������ ���� ����
			result.push_back(tmp.length() + nam);
			loop++;
		}
		answer = *min_element(result.begin(), result.end());
		return answer;
	}
}