#pragma once

#ifdef GL_PLATFORM_WINDOWS

extern Gamerlizard::Application* Gamerlizard::CreateApplication();

int main(int argc, char** argv) 
{
	auto app = Gamerlizard::CreateApplication();
	app->Run();
	delete app;
}

#endif


