/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier */

#ifndef _Included_com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier
#define _Included_com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier
 * Method:    maxCipherBytes
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL
Java_com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier_maxCipherBytes(
    JNIEnv*, jclass, jint);

/*
 * Class:     com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier
 * Method:    encryptFast
 * Signature: ([BIJ)[B
 */
JNIEXPORT jbyteArray JNICALL
Java_com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier_encryptFast(
    JNIEnv*, jclass, jbyteArray, jint, jlong);

/*
 * Class:     com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier
 * Method:    encryptFastWithoutPrecompute
 * Signature: ([BI[B[B)[B
 */
JNIEXPORT jbyteArray JNICALL
Java_com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier_encryptFastWithoutPrecompute(
    JNIEnv*, jclass, jbyteArray, jint, jbyteArray, jbyteArray);

/*
 * Class:     com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier
 * Method:    encrypt
 * Signature: ([BIJ)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier_encrypt(
    JNIEnv*, jclass, jbyteArray, jint, jlong);

/*
 * Class:     com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier
 * Method:    encryptWithoutPrecompute
 * Signature: ([BI[B)[B
 */
JNIEXPORT jbyteArray JNICALL
Java_com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier_encryptWithoutPrecompute(
    JNIEnv*, jclass, jbyteArray, jint, jbyteArray);

/*
 * Class:     com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier
 * Method:    decrypt
 * Signature: ([BJ)Lcom/webank/wedpr/sdk/jni/codec/FloatingPointNumber;
 */
JNIEXPORT jobject JNICALL Java_com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier_decrypt(
    JNIEnv*, jclass, jbyteArray, jlong);

/*
 * Class:     com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier
 * Method:    decryptWithoutPrecompute
 * Signature: ([B[B[B)Lcom/webank/wedpr/sdk/jni/codec/FloatingPointNumber;
 */
JNIEXPORT jobject JNICALL
Java_com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier_decryptWithoutPrecompute(
    JNIEnv*, jclass, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier
 * Method:    add
 * Signature: ([B[BJ)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier_add(
    JNIEnv*, jclass, jbyteArray, jbyteArray, jlong);

/*
 * Class:     com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier
 * Method:    addWithoutPrecompute
 * Signature: ([B[B[B)[B
 */
JNIEXPORT jbyteArray JNICALL
Java_com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier_addWithoutPrecompute(
    JNIEnv*, jclass, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier
 * Method:    sub
 * Signature: ([B[BJ)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier_sub(
    JNIEnv*, jclass, jbyteArray, jbyteArray, jlong);

/*
 * Class:     com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier
 * Method:    subWithoutPrecompute
 * Signature: ([B[B[B)[B
 */
JNIEXPORT jbyteArray JNICALL
Java_com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier_subWithoutPrecompute(
    JNIEnv*, jclass, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier
 * Method:    scalaMul
 * Signature: ([BI[BJ)[B
 */
JNIEXPORT jbyteArray JNICALL
Java_com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier_scalaMul(
    JNIEnv*, jclass, jbyteArray, jint, jbyteArray, jlong);

/*
 * Class:     com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier
 * Method:    scalaMulWithoutPrecompute
 * Signature: ([BI[B[B)[B
 */
JNIEXPORT jbyteArray JNICALL
Java_com_webank_wedpr_sdk_jni_homo_NativeFloatingPointPaillier_scalaMulWithoutPrecompute(
    JNIEnv*, jclass, jbyteArray, jint, jbyteArray, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
