//
//  CTTest.h
//  TestApiLevel
//
//  Created by zmjios on 16/1/17.
//  Copyright © 2016年 zmjios. All rights reserved.
//

#ifndef CTTest_h
#define CTTest_h

#include <Availability.h>
#include <Foundation/NSObjCRuntime.h>
#include <CoreFoundation/CFAvailability.h>

#undef NS_AVAILABLE_IOS
#undef NS_AVAILABLE
#undef CS_CLASS_AVAILABLE

#define APICHECK_2_0( _ios ) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_##_ios)
#define APICHECK_2_1( _ios ) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_##_ios)
#define APICHECK_2_2( _ios ) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_##_ios)
#define APICHECK_3_0( _ios ) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_##_ios)
#define APICHECK_3_1( _ios ) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_##_ios)
#define APICHECK_3_2( _ios ) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_##_ios)
#define APICHECK_4_0( _ios ) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_##_ios)
#define APICHECK_4_1( _ios ) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_##_ios)
#define APICHECK_4_2( _ios ) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_##_ios)
#define APICHECK_4_3( _ios ) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_##_ios)
#define APICHECK_5_0( _ios ) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_##_ios)
#define APICHECK_5_1( _ios ) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_##_ios)
#define APICHECK_6_0( _ios ) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_##_ios)
#define APICHECK_6_1( _ios ) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_##_ios)
#define APICHECK_6_2( _ios ) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_##_ios)
#define APICHECK_7_0( _ios ) __attribute__((deprecated("API newer than Deployment Target.")))
#define APICHECK_7_1( _ios ) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_##_ios)
#define APICHECK_8_0( _ios ) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_##_ios)
#define APICHECK_8_1( _ios ) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_##_ios)
#define APICHECK_8_2( _ios ) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_##_ios)
#define APICHECK_8_3( _ios ) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_##_ios)
#define APICHECK_8_4( _ios ) __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_##_ios)
#define APICHECK_9_0( _ios ) __attribute__((deprecated("API newer than Deployment Target.")))
#define APICHECK_9_1( _ios ) __attribute__((deprecated("API newer than Deployment Target.")))
#define APICHECK_9_2( _ios ) __attribute__((deprecated("API newer than Deployment Target.")))
#define APICHECK_NA( _ios )  __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_##_ios)


#define NS_AVAILABLE_IOS(_ios) APICHECK_ ## _ios( _ios )
#define NS_AVAILABLE(_mac, _ios) APICHECK_ ## _ios( _ios )
#define NS_AVAILABLE(_mac, _ios) APICHECK_ ## _ios( _ios )


//#if (defined(__IPHONE_7_0) && __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_7_0) || (defined(__MAC_10_11) &&  __MAC_OS_X_VERSION_MAX_ALLOWED >= __MAC_10_11)
//#include <CoreFoundation/CFAvailability.h>
//#undef CF_AVAILABLE
//#define CF_AVAILABLE(_mac, _ios) APICHECK_ ## _ios( _ios )
//#undef CF_AVAILABLE_MAC
//#define CF_AVAILABLE_MAC(_mac) APICHECK_ ## _ios( _ios )
//#undef CF_AVAILABLE_IOS
//#define CF_AVAILABLE_IOS(_ios) APICHECK_ ## _ios( _ios )
//
//#endif


//检查系统版本
#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)


#endif /* CTTest_h */
