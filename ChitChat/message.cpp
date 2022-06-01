#include "message.h"

String^ message::get_msg() {
	return text;
}
String^ message::get_time() {
	return time;
}

int message::getMsg_id() {
	return msg_id;
}

int message::getChat_id() {
	return chat_id;
}

bool message::getType() {
	return type;
}

message::message() {

}
int  message::get_usereid()
{
	return user_id;
}


String^ message :: get_date() {
	return date;
}

message::message(int msgId, int chatId, String^ msg, bool ype, String^ tim, int cid,String^dat) {
	msg_id = msgId;
	chat_id = chatId;
	text = msg;
	type = ype;
	time = tim;
	user_id = cid;
	date = dat;

}

void message::setType(bool Type) {
	type = Type;
}
