#include"BankingCommonDecl.H"
#include"AccountArray.h"
BoundCheckAccounPtrArray::BoundCheckAccounPtrArray(int len) :arrlen(len) {
	arr = new ACCOUNT_PTR[len];
}
ACCOUNT_PTR& BoundCheckAccounPtrArray::operator[](int idx) {
	if (idx < 0 || idx >= arrlen) {
		cout << "Array index out of bound exception" << endl;
		exit(1);
	}
	return arr[idx];
}
ACCOUNT_PTR BoundCheckAccounPtrArray::operator[](int idx) const {
	if (idx < 0 || idx >= arrlen) {
		cout << "Array index out of bound exception" << endl;
		exit(1);
	}
	return arr[idx];
}
int BoundCheckAccounPtrArray::GetArrLen()const {
	return arrlen;
}
BoundCheckAccounPtrArray::~BoundCheckAccounPtrArray() {
	delete[]arr;
}