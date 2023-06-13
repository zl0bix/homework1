#include<iostream>
#include<string>
#include<vector>
#include<iterator>


class Drob {
private:
	double _a;
	double _b;
public:
	Drob() : _a(5.0), _b(10.0) {}
	Drob(double a, double b) {
		_a = a;
		_b = b;
	}
	double del(double a, double b) {
		_a = a;
		_b = b;
		return _a / _b;
	}
	double multiplication(double a, double b) {
		_a = a;
		_b = b;
		return _a * _b;
	}
	double minus(double a, double b) {
		_a = a;
		_b = b;
		return _a - _b;
	}
	double plus(double a, double b) {
		_a = a;
		_b = b;
		return _a + _b;
	}
};
int main() {
	Drob d1;
	double a, b;
	std::cout << "Enter 1-st number -> ";
	std::cin >> a;
	std::cout << "Enter 2-nd number -> ";
	std::cin >> b;
	std::cout << "Enter arithmetic action *  /  +  - ";
	char sym;
	std::cin >> sym;
	switch (sym) {
	case '*':
		std::cout << "A * B = " << d1.multiplication(a, b);
		break;
	case '/':
		std::cout << "A / B = " << d1.del(a, b);
		break;
	case '-':
		std::cout << "A - B = " << d1.minus(a, b);
	case '+':
		std::cout << "A + B = " << d1.plus(a, b);
	default:
		std::cout << "Error enter!!!";
	}
	return 0;
}
