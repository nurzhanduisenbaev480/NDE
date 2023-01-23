#include <Gamerlizard.h>

class Sandbox : public Gamerlizard::Application
{
public:
	Sandbox() {}
	~Sandbox() {}
};

Gamerlizard::Application* Gamerlizard::CreateApplication() 
{
	return new Sandbox();
}
