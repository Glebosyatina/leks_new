#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    leks::MyForm form;
    Application::Run(% form);

    return 0;
}

