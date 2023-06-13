#include <iostream>

using namespace std;

my_prepp(int a){
	int *p = &++a;
	a = *p;
	
}
my_postpp(int b){
	
}
int main() {
	int a=10, b=20;
	cout<< "a=" <<my_prepp(a) << " b=" << my_postpp(b) <<endl;
	cout<< "a=" <<a << "b=" << b <<endl;
	return 0;
}
