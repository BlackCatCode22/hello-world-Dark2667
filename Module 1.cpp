#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!"<< endl ;
    // This is one
    cout << "Enter an integer: ";

	int num{ };
	cin >> num;

	cout << "Double " << num << " is: " << num * 2 << '\n';
	cout << "Triple " << num << " is: " << num * 3 << '\n';
    // This is two and three
    cout << "Enter two integers: ";
    int x{};
    int y{};
    cin >> x >> y;

    cout << "The sum of " << x << " and " << y << " is: " << x + y << endl;
    // This is four

    cout << "Enter your name: ";
    string name{};
    cin >> name;

    cout << "Nice to meet you " << name << endl;
    //This is five

	return 0;
}



