#include <iostream>
#include <easy2d/easy2d.h>
using namespace easy2d;

int main(){
	if (Game::init()){
		std::cout << " Initialize the success!" << std::endl;
		Window::setTitle(L"窗口名称");
		Window::setSize(窗口x, 窗口y);
		//以下是游戏代码
		

		//以上是游戏代码
		Game::start;
	}
	Game::destroy();
    return 0;
}