#include "LoginForm.h"
#include "RegisterForm.h"
#include "StoryMain.h"
#include "AddStory.h"
#include "MyForm.h"
#include "MyStory.h"
#include "FriendStory.h"
#include "UserProfileForm.h"
#include "message.h"
#include "ViewUserProfile.h"
#include "home.h"
#include "Groups.h"
#include "CreateGroup.h"
#include"AddForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Contacts^ cont = nullptr;






	while (true)
	{


		ChitChat::LoginForm loginForm;
		loginForm.ShowDialog();



		if (loginForm.switchToRegister) {
			ChitChat::RegisterForm registerForm;
			registerForm.ShowDialog();

			if (registerForm.switchToLogin) {
				continue;
			}
			else {
				cont = registerForm.cont;
				break;
			}
		}
		else {
			cont = loginForm.cont;
			break;
		}





	}

	if (cont != nullptr) {
		while (true)
		{
			ChitChat::home hom;
			hom.ShowDialog();
			hom.Update();
			if (hom.switchToGroups)
			{
				ChitChat::Groups groups;
				groups.ShowDialog();
				if (groups.switchToHome) {//here i should take into consideration where can this form redirect me!!
					continue;
				 //start the loop from the begining so it will show the (HOME FORM)
				} else if (groups.switchToChatroom){
					ChitChat::MyForm chatroom;
					chatroom.ShowDialog();
					if (chatroom.switchToGroup) {
						ChitChat::Groups groups;     //here i didn't type contiue because i wont go back home
						groups.ShowDialog();         //i would be redirected to the groups form and break!!
					}

					else continue;
				}
				else break;

		    }
			else if (hom.switchToStatus) {//here i should take into consideration where can this form redirect me!!
				ChitChat::StoryMain story;
				story.ShowDialog();
				if (story.switchToHome) {
					continue;  // start the loop from the begining so it will show the (HOME FORM) Again!!
				}
				else break;
			}
			else if (hom.switchToProfile) {//here i should take into consideration where can this form redirect me!!
				ChitChat::UserProfileForm profile;
				profile.ShowDialog();
				if (profile.switchToHome) {
					continue;  // start the loop from the begining so it will show the (HOME FORM) Again!!
				}
				else break;

			}
			else if (hom.switchToAddConctact) {
				ChitChat::AddForm addContact;
				addContact.ShowDialog();
				if (addContact.switchToHome) {
					continue;  // start the loop from the begining so it will show the (HOME FORM) Again!!
				}
				else break;
			}
			else if (hom.switchToCreateGroup) {
				ChitChat::CreateGroup creatGroup;
				creatGroup.ShowDialog();
				if (creatGroup.switchToGroups) {
					ChitChat::Groups groups;     //here i didn't type contiue because i wont go back home
					groups.ShowDialog();         //i would be redirected to the groups form and break!!
					if (groups.switchToChatroom)
					{
						ChitChat::MyForm h;
						h.ShowDialog();
						if (h.switchToGroup)
						{
							ChitChat::Groups g;
							g.ShowDialog();
						}
					}
					else continue;
				}
				else break;
			}
			else if (hom.switchToChatroom) {
				ChitChat::MyForm chatroom;
				chatroom.ShowDialog();
				if (chatroom.switchToHome) {
					continue;
				}
				else if (chatroom.refreshMessage) {
					ChitChat::MyForm chatroom;
					chatroom.ShowDialog();
				}
				else break;
			}
			else if (hom.switchToLogin) {
				ChitChat::LoginForm login;
				login.ShowDialog();
				
			}
				
			else break;
		}
	}
	else {
		MessageBox::Show("Login Canceled");
	}

}