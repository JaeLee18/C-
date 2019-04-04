#include <iostream>
using namespace std;

void sthingWrong(){
	bool error = true;

	if(error){
		// throw 8;
		throw "Something is wrong";
	}
}
int main(){
	try{
		sthingWrong();
	}
	catch(int e){
		cout << "Error code: " << e << endl;
	}
	catch(char const * e){
		cout << "Error message: " << e << endl;
	}

	cout << "End of Program" << endl;
	
	return 0;
}