#include "BSTClass.hpp"

int main(void)
{
	cout << "Welcome to the Morse Code Converter!" << endl;
	BST MorseCode;

	MorseCode.print();

	fstream conversion;
	conversion.open("Convert.txt", std::ios::in);
	cout << "\n\nNow converting from conversion file:" << endl;;
	system("pause");
	cout << "\n\n";
	while (!conversion.eof())
	{
		char c;
		string target;
		conversion.get(c);

		target = MorseCode.search(toupper(c)); //breaks on 4th
		if (target != "\n")
		{
			cout << target << " ";
		}
		else
		{
			cout << target;
		}
	}
	cout << "\n";
	conversion.close(); 

	return 0;
}