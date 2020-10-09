#include <iostream>;
#include <stdio.h>;
using namespace std;

int main(){
	std::cout<<"tool made by Tsvetan Vagliarski"<<std::endl;
	std::cout <<"version 0.1.4"<<std::endl;
	int chose;
	do{
	cout<<endl
	<<"1-Calculator\n"
	<<"2-Searching\n"
	<<"3-exit\n";
	cin>>chose;
	
	switch(chose){
	case 1:

	char op;
    float num1, num2;
	cout <<"Bace, napishi nekoe simwolche za smqtane ne se pritistiskai: ";
	cin >> op;
	cout <<"E segi napishi 2 chisla:";
	cin >> num1 >> num2;
	
	switch(op)
	{

	case'+':
		cout << num1+num2;
		break;

	case'-':
		cout << num1-num2;
		break;
	
	case'*':
		cout << num1*num2;
		break;

	case'/':
		cout << num1/num2;
		break;

	 default:
		cout << "W greshka si bace";
        break;
	}
	std::cout <<"  ti e otgovora bace"<< std::endl;
	std::cout <<"begi pii edna rikiq za zdrawe"<< std::endl;
	
	
	case 2:
		std::cout<<"test"<<std::endl;
		break;

	case 3:
		return 0;
	
	}

	
	
	
	
	}while(chose !=5);
	return 0;
	



}