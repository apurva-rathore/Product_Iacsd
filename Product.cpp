#include "Product.h"

using namespace std;
//counstructors
Product::Product(){}

Product::Product(int id,string pname,double price,string description,int likes)
{
	this->id=id;
	this->title=title;
	this->price=price;
	this->description=description;
	this->likes=likes;
}

//setters
void Product::setId(int id)
{
	this->id=id;
}
void Product::setTitle(string title)
{
	this->title=title;
}
void Product::setPrice(double price)
{
	this->price=price;
}
void Product::setDescription(string description)
{
	this->description=description;
}
void Product::setLikes(int likes)
{
	this->likes=likes;
}

//getters
int Product::getId()
{
	return this->id;
}
string Product:: getTitle()
{
	return this->title;
}
double Product::getPrice(){
	return this->price;
}
string Product::getDescription(){
	return this->description;
}
int Product::getLikes(){
	return this->likes;
}

