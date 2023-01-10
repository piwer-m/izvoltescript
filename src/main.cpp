#include "is.h"

int main() {
	setlocale(LC_ALL, "ru");
	int mode; std::cin >> mode;

	if (mode == 1) {
		std::ifstream code;
		code.open("main.is");
		std::ofstream output;
		output.open("compiled.cpp");
		if ((code.is_open()) && (output.is_open())) {
			std::string s = "";
			output << "#include \"is.h\"";
			output << "\n\n\nint execute_is() {";
			while (getline(code, s)) {
				output << "\n\t" << s;
			}
			output << "\n}";
		}
	}
	else {
		execute_is();
		system("pause");
	}
}
