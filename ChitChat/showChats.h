#pragma once
using namespace System;
using namespace System::IO;
using namespace System::Drawing;

public ref class showChats : public IComparable<showChats^>
{
public:
	String^ fullName;
	Image^ img;
	int timeDate;
	String^ text;
	int CHID;
	int CID;

	virtual int CompareTo(showChats^ other)
	{
		return other->timeDate.CompareTo(this->timeDate);
	}




};