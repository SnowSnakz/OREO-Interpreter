#include <iostream>
#include <fstream>

using namespace std;

void error(int l, int i) {
	cout << "Error at line: " << l << ", column: " << i << endl << "Invalid Character";
}

int main(int argc, char** argv)
{ 
	for (int j = 0; j < argc; j++) {
		char accumulator = 0;
		ifstream input;

		input.open(argv[j], ios::in);

		std::string text;
		char c;
		int i = 0;
		int l = 1;
		unsigned int ptr = 0;

		while (true)
		{
			c = input.get();
			i++;

			if (c == '\n') {
				l++;
				i = 0;
				continue;
			}

			if (c == EOF) {
				break;
			}

			if (c != 'O' && c != 'R' && c != '&') {
				error(l, i);
				break;
			}

			if (c == 'O') {
				ptr++;
				while (ptr > text.length()) text += ' ';
			}

			if (c == 'R') {
				if (input.get() != 'E') {
					error(l, i);
					break;
				}
				else {
					accumulator++;
				}
			}

			if (c == '&') {
				if (input.get() != 'O') {
					error(l, i);
					break;
				}
				else {
					text[ptr - 1] = accumulator;
					accumulator = 0;
				}
			}
		}

		cout << text.c_str();
	}

	return 0;
}
