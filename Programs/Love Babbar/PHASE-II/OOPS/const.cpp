    // The const variable cannot be left un-initialized at the time of the assignment.

    // It cannot be assigned value anywhere in the program.

    // Explicit value needed to be provided to the constant variable at the time of declaration of the constant variable.


#include <iostream>
using namespace std;
class Demo {
	int value;

public:
	Demo(int v = 0) { value = v; }
	void showMessage()
	{
		cout << "Hello World We are Tushar, "
				"Ramswarup, Nilesh and Subhash Inside"
				" showMessage() Function"
			<< endl;
	}

	// const member function
	void display() const
	{
		cout << "Hello world I'm Rancho "
				"Baba Inside display() Function"
			<< endl;
	}
};
int main()
{
	// Constant object are initialised at the time of
	// declaration using constructor
	const Demo d1;
	// d1.showMessage();Error occurred if uncomment.
	d1.display();
	return (0);
}
