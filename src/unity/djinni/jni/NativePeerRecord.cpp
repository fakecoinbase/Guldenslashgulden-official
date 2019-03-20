// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#include "NativePeerRecord.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativePeerRecord::NativePeerRecord() = default;

NativePeerRecord::~NativePeerRecord() = default;

auto NativePeerRecord::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativePeerRecord>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.ip)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.hostname)),
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.start_height)),
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.synced_height)),
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.common_height)),
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.latency)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.userAgent)),
                                                           ::djinni::get(::djinni::I64::fromCpp(jniEnv, c.protocol)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativePeerRecord::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 9);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativePeerRecord>::get();
    return {::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_mIp)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_mHostname)),
            ::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_mStartHeight)),
            ::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_mSyncedHeight)),
            ::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_mCommonHeight)),
            ::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_mLatency)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_mUserAgent)),
            ::djinni::I64::toCpp(jniEnv, jniEnv->GetLongField(j, data.field_mProtocol))};
}

}  // namespace djinni_generated
