// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once


#define WIN32_LEAN_AND_MEAN	
#define _CRT_SECURE_NO_DEPRECATE



#ifdef _DEBUG

#       pragma comment(lib, "..\\lib\\Crypt32.lib")
#		pragma comment(lib, "..\\lib\\libcrypto32MDd.lib")
#       pragma comment(lib, "..\\lib\\libssl32MDd.lib")
#       pragma comment(lib, "..\\lib\\libuv_d.lib")
#       pragma comment(lib, "..\\lib\\zlibstatic.lib")
#else

#       pragma comment(lib, "..\\lib\\Crypt32.lib")
#		pragma comment(lib, "..\\lib\\libcrypto32MT.lib")
#       pragma comment(lib, "..\\lib\\libssl32MT.lib")
#       pragma comment(lib, "..\\lib\\libuv.lib")
#       pragma comment(lib, "..\\lib\\zlibstatic.lib")

#endif










// TODO: 在此处引用程序需要的其他头文件
