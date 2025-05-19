#include <iostream>
#include <string>
using namespace std;
int main() {
	struct User {
		string name;
		string lastname;
		string age;
		int hp;
	};
	int count;
	cin >> count;
	User a;
	User* arr = new User(a);
	for (int i = 0; i < count; i++) {
		if (i < count) {
			std::cin >> arr[i].name;
			std::cout << "get name"<< endl;
		}
		if (i < count) {
			std::cin >> arr[i].lastname;
			std::cout << "get lastname"<< endl;
		}
		if (i < count) {
			if (arr[i].age < 18) {
				std::cin >> arr[i].age;
				std::cout << "get age";
				cout << "OK.let's go!"<< endl;
			}
				if (arr[i].age > 18) {
					std::cin >> arr[i].age;
					std::cout << "get age";
					cout << "no!" << endl;
			    }
			

			
		}
		if (i < count) {
			std::cin >> arr[i].hp;
			std::cout << "get hp";
		}
	}
	a.name;
	a.lastname;
	a.age;
	a.hp;


	return 0;
}


