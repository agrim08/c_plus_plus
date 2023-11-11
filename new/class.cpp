#include<iostream>
#include <string>
using namespace std;

class User{
	int secret = 22;
	
public:
	string name = "deafult";
	void classMessage(){cout << "Class is great "<< name << endl;}
	void setSecret(const int &reference){secret = reference;}
	int getSecret(){return secret;}
	
};
//by using public keyword...it become accessible for everyone
//that's why we cannot use secret.

int main(){
	User sam;
	sam.name = "Agrim";
	sam.classMessage();
	sam.setSecret(333);
	cout << sam.getSecret() << endl;
	
	User ansh;
	ansh.classMessage();
	ansh.name = "Ansh";
	ansh.classMessage();
	
	User rock;
	cout << rock.getSecret() << endl;
	
	User peter = sam;
	cout << peter.getSecret() << endl;
	
	
	
	return 0;
}

