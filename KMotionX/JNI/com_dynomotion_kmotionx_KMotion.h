/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_dynomotion_kmotionx_KMotion */

#ifndef _Included_com_dynomotion_kmotionx_KMotion
#define _Included_com_dynomotion_kmotionx_KMotion
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    init
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_dynomotion_kmotionx_KMotion_init
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    WriteLineReadLine
 * Signature: (Ljava/lang/String;[B)I
 */
JNIEXPORT jint JNICALL Java_com_dynomotion_kmotionx_KMotion_WriteLineReadLine
  (JNIEnv *, jobject, jstring, jbyteArray);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    WriteLine
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_dynomotion_kmotionx_KMotion_WriteLine
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    WriteLineWithEcho
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_dynomotion_kmotionx_KMotion_WriteLineWithEcho
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    WaitToken
 * Signature: (ZI)I
 */
JNIEXPORT jint JNICALL Java_com_dynomotion_kmotionx_KMotion_WaitToken
  (JNIEnv *, jobject, jboolean, jint);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    KMotionLock
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_dynomotion_kmotionx_KMotion_KMotionLock
  (JNIEnv *, jobject);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    USBLocation
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_dynomotion_kmotionx_KMotion_USBLocation
  (JNIEnv *, jobject);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    KMotionLockRecovery
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_dynomotion_kmotionx_KMotion_KMotionLockRecovery
  (JNIEnv *, jobject);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    ReleaseToken
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_dynomotion_kmotionx_KMotion_ReleaseToken
  (JNIEnv *, jobject);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    Failed
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_dynomotion_kmotionx_KMotion_Failed
  (JNIEnv *, jobject);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    Disconnect
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_dynomotion_kmotionx_KMotion_Disconnect
  (JNIEnv *, jobject);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    FirmwareVersion
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_dynomotion_kmotionx_KMotion_FirmwareVersion
  (JNIEnv *, jobject);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    CheckForReady
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_dynomotion_kmotionx_KMotion_CheckForReady
  (JNIEnv *, jobject);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    LoadCoff
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_dynomotion_kmotionx_KMotion_LoadCoff
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    CompileAndLoadCoff
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_dynomotion_kmotionx_KMotion_CompileAndLoadCoff__Ljava_lang_String_2I
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    CompileAndLoadCoff
 * Signature: (Ljava/lang/String;I[BI)I
 */
JNIEXPORT jint JNICALL Java_com_dynomotion_kmotionx_KMotion_CompileAndLoadCoff__Ljava_lang_String_2I_3BI
  (JNIEnv *, jobject, jstring, jint, jbyteArray, jint);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    Compile
 * Signature: (Ljava/lang/String;Ljava/lang/String;II[BI)I
 */
JNIEXPORT jint JNICALL Java_com_dynomotion_kmotionx_KMotion_Compile
  (JNIEnv *, jobject, jstring, jstring, jint, jint, jbyteArray, jint);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    GetLoadAddress
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_com_dynomotion_kmotionx_KMotion_GetLoadAddress
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    ConvertToOut
 * Signature: (ILjava/lang/String;[BI)V
 */
JNIEXPORT void JNICALL Java_com_dynomotion_kmotionx_KMotion_ConvertToOut
  (JNIEnv *, jobject, jint, jstring, jbyteArray, jint);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    ServiceConsole
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_dynomotion_kmotionx_KMotion_ServiceConsole
  (JNIEnv *, jobject);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    SetConsoleCallback
 * Signature: (Lcom/dynomotion/kmotionx/callback/ConsoleCallbackHandler;)I
 */
JNIEXPORT jint JNICALL Java_com_dynomotion_kmotionx_KMotion_SetConsoleCallback
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    SetErrMsgCallback
 * Signature: (Lcom/dynomotion/kmotionx/callback/ConsoleCallbackHandler;)I
 */
JNIEXPORT jint JNICALL Java_com_dynomotion_kmotionx_KMotion_SetErrMsgCallback
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    CheckKMotionVersion
 * Signature: (IZ)I
 */
JNIEXPORT jint JNICALL Java_com_dynomotion_kmotionx_KMotion_CheckKMotionVersion
  (JNIEnv *, jobject, jint, jboolean);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    ExtractCoffVersionString
 * Signature: (Ljava/lang/String;[B)I
 */
JNIEXPORT jint JNICALL Java_com_dynomotion_kmotionx_KMotion_ExtractCoffVersionString
  (JNIEnv *, jobject, jstring, jbyteArray);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    DoErrMsg
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_dynomotion_kmotionx_KMotion_DoErrMsg
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    GetMotionParams
 * Signature: ([D[Z)V
 */
JNIEXPORT void JNICALL Java_com_dynomotion_kmotionx_KMotion_GetMotionParams
  (JNIEnv *, jobject, jdoubleArray, jbooleanArray);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    SetMotionParams
 * Signature: ([D[Z)V
 */
JNIEXPORT void JNICALL Java_com_dynomotion_kmotionx_KMotion_SetMotionParams
  (JNIEnv *, jobject, jdoubleArray, jbooleanArray);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    SetUserMCodeCallback
 * Signature: (Lcom/dynomotion/kmotionx/callback/UserMCodeCallbackHandler;)I
 */
JNIEXPORT jint JNICALL Java_com_dynomotion_kmotionx_KMotion_SetUserMCodeCallback
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    SetUserCallback
 * Signature: (Lcom/dynomotion/kmotionx/callback/UserCallbackHandler;)I
 */
JNIEXPORT jint JNICALL Java_com_dynomotion_kmotionx_KMotion_SetUserCallback
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_dynomotion_kmotionx_KMotion
 * Method:    Interpret
 * Signature: (ILjava/lang/String;IIILcom/dynomotion/kmotionx/callback/StatusCallbackHandler;Lcom/dynomotion/kmotionx/callback/CompleteCallbackHandler;)I
 */
JNIEXPORT jint JNICALL Java_com_dynomotion_kmotionx_KMotion_Interpret
  (JNIEnv *, jobject, jint, jstring, jint, jint, jint, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
