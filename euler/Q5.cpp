#include<iostream>
using namespace std;
//1 ~10 ������ � ���ε� ������ �������� ���� ���� ���� 2520�Դϴ�.
//�׷��� 1 ~20 ������ � ���ε� ������ �������� ���� ���� ���� ���Դϱ� ?
int main() {
	int a = 21;
	while (1) {
		for (int i = 1; i <= 20; i++) {
			if ((a%i) != 0) break;
			if (i == 20) goto finish;
		}
		a++;
	}
finish:
	cout << "1 ~20 ������ � ���ε� ������ �������� ���� ���� ���� " << a << endl << endl;
	return 0;
}