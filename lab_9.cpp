#include <string>
#include <iostream>
#include <vector>

using namespace std;

void main()
{
	string sentance;
	string delimiter = " ";
	string token;
	vector<string> sentanceParts;
	int length;
	int position;
	cout << "Enter string: "<<endl;
	getline(cin, sentance);
	
	cout << endl << "Enter length: "<<endl;
	cin >> length;
	cout << sentance << ":" << length;
	position = sentance.find(delimiter);
	while (position > 0) {
		token = sentance.substr(0, position);
		sentanceParts.push_back(token);
		sentance.erase(0, position + delimiter.length());
		position = sentance.find(delimiter);
	}
	for (int i = 0; i < sentanceParts.size(); i++) {
		cout << sentanceParts[i] << endl;
	}
	
}
