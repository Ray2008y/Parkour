#include <iostream>
#include <easy2d/easy2d.h>
using namespace easy2d;

int main() {
	if (Game::init()) {
		std::cout << " Initialize the success!" << std::endl;
		Logger::showConsole(false);//隐藏控制台
		Window::setTitle(L"GAME");
		Window::setSize(2000,1200);
		//以下是游戏代码
		
		//以上是游戏代码
		Game::start;
	}
	Game::destroy();
	return 0;
}
