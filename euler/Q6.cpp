#include<iostream>
using namespace std;
int square(int num) {
	int sq;
	sq = num * num;
	return sq;
}
int main() {
	int sum = 0, sum2 = 0;
	for (int i = 1; i <= 100; i++) {
		sum += square(i);
		sum2 += i;
	}
	sum2 = square(sum2);
	cout << "���� ������ ������ �� ���̴� " << sum2 - sum << endl;
	return 0;
}