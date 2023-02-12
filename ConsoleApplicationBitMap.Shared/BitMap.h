#pragma once
#include <cstdint>
#include <cstring>
#include <utility>
#include <type_traits>

#ifdef SHARED_LIB
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT __declspec(dllexport)
#endif

#define __TEM_T template < typename T

namespace Containers
{
	TEM_DEF class DLLEXPORT BitMap
	{
	};
}