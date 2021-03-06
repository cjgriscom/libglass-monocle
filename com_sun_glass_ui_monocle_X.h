/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_sun_glass_ui_monocle_X */

#ifndef _Included_com_sun_glass_ui_monocle_X
#define _Included_com_sun_glass_ui_monocle_X
#ifdef __cplusplus
extern "C" {
#endif
#undef com_sun_glass_ui_monocle_X_None
#define com_sun_glass_ui_monocle_X_None 0LL
#undef com_sun_glass_ui_monocle_X_CopyFromParent
#define com_sun_glass_ui_monocle_X_CopyFromParent 0L
#undef com_sun_glass_ui_monocle_X_InputOutput
#define com_sun_glass_ui_monocle_X_InputOutput 1L
#undef com_sun_glass_ui_monocle_X_ButtonPressMask
#define com_sun_glass_ui_monocle_X_ButtonPressMask 4LL
#undef com_sun_glass_ui_monocle_X_ButtonReleaseMask
#define com_sun_glass_ui_monocle_X_ButtonReleaseMask 8LL
#undef com_sun_glass_ui_monocle_X_PointerMotionMask
#define com_sun_glass_ui_monocle_X_PointerMotionMask 64LL
#undef com_sun_glass_ui_monocle_X_SubstructureRedirectMask
#define com_sun_glass_ui_monocle_X_SubstructureRedirectMask 524288LL
#undef com_sun_glass_ui_monocle_X_SubstructureNotifyMask
#define com_sun_glass_ui_monocle_X_SubstructureNotifyMask 1048576LL
#undef com_sun_glass_ui_monocle_X_CWOverrideRedirect
#define com_sun_glass_ui_monocle_X_CWOverrideRedirect 512LL
#undef com_sun_glass_ui_monocle_X_CWEventMask
#define com_sun_glass_ui_monocle_X_CWEventMask 2048LL
#undef com_sun_glass_ui_monocle_X_CWCursorMask
#define com_sun_glass_ui_monocle_X_CWCursorMask 16384LL
#undef com_sun_glass_ui_monocle_X_ButtonPress
#define com_sun_glass_ui_monocle_X_ButtonPress 4L
#undef com_sun_glass_ui_monocle_X_ButtonRelease
#define com_sun_glass_ui_monocle_X_ButtonRelease 5L
#undef com_sun_glass_ui_monocle_X_MotionNotify
#define com_sun_glass_ui_monocle_X_MotionNotify 6L
#undef com_sun_glass_ui_monocle_X_Button1
#define com_sun_glass_ui_monocle_X_Button1 1L
#undef com_sun_glass_ui_monocle_X_Button2
#define com_sun_glass_ui_monocle_X_Button2 2L
#undef com_sun_glass_ui_monocle_X_Button3
#define com_sun_glass_ui_monocle_X_Button3 3L
#undef com_sun_glass_ui_monocle_X_Button4
#define com_sun_glass_ui_monocle_X_Button4 4L
#undef com_sun_glass_ui_monocle_X_Button5
#define com_sun_glass_ui_monocle_X_Button5 5L
#undef com_sun_glass_ui_monocle_X__NET_WM_STATE_REMOVE
#define com_sun_glass_ui_monocle_X__NET_WM_STATE_REMOVE 0LL
#undef com_sun_glass_ui_monocle_X__NET_WM_STATE_ADD
#define com_sun_glass_ui_monocle_X__NET_WM_STATE_ADD 1LL
#undef com_sun_glass_ui_monocle_X__NET_WM_STATE_TOGGLE
#define com_sun_glass_ui_monocle_X__NET_WM_STATE_TOGGLE 2LL
#undef com_sun_glass_ui_monocle_X_GrabModeSync
#define com_sun_glass_ui_monocle_X_GrabModeSync 0LL
#undef com_sun_glass_ui_monocle_X_GrabModeAsync
#define com_sun_glass_ui_monocle_X_GrabModeAsync 1LL
#undef com_sun_glass_ui_monocle_X_CurrentTime
#define com_sun_glass_ui_monocle_X_CurrentTime 0LL
/*
 * Class:     com_sun_glass_ui_monocle_X
 * Method:    XInitThreads
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_sun_glass_ui_monocle_X_XInitThreads
  (JNIEnv *, jobject);

/*
 * Class:     com_sun_glass_ui_monocle_X
 * Method:    XLockDisplay
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_sun_glass_ui_monocle_X_XLockDisplay
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_sun_glass_ui_monocle_X
 * Method:    XUnlockDisplay
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_sun_glass_ui_monocle_X_XUnlockDisplay
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_sun_glass_ui_monocle_X
 * Method:    XOpenDisplay
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_sun_glass_ui_monocle_X_XOpenDisplay
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_sun_glass_ui_monocle_X
 * Method:    DefaultScreenOfDisplay
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_sun_glass_ui_monocle_X_DefaultScreenOfDisplay
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_sun_glass_ui_monocle_X
 * Method:    RootWindowOfScreen
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_sun_glass_ui_monocle_X_RootWindowOfScreen
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_sun_glass_ui_monocle_X
 * Method:    WidthOfScreen
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_sun_glass_ui_monocle_X_WidthOfScreen
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_sun_glass_ui_monocle_X
 * Method:    HeightOfScreen
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_sun_glass_ui_monocle_X_HeightOfScreen
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_sun_glass_ui_monocle_X
 * Method:    XCreateWindow
 * Signature: (JJIIIIIIIJJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_sun_glass_ui_monocle_X_XCreateWindow
  (JNIEnv *, jobject, jlong, jlong, jint, jint, jint, jint, jint, jint, jint, jlong, jlong, jlong);

/*
 * Class:     com_sun_glass_ui_monocle_X
 * Method:    XMapWindow
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_sun_glass_ui_monocle_X_XMapWindow
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_sun_glass_ui_monocle_X
 * Method:    XStoreName
 * Signature: (JJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_sun_glass_ui_monocle_X_XStoreName
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     com_sun_glass_ui_monocle_X
 * Method:    XSync
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_sun_glass_ui_monocle_X_XSync
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     com_sun_glass_ui_monocle_X
 * Method:    XGetGeometry
 * Signature: (JJ[J[I[I[I[I[I[I)V
 */
JNIEXPORT void JNICALL Java_com_sun_glass_ui_monocle_X_XGetGeometry
  (JNIEnv *, jobject, jlong, jlong, jlongArray, jintArray, jintArray, jintArray, jintArray, jintArray, jintArray);

/*
 * Class:     com_sun_glass_ui_monocle_X
 * Method:    XNextEvent
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_sun_glass_ui_monocle_X_XNextEvent
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_sun_glass_ui_monocle_X
 * Method:    XInternAtom
 * Signature: (JLjava/lang/String;Z)J
 */
JNIEXPORT jlong JNICALL Java_com_sun_glass_ui_monocle_X_XInternAtom
  (JNIEnv *, jobject, jlong, jstring, jboolean);

/*
 * Class:     com_sun_glass_ui_monocle_X
 * Method:    XSendEvent
 * Signature: (JJZJJ)V
 */
JNIEXPORT void JNICALL Java_com_sun_glass_ui_monocle_X_XSendEvent
  (JNIEnv *, jobject, jlong, jlong, jboolean, jlong, jlong);

/*
 * Class:     com_sun_glass_ui_monocle_X
 * Method:    XGrabKeyboard
 * Signature: (JJZJJJ)V
 */
JNIEXPORT void JNICALL Java_com_sun_glass_ui_monocle_X_XGrabKeyboard
  (JNIEnv *, jobject, jlong, jlong, jboolean, jlong, jlong, jlong);

/*
 * Class:     com_sun_glass_ui_monocle_X
 * Method:    XWarpPointer
 * Signature: (JJJIIIIII)V
 */
JNIEXPORT void JNICALL Java_com_sun_glass_ui_monocle_X_XWarpPointer
  (JNIEnv *, jobject, jlong, jlong, jlong, jint, jint, jint, jint, jint, jint);

/*
 * Class:     com_sun_glass_ui_monocle_X
 * Method:    XFlush
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_sun_glass_ui_monocle_X_XFlush
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_sun_glass_ui_monocle_X
 * Method:    XQueryPointer
 * Signature: (JJ[I)V
 */
JNIEXPORT void JNICALL Java_com_sun_glass_ui_monocle_X_XQueryPointer
  (JNIEnv *, jobject, jlong, jlong, jintArray);

/*
 * Class:     com_sun_glass_ui_monocle_X
 * Method:    XCreateBitmapFromData
 * Signature: (JJLjava/nio/ByteBuffer;II)J
 */
JNIEXPORT jlong JNICALL Java_com_sun_glass_ui_monocle_X_XCreateBitmapFromData
  (JNIEnv *, jobject, jlong, jlong, jobject, jint, jint);

/*
 * Class:     com_sun_glass_ui_monocle_X
 * Method:    XCreatePixmapCursor
 * Signature: (JJJJJII)J
 */
JNIEXPORT jlong JNICALL Java_com_sun_glass_ui_monocle_X_XCreatePixmapCursor
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong, jlong, jint, jint);

/*
 * Class:     com_sun_glass_ui_monocle_X
 * Method:    XFreePixmap
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_sun_glass_ui_monocle_X_XFreePixmap
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_sun_glass_ui_monocle_X
 * Method:    XDefineCursor
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_sun_glass_ui_monocle_X_XDefineCursor
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_sun_glass_ui_monocle_X
 * Method:    XUndefineCursor
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_sun_glass_ui_monocle_X_XUndefineCursor
  (JNIEnv *, jobject, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
