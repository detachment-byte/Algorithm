#include <iostream>
using namespace std;

int main00() {
	int arr[] = {4,5};
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
		cout << arr[i] << " " << endl;
	}
	char a;
	cin >> a;
	return 0;
}