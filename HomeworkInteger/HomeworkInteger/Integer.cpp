#include "Integer.h"
#include <iostream>

void Integer::Integer1(int l){
	std::cout << l / 100;
}

void Integer::Integer2(int m) {
	std::cout << m / 1000;
}

void Integer::Integer3(int size) {
	std::cout << size / 1024;
}

void Integer::Integer4(int a, int b) {
	std::cout << a/b;
}

void Integer::Integer6(int a) {
	std::cout << a / 10 << std::endl;
	std::cout << a % 10;
}

void Integer::Integer10(int a) {
	std::cout << a % 10 << std::endl;
	std::cout << (a % 100) / 10;
}

void Integer::Integer13(int a) {
	int b = a / 100;
	int newNum = (a % 100) * 10 + b;
	std::cout << newNum;
}

void Integer::Integer16(int a) {
	int aLast = a % 10;
	int aMiddle = (a % 100 - aLast) / 10;
	int newNum = (a / 100) * 100 + (aLast * 10) + aMiddle;
	std::cout << newNum << std::endl;
}

void Integer::Integer19(int time) {
	std::cout << time / 60;
}

void Integer::Integer21(int time) {
	std::cout << time - ((time / 60) * 60);
}

void Integer::Integer23(int time) {
	std::cout << (time % 3600) / 60;
}

void Integer::Integer24(int k) {
	int m = k % 7;
	if (m == 0) {
		m = 7;
	}
	std::cout << m;
}

void Integer::Integer25(int k) {
	int m = (k + 3) % 7;
	if (m == 0) {
		m = 7;
	}
	std::cout << m;
}

void Integer::Integer26(int k) {
	int m = (k + 1) % 7;
	if (m == 0) {
		m = 7;
	}
	std::cout << m;
}

void Integer::Integer27(int k) {
	int m = (k + 5) % 7;
	if (m == 0) {
		m = 7;
	}
	std::cout << m;
}

void Integer::Integer28(int n, int k) {
	int m = (k + (n - 1)) % 7;
	if (m == 0) {
		m = 7;
	}
	std::cout << m;
}

void Integer::Integer29(int a, int b, int c) {
	int sRectangle = a * b;
	int sSquare = c * c;
	int squaresInRectangle;
	int spaceLeft;
	if(sSquare > sRectangle) {
		squaresInRectangle = 0;
		spaceLeft = sRectangle;
	}
	else {
		squaresInRectangle = sRectangle / sSquare;
		spaceLeft = sRectangle - (squaresInRectangle * sSquare);
	}
	std::cout << squaresInRectangle << std::endl;
	std::cout << spaceLeft;
}

void Integer::Integer30(int year) {
	std::cout << ((year - 1) / 100) + 1;
}