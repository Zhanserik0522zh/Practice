#include "iostream"
#include "string"
#include "cmath"

using namespace std;


int main() {
	int number, p = 5, q = 7, mod, e ,phi;

	string text;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	cout << "Encrypt (1) Or Decrypt (2)" << endl;
	cin >> number;
	cin >> text;
	mod = p * q;
	phi = (p - 1) * (q - 1);

	for (int i = 4;i < (phi * phi);i++) {
		if (((i * i) % 24) == 1)
		{
			for (int j = 2;j < phi; j++) {
				phi / j != e;
			}
			e = i;
			break;
		}
		else {
			continue;
		}
	}

	if (number != 1 && number != 2) {
		cout << "Error";
	}

	if (number == 1) {
		for (int i = 0;i < alphabet.length(); i++) {
			if (i == text[i]) {
				cout << alphabet[pow((i, e) * 1.0) % (1.0 * mod)];
			}
			else {
				continue;
			}
		}


		if (number == 2) {
			for (int d = 1;d < alphabet.length(); d++) {
				if ((e * d % phi) == 1) {
					cout << alphabet[pow(alphabet[d], d) % 21 ) * 1.0];
				}
				else {
					continue;
				}
			}
		}
		return 0;
	}
}


