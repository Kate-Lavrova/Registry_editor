#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace Microsoft::Win32;


// st


void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Regedit::MyForm form;
	Application::Run(%form);


}
