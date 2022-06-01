#pragma once

using namespace System;
using namespace System::Drawing;

using namespace System::Data::SqlClient;
using namespace System::IO;

public ref class Story : public IComparable <Story^>{

public:
	int SID;
	Image^ Img = nullptr;
	String^ Text;
	String^ TimeDate;
	int CID;
	virtual int CompareTo(Story^ other)
	{
		return other->SID.CompareTo(this->SID);
	}
}; 
