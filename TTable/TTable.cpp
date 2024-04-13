#include <string>
#include <iostream>
typedef int TKey;
typedef std:: string TValue;
struct TRecord {
	TKey key;
	TValue val;
};

class TTable {
protected:
	int DataCount;
	int Eff; //Ёффективность таблицы
public:
	virtual ~TTable() {}
	virtual int getDataCount() { return DataCount; }
	virtual int getEff() { return Eff; }
	virtual void clearEff() { Eff = 0; }
	virtual bool empty() { return DataCount; }
	virtual bool full() = 0; //„исто виртуальный
	virtual bool find(TKey key) = 0;
	virtual bool InsRecord(TRecord rec) = 0;
	virtual void DelRecord(TKey key) = 0;
	virtual void Reset() = 0;
	virtual bool InsEnd() = 0;
	friend ostream& operator << (ostream& os, TTable& t) {

	}
};