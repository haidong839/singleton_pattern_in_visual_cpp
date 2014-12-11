// singleton.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;
using namespace System;

class MySingleton {
private:
	static MySingleton* mySingleton;
public:
	
	static MySingleton* getInstance()
	{
		if(mySingleton == NULL)
		{
			mySingleton = new MySingleton();
		}
		return mySingleton;
	}

	void output(){
		System::Console::WriteLine(" output from a singleton !");
		System::Console::ReadLine();
	}
};

MySingleton* MySingleton::mySingleton = NULL;

int main(int argc, _TCHAR* argv[])
{
	MySingleton* mySingleton = MySingleton::getInstance();
	mySingleton-> output();
	return 0;
}
