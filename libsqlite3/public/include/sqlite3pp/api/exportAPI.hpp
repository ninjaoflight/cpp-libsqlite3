#pragma once

#if defined(LIB_sqlite3LIBRARY_EXPORT)
#   define LIB_sqlite3API EXPORT
#else
#   define LIB_sqlite3API IMPORT
#endif

#if defined(_MSC_VER)
    //  Microsoft 
    #define EXPORT __declspec(dllexport)
    #define IMPORT __declspec(dllimport)
#elif defined(__GNUC__)
    //  GCC
    #define EXPORT __attribute__((visibility("default")))
    #define IMPORT
#else
    //  do nothing
    #define EXPORT
    #define IMPORT
    #pragma warning Unknown dynamic link import/export semantics.
#endif