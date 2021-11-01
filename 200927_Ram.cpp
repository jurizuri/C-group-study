#include <iostream>
#include <string>
#include "Ram.h"
using namespace std;

Ram::Ram() {
	for (int i = 0; i < 1000 * 1024; i++) {
		mem[i] = 0;
	}
	size = 1000 * 1024;
}
Ram::~Ram() {
	cout << "메모리 제거됨" << endl;
}

char Ram::read(int address) {
	return mem[address];
}
void Ram::write(int address, char value) {
	mem[address] = value;
}

int main() {
	Ram ram;
	ram.write(1000, 20);
		ram.write(1001, 30);
		char res = ram.read(1000) + ram.read(1001);
		ram.write(1002, res);
		cout << "1002번지의 값 = " << (int)ram.read(1002) << endl;

		return 0;
}