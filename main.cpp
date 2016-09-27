#include <iostream>
#include <string>
#include <vector>
#include <algorithm> //for sort and count

using namespace std;

int main() {
	vector<int> vi;
	for (int i = 0; i < 10; i++) {
		vi.push_back(i);
	}
	for (auto item : vi) { // this is the nicest one to show 
		cout << item << " ";
	}
	cout << endl;
	for (unsigned int i = 0; i < vi.size(); i++) {
		cout << vi[i] << " ";
	}
	cout << endl;
	for (auto i = begin(vi); i != end(vi); i++) {
		cout << *i << " ";
	}
	cout << endl;
	cout << "int vector vi has " << vi.size() << " element" << endl;

	vector<string> vs;
	cout << "Enter three world: ";
	for (int i = 0; i < 3; i++) {
		string s;
		cin >> s;
		vs.push_back(s);
	}
	for (auto item : vs) {
		cout << item << " ";
	}
	cout << endl;

	sort(begin(vs), end(vs));
	for (auto item : vs) {
		cout << item << " ";
	}
	cout << endl;

	int three = count(begin(vi), end(vi), 3);
	cout << "vector of int has " << three << " element" << endl;

	int tees = count(begin(vs[0]), end(vs[0]), 't');
	cout << "vector of string 1 has " << tees << " element" << endl;
	return 0;
}