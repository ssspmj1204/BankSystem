#ifndef __HIGHTCREDIT_ACCOUNT_H__
#define __HIGHTCREDIT_ACCOUNT_H__
#include "NormalAccount.h"

class HighCrediAccount :public NormalAccount
{
private:
	int specialRate;

public:
	HighCrediAccount(int ID, int money, char*name, int rate, int special) :NormalAccount(ID, money, name, rate), specialRate(special) {}
	virtual void Deposit(int money) {
		NormalAccount::Deposit(money);
		Account::Deposit(money*(specialRate / 100.0));
	}

};

#endif