#include <iostream>
using namespace std;

bool kiemtraChan(int n){
	return n%2==0;
}
int main(){
	int n;
	cout << "Nhap vao mot so nguyen :" <<endl;
	cin >> n;
	cout << "So nguyen vua nhap la : " <<n<<endl;
	
	int kqChan = kiemtraChan(n);
	if(kqChan){
		cout <<"La so chan"<<endl;
	}else{
		cout<<"Ko la so chan"<<endl;
	}
	
	return 0;
}
