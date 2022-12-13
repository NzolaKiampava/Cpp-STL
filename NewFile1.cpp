#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	int intArray[5] = {1,2,3,4,5};
	vector<int> vecList(intArray, intArray + 5);
	vector<int>::iterator intVecIter;
	
	intVecIter = vecList.begin();
	++intVecIter;
	vecList.insert(intVecIter, 22);
	
	//vecList = {1, 22, 3, 5, 7, 9, 11, 13}
	return 0;
}