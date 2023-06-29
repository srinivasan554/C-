#include <iostream>
using namespace std;

class parent
{
public:
	virtual void display(){
		cout<<"parent"<<endl;
	}
	void show(){
		cout<<"parent2"<<endl;
	}
	
};
class child : public parent{
public:
	void display(){
		cout<<"child"<<endl;
	}
	void show(){
		cout<<"child2"<<endl;
	}

};

int main(){
	child c;
	parent* p;
	p = &c;
	p->display(); //overrides the base class
	p->show();
	return 0;
}
