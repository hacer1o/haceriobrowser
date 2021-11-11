#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace haceriobrowser;
[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    MyForm form;
    Application::Run(%form);
}