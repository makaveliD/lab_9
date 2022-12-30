#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<string> splitByDelimeter(string str, string delimeter) {
	
	vector<string> results;
	int position;
	string token;
	position = str.find(delimeter);

	while (position > 0) {
		token = str.substr(0, position);
		results.push_back(token);
		str.erase(0, position + delimeter.length());
		position = str.find(delimeter);
	}
	return results;
}

string removeShorterWords(vector<string> words, int length) {
	string result;
	string word;

	for (int i = 0; i < words.size(); i++) {
		word = words[i];
		if (word.size() > length)
		{
			result += words[i];
			if (i != words.size()-1)
			{
				result += " ";
			}
		}
	}
	return result;
}

int main(){

	string sentance;
	string delimeter = " ";
	string result;
	vector<string> sentanceParts;
	int length = 0;

	cout << "Enter string: " << endl;
	getline(cin, sentance);
	cout << endl << "Enter length: " << endl;
	cin >> length;

	sentanceParts =	splitByDelimeter(sentance, delimeter);
	result = removeShorterWords(sentanceParts, length);

	cout << result << endl;

	return 0;
}
