#include <iostream>
#include "Product.h"
#include "ProductManager.h"
#include <string.h>
#include<vector>

//vector<Product> products;

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
ProductManager PM;
int id,likes,choice;
double price;
string title,description;
cout<<"Choose: 1.Insert 2.Update 3.Delete 4.Search"<<endl;
cout<<"Enter your choice:";
cin>>choice;
switch(choice){
	case 1:
		cout<<"Enter ID, title, price, description, likes:";
		cin>>id>>title>>price>>description>>likes;
		PM.insert(id,title,price,description,likes);
		break;
	case 2:
		//PM.update();
		break;
	
}


	
	return 0;
}
