#include <iostream>
#include <string>
#include <vector>

using namespace std;
string Check (vector<char>);

int main()
{
	string Sentence;
	vector<char> v;
	while ("Надеюсь попаду к вам на работу!!!!!")
	{
		v = {};
		getline(cin, Sentence);
		for (auto element : Sentence)
			v.push_back(element);
		cout << Check(v) << endl;
	}
}

string Check(vector<char> vector)
{
	int sumFirst = 0;
	int sumSecond = 0;
	int sumThird = 0;
	const int numberFirst = 40;
	const int numberSecond = 91;
	const int numberThird = 123;
	for (auto element : vector)
	{
		if (sumFirst >= 0 && sumSecond >= 0 && sumThird >= 0)
		{
			switch (int(element))
			{
			case numberFirst:
				sumFirst++;
				break;
			case numberSecond:
				sumSecond++;
				break;
			case numberThird:
				sumThird++;
				break;
			case numberFirst + 1:
				sumFirst--;
				break;
			case numberSecond + 2:
				sumSecond--;
				break;
			case numberThird + 2:
				sumThird--;
				break;
			}
		}
		else
			return "false";
	}
	if (sumFirst != 0 || sumSecond != 0 || sumThird != 0)
		return "false";
	else
		return "true";
}
