#ifndef __ACCOUNT_HANDLER_H__
#define __ACCOUNT_HANDLER_H__

#include "Account.h"
#include "AccontArray.h"

class AccountHandler {
private:
	BoundCheckAccounPtrArray accArr;
	int accNum;
protected:
	void MakeNormalAccount(void);
	void MakeCreditAccount(void);
public:
	AccountHandler();
	void ShowMenu(void) const;
	void MakeAccount(void);
	void DepositMoney(void);
	void WithdrawMoney(void);
	void ShowAllAccInfo(void) const;
	~AccountHandler();
};

#endif