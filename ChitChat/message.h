#pragma once

using namespace System;

ref class message
{
private:
	int msg_id;
	int user_id;
	int chat_id;
	bool type;
	String^ text;
	String^ time;
	String^ date;

	// array of contacts in chat room
public:
	String^ get_date();
	String^ get_msg();
	String^ get_time();
	int get_usereid();
	int getMsg_id();
	int getChat_id();
	void setType(bool);
	bool getType();
	message(int, int, String^, bool, String^, int,String^);
	message();

};



