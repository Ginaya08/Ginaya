#include <iostream>
using namespace std;

class siswa{
	public:
	int noInduk;
	void showInduk() {
		cout<<"No Induk = "<<noInduk<<endl;
	}
};

int main () {
	siswa budi{1}; // Object Budi
	budi.showInduk(); //Member Access Operator
	
	siswa &refBudi = budi; //Pointer Reference refBudi
	refBudi.noInduk = 2; //Member Acces Operator
	budi.showInduk();
	
	siswa *pBudi = &budi; //pointer Deference pBudi
	pBudi->noInduk = 3; //Arrow Operator
	budi.showInduk();
	return 0;
}
