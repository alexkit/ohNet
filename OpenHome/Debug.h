#ifndef HEADER_DEBUG
#define HEADER_DEBUG

#include <OpenHome/Private/Standard.h>
#include <stdarg.h>
#include <OpenHome/Private/Printer.h>
#include <OpenHome/OhNetTypes.h>
#include <OpenHome/Exception.h>

EXCEPTION(AssertionFailed);

class AutoLog
{
public:
    AutoLog(OpenHome::TUint aLevel, const OpenHome::TChar* aString);
    ~AutoLog();
private:
    OpenHome::TUint  iLevel;
    const OpenHome::TChar* iString;
};

#ifdef DEFINE_TRACE
    #define LOG(x,...) \
        {if(OpenHome::Debug::TestLevel(OpenHome::Debug::x)) \
         { \
            OpenHome::Log::Print(__VA_ARGS__); \
         } \
        }
    #define LOG2(x,y,...) \
        {if(OpenHome::Debug::TestLevel(OpenHome::Debug::x|OpenHome::Debug::y)) \
         { \
            OpenHome::Log::Print(__VA_ARGS__); \
         } \
        }
    #define LOG3(x,y,z,...) \
        {if(OpenHome::Debug::TestLevel(OpenHome::Debug::x|OpenHome::Debug::y|OpenHome::Debug::z)) \
         { \
            OpenHome::Log::Print(__VA_ARGS__); \
         } \
        }
    #define LOG2F(x,y,...) \
        {if(OpenHome::Debug::TestLevel(OpenHome::Debug::x|OpenHome::Debug::y)) \
         { \
            OpenHome::Log::Print("%s:%d: ",__FILE__,__LINE__); \
            OpenHome::Log::Print(__VA_ARGS__); \
         } \
        }
    #define LOGF(x,...) \
        {if(OpenHome::Debug::TestLevel(OpenHome::Debug::x)) \
         { \
            OpenHome::Log::Print("%s:%d: ",__FILE__,__LINE__); \
            OpenHome::Log::Print(__VA_ARGS__); \
         } \
        }
    #define LOGT(x,...) \
        {if(OpenHome::Debug::TestLevel(OpenHome::Debug::x)) \
         { \
            const Brx& name = OpenHome::Thread::CurrentThreadName(); \
            OpenHome::Log::Print("T:%c%c%c%c:",name[0],name[1],name[2],name[3]); \
            OpenHome::Log::Print(__VA_ARGS__); \
         } \
        }
    #define LOG_HEX(x,aBrx) \
        {if(OpenHome::Debug::TestLevel(OpenHome::Debug::x)) \
         { \
            OpenHome::Log::PrintHex(aBrx); \
         } \
        }
    #define LOGF_HEX(x,aBrx) \
        {if(OpenHome::Debug::TestLevel(OpenHome::Debug::x)) \
         { \
            OpenHome::Log::Print("%s:%d: ",__FILE__,__LINE__); \
            OpenHome::Log::PrintHex(aBrx); \
         } \
        }
    #define LOGFUNC(x) \
        AutoLog localAutolog(OpenHome::Debug::x , __PRETTY_FUNCTION__)
#else //DEFINE_TRACE
    #define LOG(x,...)
    #define LOGF(x,...)
    #define LOGT(x,...)
    #define LOG2(x,y,...)
    #define LOG2F(x,y,...)
    #define LOG_HEX(x,aBrx)
    #define LOGF_HEX(x,aBrx)
    #define LOGFUNC(x)
#endif //DEFINE_TRACE

namespace OpenHome {

class Brx;

class Debug
{
public:
    static const TUint kNone           = 0;
    static const TUint kTrace          = 1<<1;
    static const TUint kThread         = 1<<2;
    static const TUint kNetwork        = 1<<3;
    static const TUint kTimer          = 1<<4;
    static const TUint kSsdpMulticast  = 1<<5;
    static const TUint kSsdpUnicast    = 1<<6;
    static const TUint kHttp           = 1<<7;
    static const TUint kDevice         = 1<<8;
    static const TUint kXmlFetch       = 1<<9;
    static const TUint kService        = 1<<10;
    static const TUint kEvent          = 1<<11;
    static const TUint kTopology       = 1<<12;
    static const TUint kDvInvocation   = 1<<13;
    static const TUint kDvEvent        = 1<<14;
    static const TUint kDvWebSocket    = 1<<15;
    static const TUint kMedia          = 1<<16;
    static const TUint kBonjour        = 1<<17;
    static const TUint kDvDevice       = 1<<18;
    static const TUint kError          = 1<<30;

    static const TUint kAll            = 0x7FFFFFFF;
    static const TUint kVerbose        = 0x80000000;

    static TBool TestLevel(TUint aLevel);
    static TUint Level();
    static void SetLevel(TUint aLevel);
    static void AddLevel(TUint aLevel);
    static void RemoveLevel(TUint aLevel);
    static TBool BreakBeforeThrow();
    static void SetBreakBeforeThrow(TBool aBreak);

private:
    static TUint iLevel;
    static TBool iBreak;
    static const TUint kMaxDebugPrintBytes = 256;
};

} // namespace OpenHome

#endif //HEADER_DEBUG
