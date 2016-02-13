workspace "Mxnl"
   configurations { "Debug", "Release" }

project "MxnlLib"
   kind "ConsoleApp"
   language "C++"
   files { "**.hh", "**.cc" }

   filter { "configurations:Debug" }
      defines { "DEBUG" }
      flags { "Symbols" }

   filter { "configurations:Release" }
      defines { "NDEBUG" }
      optimize "On"