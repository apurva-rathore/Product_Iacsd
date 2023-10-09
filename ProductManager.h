#ifndef PRODUCTMANAGER_H
#define PRODUCTMANAGER_H
#include "Product.h"
class ProductManager
{
	private:
		Product P;
	public:
		ProductManager();
		void insert(int id,std::string title,double price,std::string description,int likes);
		void update(int id,std::string title,double price,std::string description,int likes);
		
		
		
		
};

#endif
