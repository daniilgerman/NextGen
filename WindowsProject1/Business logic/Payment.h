#pragma once
class Payment
{
private:
	Money amount;
public:
	Payment(Money cachTendered);
	Money getAmount();
};
