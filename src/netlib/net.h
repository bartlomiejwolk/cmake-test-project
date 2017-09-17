#pragma once

#ifdef NETLIB_EXPORT
#define NETLIB_API __declspec(dllexport)
#else
#define NETLIB_API __declspec(dllimport)
#endif

class NETLIB_API Network
{
public:
	static bool Connect();
};