#include <iostream>
#include <String>

using namespace std;

int main()
{
	unsigned int Archive{};
	unsigned char EnteredCharacter;

	cout << "Enter first char " << endl;
	cin >> EnteredCharacter;
	Archive = Archive | EnteredCharacter;

	cout << "Enter second char " << endl;
	cin >> EnteredCharacter;
	Archive <<= 8;
	Archive |= EnteredCharacter;

	cout << "Enter third char " << endl;
	cin >> EnteredCharacter;
	Archive <<= 8;
	Archive |= EnteredCharacter;

	cout << Archive << endl;

	unsigned int Mask{ 0xFF };

	EnteredCharacter = (Archive >> 16) & Mask;
	cout << EnteredCharacter << " ";
	EnteredCharacter = (Archive >> 8) & Mask;
	cout << EnteredCharacter << " ";
	EnteredCharacter = Archive & Mask;
	cout << EnteredCharacter << " " << endl;


	return 0;
}