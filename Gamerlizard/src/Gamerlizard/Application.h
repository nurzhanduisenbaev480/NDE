#pragma once

#include "Core.h"


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

