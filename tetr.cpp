#include "tetr.h"
#include <Windows.h>
using namespace tetrishea;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew tetr);
    return 0;
}
