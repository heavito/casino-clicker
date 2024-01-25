#include "tetr.h"
#include <Windows.h>
#include <string>
using namespace tetrishea;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew tetr);
    return 0;
}
class user {
private:
    int money;
    bool sound;
public:
    int SET_money(int new_money) {
        this->money = new_money;
    }
    int GET_money() {
        return this->money;
    }
    bool SET_sound(bool onof_sound) {
        this->sound = onof_sound;
    }
    bool GET_sound(bool on_sound) {

    }
};