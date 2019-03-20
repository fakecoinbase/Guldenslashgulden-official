// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#import "DBPeerRecord+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto PeerRecord::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::String::toCpp(obj.ip),
            ::djinni::String::toCpp(obj.hostname),
            ::djinni::I32::toCpp(obj.startHeight),
            ::djinni::I32::toCpp(obj.syncedHeight),
            ::djinni::I32::toCpp(obj.commonHeight),
            ::djinni::I32::toCpp(obj.latency),
            ::djinni::String::toCpp(obj.userAgent),
            ::djinni::I64::toCpp(obj.protocol)};
}

auto PeerRecord::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[DBPeerRecord alloc] initWithIp:(::djinni::String::fromCpp(cpp.ip))
                                   hostname:(::djinni::String::fromCpp(cpp.hostname))
                                startHeight:(::djinni::I32::fromCpp(cpp.start_height))
                               syncedHeight:(::djinni::I32::fromCpp(cpp.synced_height))
                               commonHeight:(::djinni::I32::fromCpp(cpp.common_height))
                                    latency:(::djinni::I32::fromCpp(cpp.latency))
                                  userAgent:(::djinni::String::fromCpp(cpp.userAgent))
                                   protocol:(::djinni::I64::fromCpp(cpp.protocol))];
}

}  // namespace djinni_generated
