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
#define __TEM_T_ALLOC __TEM_T , template < typename > typename Alloc
#define TEM_DEF __TEM_T_ALLOC = std::allocator >
#define TEM __TEM_T_ALLOC >
#define TEM_U template < typename U >
#define __TEM_CONT template < typename Cont , typename
#define TEM_CONT __TEM_CONT >
#define TEM_CONT_DEF __TEM_CONT = std::enable_if_t <	\

namespace Containers
{
	TEM_DEF class DLLEXPORT BitMap
	{
	};
}