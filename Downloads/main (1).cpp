#include "iostream"
#include "string"

using namespace std;

string alphabet = "abcdefghijklmnopqrstuvwxyz";

int keycode(char s)
{
	for (int i = 0;i < alphabet.length();i++) {
		if (s == alphabet[i]) return i;
	}
	return 0;
}

string Encrtypt(string text, string key)
{
	string code;
	for (int i = 0;i < text.length();i++) {
		code += alphabet[(keycode(text[i]) + keycode(key[i % key.length()])) % alphabet.length()];
	}
	return code;
}

int main()
{
	string text;
	string key;

	getline(cin, text);
	getline(cin, key);

	cout << Encrtypt(text, key);


}
