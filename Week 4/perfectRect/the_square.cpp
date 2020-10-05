using namespace std;
long long gcd(long long a, long long b)
{
	if (b == 0) return a;
	else return gcd(b, a%b);
}

long long solution(int w, int h) { //�޸� ���� overflow ������ long Ÿ�� ���
	long long answer = 1;
	long long a = w;
	long long b = h;
	if ((a == 1) || (b == 1)) //w, h �� �� �ϳ��� 1�̸�, 0��
		answer = 0;
	else
	{
		if (gcd(a, b) == 1)
			answer = ((a*b) - (a + b - 1));
		else
			answer = ((a*b) - (a + b - gcd(a, b)));
	}
	return answer;
}