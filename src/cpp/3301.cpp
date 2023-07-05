#include <iostream>

using namespace std;

int main() {
	int h, z, l;

	cin >> h >> z >> l;

	if (((h > z) and (h < l)) or ((h < z) and (h > l))) {
		cout << "huguinho" << endl;
	}

	if (((z > h) and (z < l)) or ((z > l) and (z < h))) {
		cout << "zezinho" << endl;
	}

	if (((l > h) and (l < z)) or ((l > z) and (l < h))) {
		cout << "luisinho" << endl;
	}

	return 0;
}
