#ifndef __ACCOUNT_ARRAY_H__
#define __ACCOUNT_ARRAY_H__

#include "Account.h"
typedef Account *ACCOUNT_PTR;

class  BoundCheckAccounPtrArray
{
public:
	BoundCheckAccounPtrArray(int len = 100);
	ACCOUNT_PTR& operator[](int idx);
	ACCOUNT_PTR operator[](int idx)const;
	int GetArrLen() const;
	~ BoundCheckAccounPtrArray();

private:
	ACCOUNT_PTR * arr;
	int arrlen;
	BoundCheckAccounPtrArray(const BoundCheckAccounPtrArray& arr){}
	BoundCheckAccounPtrArray& operator=(const BoundCheckAccounPtrArray& arr){}

};

#endif

