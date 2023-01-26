#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Gamerlizard {

	class GAMERLIZARD_API Log
	{
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	};
}

// Core logs macros
#define GL_CORE_TRACE(...)	::Gamerlizard::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define GL_CORE_INFO(...)	::Gamerlizard::Log::GetCoreLogger()->info(__VA_ARGS__)
#define GL_CORE_WARN(...)	::Gamerlizard::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define GL_CORE_ERROR(...)	::Gamerlizard::Log::GetCoreLogger()->error(__VA_ARGS__)
#define GL_CORE_FATAL(...)	::Gamerlizard::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client logs macros
#define GL_TRACE(...)		::Gamerlizard::Log::GetClientLogger()->trace(__VA_ARGS__)
#define GL_INFO(...)		::Gamerlizard::Log::GetClientLogger()->info(__VA_ARGS__)
#define GL_WARN(...)		::Gamerlizard::Log::GetClientLogger()->warn(__VA_ARGS__)
#define GL_ERROR(...)		::Gamerlizard::Log::GetClientLogger()->error(__VA_ARGS__)
#define GL_FATAL(...)		::Gamerlizard::Log::GetClientLogger()->fatal(__VA_ARGS__)

