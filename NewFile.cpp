#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	vector<int> intList(5);
	vector<int>::iterator intVecIter;
	
	for(int i = 0; i < 5; i++)
	{
		intList[i] = i;
		cout << intList[i] << " ";
	}
	

	//using STL operatons
	
	cout << endl;
	cout << intList.front() << "\n";
	cout << intList.back() << "\n";
	cout << intList[3] << "\n";
	cout << intList.at(2) << "\n";
	intList.pop_back();
	intList.push_back(10);
	cout << intList.back() << "\n";
	
	return 0;
}