#pragma once

#include "Core.h"
#include "Events/Event.h"

namespace Gamerlizard {
	class GAMERLIZARD_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	Application* CreateApplication();
}

