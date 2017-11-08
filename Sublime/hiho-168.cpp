#include <iostream>
using namespace std;

int calc(int N) {
	if(N == 0) return 1;
	if(N % 2 == 0) return calc(N / 2) + calc(N / 2 - 1);
	return calc(N / 2);
}

int main() {
	int N;
	cin >> N;
	cout << calc(N) << endl;
	return 0;
}