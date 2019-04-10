#include<iostream>
#include<string>

using namespace std;

//������
class Animal{
protected:
	string name ;
	int shoutNum ;

public:
	Animal(string ); //���ι��캯��	
	Animal();         //���캯��
	void setName(string ); //��������
    int getShutNum() {return shoutNum; }; //��ȡ���������
	void setShoutNum(int ); //���ö��������
	};

Animal ::Animal(string name){
	setName(name);
	setShoutNum(3);
}

Animal ::Animal(){
	setName("����");
	setShoutNum(3);
}

void Animal::setName(string name){
	this->name = name;
}

void Animal::setShoutNum(int shoutNum){
	this->shoutNum = shoutNum;
}


class Cat : Animal{
public:
	Cat(string );
	Cat();
	string Shout(); //è��
};

Cat::Cat(string name):Animal(name){}

Cat::Cat():Animal(){}

string Cat::Shout(){
	string result = "";
	for(int i = 0; i < shoutNum; i++)
		result += "��";
	return "�ҵ����ֽ� " + name + " " + result;

}


class Dog : Animal{
public:
	Dog(string );
	Dog();
	string Shout(); //����
};

Dog::Dog(string name):Animal(name){}

Dog::Dog():Animal(){}

string Dog::Shout(){
	string result = "";
	for(int i = 0; i < shoutNum; i++)
		result += "��";
	return "�ҵ����ֽ� " + name + " " + result;

}

int main(){
    Cat c("����");
	cout<<c.Shout()<<endl;
	Dog d;
	cout<<d.Shout()<<endl;
	return 0;
}

