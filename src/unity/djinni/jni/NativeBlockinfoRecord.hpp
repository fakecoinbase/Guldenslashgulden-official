// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#pragma once

#include "blockinfo_record.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeBlockinfoRecord final {
public:
    using CppType = ::BlockinfoRecord;
    using JniType = jobject;

    using Boxed = NativeBlockinfoRecord;

    ~NativeBlockinfoRecord();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeBlockinfoRecord();
    friend ::djinni::JniClass<NativeBlockinfoRecord>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/gulden/jniunifiedbackend/BlockinfoRecord") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(IJLjava/lang/String;)V") };
    const jfieldID field_mHeight { ::djinni::jniGetFieldID(clazz.get(), "mHeight", "I") };
    const jfieldID field_mTimestamp { ::djinni::jniGetFieldID(clazz.get(), "mTimestamp", "J") };
    const jfieldID field_mBlockhash { ::djinni::jniGetFieldID(clazz.get(), "mBlockhash", "Ljava/lang/String;") };
};

}  // namespace djinni_generated