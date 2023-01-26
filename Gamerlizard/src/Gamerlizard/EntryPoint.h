#pragma once

#ifdef GL_PLATFORM_WINDOWS

extern Gamerlizard::Application* Gamerlizard::CreateApplication();

int main(int argc, char** argv) 
{
	Gamerlizard::Log::Init();
	GL_CORE_WARN("Initialized !!!");
	int a = 5;
	GL_INFO("Hello Var{0}", a);
	auto app = Gamerlizard::CreateApplication();
	app->Run();
	delete app;
}

#endif


