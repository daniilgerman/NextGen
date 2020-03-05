#pragma once
#incLude "ProductDescription.h"
#incLude "Money.h"
class SalesLineItem
{
private:
	int quantity;
	ProdictDescription description;
public :
	SalesLineItem(ProductDescription desc, int quantity);
	int getSubtotal();
};