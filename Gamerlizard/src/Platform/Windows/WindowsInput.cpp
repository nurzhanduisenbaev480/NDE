#include "Glpch.h"
#include "WindowsInput.h"

#include "Gamerlizard/Application.h"
#include <GLFW/glfw3.h>

namespace Gamerlizard {
	bool WindowsInput::IsKeyPressedImpl(int keycode)
	{
		auto window = static_cast<GLFWwindow*>(Application::Get().GetWindow().GetNativeWindow());
		auto state = glfwGetKey(window, keycode);
		return state == GLFW_PRESS || state == GLFW_REPEAT;
	}
	bool WindowsInput::IsMouseButtonPressedImpl(int button)
	{
		return false;
	}
	float WindowsInput::GetMouseXImpl()
	{
		return 0.0f;
	}
	float WindowsInput::GetMouseYImpl()
	{
		return 0.0f;
	}
}
