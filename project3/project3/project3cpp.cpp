#include <iostream>
#include <string>
using namespace std;
struct Car {
	string model;
	int count_wheels;
	int seats;
	int color;

	void drive() {
		if (this->count_wheels < 2) {
			cout << "Car doesn't have a wheels" << endl;
			return;
		}
		cout << "Car has : " << this->count_wheels << "wheels" << endl;
	}

	void sitting() {
		if (this->seats > 2) {
			cout << "Car doesn't have seats" << endl;
			return;
		}
		cout << "Car has : " << this->seats << "seats" << endl;
	}

	void painting() {
		if (this->color) {
			
		}
	}
};
int main() {
	int a;
	int color;
	Car bmw;
	std::cin >> bmw.count_wheels;
	std::cin >> bmw.seats;
	std::cin >> bmw.color;
	bmw.drive();
	bmw.sitting();


	Car toyota;
	std::cin >> toyota.count_wheels;
	std::cin >> toyota.seats;
	toyota.drive();
	toyota.sitting();

	Car audi;
	std::cin >> audi.count_wheels;
	std::cin >> audi.seats;
	audi.drive();
	audi.sitting();



	return 0;
}