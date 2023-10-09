#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
#include<iostream>
class Product
{
	private:
		int id;
		std::string title;
		double price;
		std::string description;
		int likes;
	public:
		Product();
		Product(int id,std::string title,double price,std::string description,int likes);
		void setId(int pid);
		void setTitle(std::string title);
		void setPrice(double price);
		void setDescription(std::string desc);
		void setLikes(int likes);
		
		int getId();
		std::string getTitle();
		double getPrice();
		std::string getDescription();
		int getLikes(); 
		
	
};

#endif
