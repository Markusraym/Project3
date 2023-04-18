#include "MyForm.h"
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;

void main(array<System::String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);


	Application::Run(gcnew Project3::MyForm());

	//Form^ mainForm = gcnew Project3::MyForm();
	
	//Project3::MyForm obj;


	//obj.StartApplication(mainForm);

	//while (!isValid) {
	//bool isValid = false;
		//Application::Run(mainForm);
		//std::cout << "Hey";
		//isValid = obj.getCont();
	//}


}