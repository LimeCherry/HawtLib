workspace "HawtLib"
	configurations { "Debug", "Release" }
	platforms { "x86", "x64" }

outputDir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "HawtLib"
	location "HawtLib"
	kind "StaticLib"
	language "C++"

	targetdir ("Build/bin/" .. outputDir .. "/%{prj.name}")
	objdir ("Build/bin-obj/" .. outputDir .. "/%{prj.name}")

	files { "%{prj.name}/Source/**.h", "%{prj.name}/Source/**.cpp" }

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"
		defines "PLT_Windows"

	filter "configurations:Debug"
		defines "DEBUG"

	filter "configurations:Release"
		defines "NDEBUG"

	filter "platforms:x86"
		architecture "x86"
		defines "X86"

	filter "platforms:x64"
		architecture "x64"
		defines "X64"
