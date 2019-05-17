#include "MainCalculator.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Calculator::MainCalculator form;

	Application::Run(%form);
	return 0;

}
