#include <iostream>

using namespace std;

int main() {
	string name;
	string sex;
	int year;
	
	cout<<"Enter name" << endl;
	cin>>name;
	cout<<"Enter sex"<< endl;
	cin>>sex;
	cout<<"Enter year"<< endl;
	cin>>year;
	
	if(year <= 1940){
		if(sex == "m"){
			cout<<"Sir, you are "<<(2021-year)<<", and were 100 in "<<(year+100)<<endl;
		}
		else if (sex == "f"){
				cout<<"Madam, you are "<<(2021-year)<<", and were 100 in "<<(year+100)<<endl;
		}
	}
	else{
		if(sex == "m"){
				cout<<"Hi, "<<name<<"you are "<<(2021-year)<<", and were 100 in "<<(year+100)<<endl;
		}
		else if(sex == "f"){
				cout<<"Hello, "<<name<<"you are "<<(2021-year)<<", and were 100 in "<<(year+100)<<endl;
		}
	}
	return 0;
}
