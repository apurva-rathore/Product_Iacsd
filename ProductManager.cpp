#include "ProductManager.h"


ProductManager::ProductManager()
{
}
void ProductManager::insert(int id,std::string title,double price,std::string description,int likes){
	Product P( id, title, price, description,likes);
}
void ProductManager::update(int id,std::string title,double price,std::string description,int likes){
	P.setId(id);
	P.setTitle(title);
	P.setPrice(price);
	P.setDescription(description);
	P.setLikes(likes);
}


