#include "Integer.h"
#include <iostream>

void Integer::Integer1(int l){
	std::cout << l / 100 << std::endl;
}

void Integer::Integer2(int m) {
	std::cout << m / 1000 << std::endl;
}

void Integer::Integer3(int size) {
	std::cout << size / 1024 << std::endl;
}

void Integer::Integer4(int a, int b) {
	std::cout << a/b << std::endl;
}

void Integer::Integer6(int a) {
	std::cout << a / 10 << std::endl;
	std::cout << a % 10 << std::endl;
}

void Integer::Integer10(int a) {
	std::cout << a % 10 << std::endl;
	std::cout << (a % 100) / 10 << std::endl;
}

void Integer::Integer13(int a) {
	int b = a / 100;
	int newNumber = (a % 100) * 10 + b;
	std::cout << newNumber << std::endl;
}

void Integer::Integer16(int a) {
	int Last = a % 10;
	int Middle = (a % 100 - Last) / 10;
	int hundreds = (a / 100) * 100;
	int newNumber = hundreds + (Last * 10) + Middle;
	std::cout << newNumber << std::endl;
}

void Integer::Integer19(int time) {
	std::cout << time / 60 << std::endl;
}

void Integer::Integer21(int time) {
	int minutes = time / 60;
	std::cout << time - (minutes * 60) << std::endl;
}

void Integer::Integer23(int time) {
	int minutes = time % 3600;
	std::cout << minutes / 60 << std::endl;
}

void Integer::Integer24(int k) {
	int m = k % 7;
	std::cout << m << std::endl;
}

void Integer::Integer25(int k) {
	int m = (k + 3) % 7;
	std::cout << m << std::endl;
}

void Integer::Integer26(int k) {
	int m = k % 7 + 1;
	std::cout << m << std::endl;
}

void Integer::Integer27(int k) {
	int m = (k + 4) % 7 + 1;
	std::cout << m << std::endl;
}

void Integer::Integer28(int n, int k) {
	n -=  2;
	int days = k + n;
	int m = (days % 7) + 1;
	std::cout << m << std::endl;
}

void Integer::Integer29(int a, int b, int c) {
	int Rectangle = a * b;
	int Square = c * c;
	int squaresInRectangle;
	int spaceLeft;
	if(Square > Rectangle) {
		squaresInRectangle = 0;
		spaceLeft = Rectangle;
	}
	else {
		squaresInRectangle = (a / c) + (b / c);
		spaceLeft = Rectangle - (squaresInRectangle * Square);
	}
	std::cout << squaresInRectangle << std::endl;
	std::cout << spaceLeft << std::endl;
}

void Integer::Integer30(int year) {
	std::cout << ((year - 1) / 100) + 1 << std::endl;
}