#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
	int answer = 0;
	queue<pair<int, int>> q;
	priority_queue<int> pq;

	int cnt = 0;

	for (int i = 0; i < priorities.size(); i++) {
		q.push(pair<int, int>(i, priorities[i]));
		pq.push(priorities[i]);
	}
	
	int count = 0;
	while (1) {
		if (q.front().second == pq.top()) { // 인쇄
			if (q.front().first == location) {
				count++;
				break;
			}
			q.pop();
			pq.pop();
			count++;
		}
		else {
			q.push(q.front());
			q.pop();
		}
	}
	answer = count;

	return answer;
}