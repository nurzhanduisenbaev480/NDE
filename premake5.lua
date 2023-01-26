workspace "Gamerlizard"
    architecture "x64"
    startproject "Sandbox"

    configurations
    {
        "Debug",
        "Release",
        "Dist"
    }
outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "Gamerlizard"    
    location "Gamerlizard"
    kind "SharedLib"
    language "C++"

    targetdir("bin/" .. outputdir .. "/%{prj.name}")
    objdir("bin-int/" .. outputdir .. "/%{prj.name}")

    files
    {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp"
    }

    includedirs
    {
        "%{prj.name}/src,
        "%{prj.name}/vendor/spdlog/include"
    }

    filter "system:windows"
        cppdialect "C++14"
        staticruntime "On"
        systemversion "latest"
        
        defines
        {
            "GL_PLATFORM_WINDOWS",
            "GL_BUILD_DLL"
        }

        postbuildcommands
        {
            ("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox")
        }
    filter "configurations:Debug"
        defines "GL_DEBUG"
        symbols "On"
    filter "configurations:Release"
        defines "GL_RELEASE"
        optimize "On"
    filter "configurations:Dist"
        defines "GL_DIST"
        optimize "On"

project "Sandbox"
    location "Sandbox"
    kind "ConsoleApp"
    language "C++"

    targetdir("bin/" .. outputdir .. "/%{prj.name}")
    objdir("bin-int/" .. outputdir .. "/%{prj.name}")

    files
    {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp"
    }

    includedirs
    {
        "Gamerlizard/vendor/spdlog/include",
        "Gamerlizard/src"
    }

    links
    {
        "Gamerlizard"
    }

    filter "system:windows"
        cppdialect "C++14"
        staticruntime "On"
        systemversion "10.0"
        
        defines
        {
            "GL_PLATFORM_WINDOWS"
        }

    filter "configurations:Debug"
        defines "GL_DEBUG"
        symbols "On"
    filter "configurations:Release"
        defines "GL_RELEASE"
        optimize "On"
    filter "configurations:Dist"
        defines "GL_DIST"
        optimize "On"