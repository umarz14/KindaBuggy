#include <iostream>

using namespace std;

int main()
{
	string name;
	bool my_age;

	cout<<"Hi, what's your name?";
	getline(cin,name);

	cout<<name<<,<<what is your age?;
	cin>>my_age>>endl;

	if( age >0 && age < 12 )
		cout<<"Hey kid!"<<endl;
	if( age < 18 )
		cout<<"I hope you're enjoying highschool!"<<endl;
	else
		cout<<"Oh, you're an adult. Nice to meet you."<<endl;

	return 0;
}
