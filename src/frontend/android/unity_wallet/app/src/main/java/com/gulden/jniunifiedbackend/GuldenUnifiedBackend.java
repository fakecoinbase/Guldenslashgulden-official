// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

package com.gulden.jniunifiedbackend;

import java.util.ArrayList;
import java.util.concurrent.atomic.AtomicBoolean;

/** This interface will be implemented in C++ and can be called from any language. */
public abstract class GuldenUnifiedBackend {
    /** Interface constants */
    public static final int VERSION = 1;

    /** Start the library */
    public static int InitUnityLib(String dataDir, GuldenUnifiedFrontend signals)
    {
        return CppProxy.InitUnityLib(dataDir,
                                     signals);
    }

    /** Stop the library */
    public static void TerminateUnityLib()
    {
        CppProxy.TerminateUnityLib();
    }

    /** Generate a QR code for a string, QR code will be as close to widthHint as possible when applying simple scaling. */
    public static QrcodeRecord QRImageFromString(String qrString, int widthHint)
    {
        return CppProxy.QRImageFromString(qrString,
                                          widthHint);
    }

    /** Get a receive address from the wallet */
    public static String GetReceiveAddress()
    {
        return CppProxy.GetReceiveAddress();
    }

    /** Get a receive address from the wallet */
    public static String GetRecoveryPhrase()
    {
        return CppProxy.GetRecoveryPhrase();
    }

    /** Check if text/address is something we are capable of sending money too */
    public static UriRecipient IsValidRecipient(UriRecord request)
    {
        return CppProxy.IsValidRecipient(request);
    }

    /** Attempt to pay a recipient */
    public static boolean performPaymentToRecipient(UriRecipient request)
    {
        return CppProxy.performPaymentToRecipient(request);
    }

    /** Get list of all transactions wallet has been involved in */
    public static ArrayList<TransactionRecord> getTransactionHistory()
    {
        return CppProxy.getTransactionHistory();
    }

    /** Get list of all address book entries */
    public static ArrayList<AddressRecord> getAddressBookRecords()
    {
        return CppProxy.getAddressBookRecords();
    }

    /** Add a record to the address book */
    public static void addAddressBookRecord(AddressRecord address)
    {
        CppProxy.addAddressBookRecord(address);
    }

    /** Delete a record from the address book */
    public static void deleteAddressBookRecord(AddressRecord address)
    {
        CppProxy.deleteAddressBookRecord(address);
    }

    private static final class CppProxy extends GuldenUnifiedBackend
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void _djinni_private_destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            _djinni_private_destroy();
            super.finalize();
        }

        public static native int InitUnityLib(String dataDir, GuldenUnifiedFrontend signals);

        public static native void TerminateUnityLib();

        public static native QrcodeRecord QRImageFromString(String qrString, int widthHint);

        public static native String GetReceiveAddress();

        public static native String GetRecoveryPhrase();

        public static native UriRecipient IsValidRecipient(UriRecord request);

        public static native boolean performPaymentToRecipient(UriRecipient request);

        public static native ArrayList<TransactionRecord> getTransactionHistory();

        public static native ArrayList<AddressRecord> getAddressBookRecords();

        public static native void addAddressBookRecord(AddressRecord address);

        public static native void deleteAddressBookRecord(AddressRecord address);
    }
}