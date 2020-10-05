#include <iostream>

using namespace std;

long long solution(int w, int h) {
	long long answer = 0;

	long long w_ = w;
	long long h_ = h;

	for (int y = 1; y < h; y++) 
		answer += (double)((w_ * h_) - (w_ * y)) / h_;	

	return answer * 2;
}

	//for (int x = 1; x < w; x++) {
	//	for (int y = 1; y < h; y++) {
	//		if (w_ * y <= -h_ * x + (w_ * h_))
	//			answer++;
	//		else
	//			break;
	//	}
	//}

	////w = 8, h = 12�� ���� ���簢�������� ���簢�� 96�� ��밡��(8*12)
	////�밢������ ������ �� 16���� ����� �� ����
	////���簢���� �� -> w(h)��ŭ ������
	////���簢���� �� -> min(w,h)*2��ŭ ������

	//// 1x1 -> 1

	//// 1x2 -> 2
	//// 2x1 -> 2
	//// 2x2 -> 2

	//// 1x3 -> 3
	//// 3x1 -> 3
	//// 2x3 -> 4	
	//// 3x2 -> 4
	//// 3x3 -> 3

	//// 1x4 -> 4
	//// 4x1 -> 4
	//// 2x4 -> 4
	//// 4x2 -> 4
	//// 3x4 -> 6
	//// 4x3 -> 6
	//// 4x4 -> 4

	//// 1x2 -> 2x3 -> 3x4 -> 4x5 -> 5x6 -> ...
	//// 2   -> 4   -> 6   -> 8   -> 10  -> ...
	//long long answer = 1;
	//if (w == h)
	//	answer = ((long long)w * h) - w;
	//else
	//	answer = ((long long)w * h) - (min(w, h)*2);

	//return answer;


int main() {
	int w = 8, h = 12;

	std::cout << solution(w, h);
	return 0;
}