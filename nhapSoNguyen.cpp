#include <iostream>
using namespace std;

bool kiemTraLe(int n){
	return n % 2 ==0;
}

int main(){
	int n;
	cout << "Nhap vao mot so nguyen :" <<endl;
	cin >> n;
	cout << "So nguyen vua nhap la : " <<n<<endl;
	
	bool kqLe = kiemTraLe(n);
	if(!kqLe){
		cout << "La so le";
	}else{
		cout << "La so chan";
	}
	cout <<"Test conflict le " ;
	return 0;
}
