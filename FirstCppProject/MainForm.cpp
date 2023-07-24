#include "MainForm.h"
#include "Casino.h"
#include"MineSweeperv2.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	FirstCppProject::MainForm form;
	form.ShowDialog();

	

	User^ USER_USER = form.userr;

	if (USER_USER == nullptr)
	{
		return;
	}

	FirstCppProject::Casino form_casino(USER_USER);
	form_casino.ShowDialog();

	while (true)
	{
		if (form_casino.Mine_sweeper_ == true) 
		{
			FirstCppProject::MineSweeperv2 Minesweeper_Window;
			Minesweeper_Window.ShowDialog();
			//FirstCppProject::Minesweeper ms_form;
			//ms_form.ShowDialog();
			break;
		}
		else if (form_casino.Slots_ != 0)
		{
			break;
		}
		break;
	}
	//form_casino.user_casino = form.userr;
	
	


}
