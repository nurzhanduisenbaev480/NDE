#include "Application.h"

#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace Gamerlizard {

	Application::Application()
	{
	}
	Application::~Application()
	{
	}

	void Application::Run() 
	{
		WindowResizeEvent e(1280, 720);
		GL_TRACE(e);
		while (true);
	}
}