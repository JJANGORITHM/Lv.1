#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(vector<int> numbers) {
	string answer = "";
	string tempo = "";
	int size = numbers.size(); //���� ������ ��
	vector<string> result;
	vector<int> por;
	vector<int> sta;

	vector<pair<string, string>> ppp;

	for (int i = 0; i < size; i++)
		tempo += to_string(numbers[i]);
	int container = tempo.size(); //������ ���ڿ� ���̸� ����
	
	for (int k = 0; k < container; k++)
		result.push_back(to_string(numbers[k])); //���ڿ� ���Ϳ� �ٽñ� ����

	for (int j = 0; j < container; j++)
		sta.push_back(stoi(result[j].substr(0, 1)));

	for(int p = 0; p < )
	ppp.push_back(make_pair())

	sort(sta.begin(), sta.end());


	for (int j = 0; j < container; j++)
		por.push_back(result[j].length());
	
	
	
	

	return answer;
}

void main()
{

}