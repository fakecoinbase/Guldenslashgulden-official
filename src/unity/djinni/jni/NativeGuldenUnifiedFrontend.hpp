// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#pragma once

#include "djinni_support.hpp"
#include "gulden_unified_frontend.hpp"

namespace djinni_generated {

class NativeGuldenUnifiedFrontend final : ::djinni::JniInterface<::GuldenUnifiedFrontend, NativeGuldenUnifiedFrontend> {
public:
    using CppType = std::shared_ptr<::GuldenUnifiedFrontend>;
    using CppOptType = std::shared_ptr<::GuldenUnifiedFrontend>;
    using JniType = jobject;

    using Boxed = NativeGuldenUnifiedFrontend;

    ~NativeGuldenUnifiedFrontend();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeGuldenUnifiedFrontend>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeGuldenUnifiedFrontend>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeGuldenUnifiedFrontend();
    friend ::djinni::JniClass<NativeGuldenUnifiedFrontend>;
    friend ::djinni::JniInterface<::GuldenUnifiedFrontend, NativeGuldenUnifiedFrontend>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::GuldenUnifiedFrontend
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void notifyUnifiedProgress(float progress) override;
        bool notifyBalanceChange(const ::BalanceRecord & new_balance) override;
        bool notifyNewTransaction(const ::TransactionRecord & new_transaction) override;
        bool notifyUpdatedTransaction(const ::TransactionRecord & transaction) override;
        void notifyInitWithExistingWallet() override;
        void notifyInitWithoutExistingWallet() override;
        bool notifyShutdown() override;
        bool notifyCoreReady() override;
        void logPrint(const std::string & str) override;

    private:
        friend ::djinni::JniInterface<::GuldenUnifiedFrontend, ::djinni_generated::NativeGuldenUnifiedFrontend>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/gulden/jniunifiedbackend/GuldenUnifiedFrontend") };
    const jmethodID method_notifyUnifiedProgress { ::djinni::jniGetMethodID(clazz.get(), "notifyUnifiedProgress", "(F)V") };
    const jmethodID method_notifyBalanceChange { ::djinni::jniGetMethodID(clazz.get(), "notifyBalanceChange", "(Lcom/gulden/jniunifiedbackend/BalanceRecord;)Z") };
    const jmethodID method_notifyNewTransaction { ::djinni::jniGetMethodID(clazz.get(), "notifyNewTransaction", "(Lcom/gulden/jniunifiedbackend/TransactionRecord;)Z") };
    const jmethodID method_notifyUpdatedTransaction { ::djinni::jniGetMethodID(clazz.get(), "notifyUpdatedTransaction", "(Lcom/gulden/jniunifiedbackend/TransactionRecord;)Z") };
    const jmethodID method_notifyInitWithExistingWallet { ::djinni::jniGetMethodID(clazz.get(), "notifyInitWithExistingWallet", "()V") };
    const jmethodID method_notifyInitWithoutExistingWallet { ::djinni::jniGetMethodID(clazz.get(), "notifyInitWithoutExistingWallet", "()V") };
    const jmethodID method_notifyShutdown { ::djinni::jniGetMethodID(clazz.get(), "notifyShutdown", "()Z") };
    const jmethodID method_notifyCoreReady { ::djinni::jniGetMethodID(clazz.get(), "notifyCoreReady", "()Z") };
    const jmethodID method_logPrint { ::djinni::jniGetMethodID(clazz.get(), "logPrint", "(Ljava/lang/String;)V") };
};

}  // namespace djinni_generated
