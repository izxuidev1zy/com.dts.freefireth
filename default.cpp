#include <string>
#include <jni.h>

// config [OB55]  (com.dts.freefire) //

const char* encryptedSignature = "JEXE EL REY";

extern "C" JNIEXPORT jstring JNICALL
Java_com_your_package_name_ConfigScript_getConfigString(JNIEnv* env, jobject /* this */) {

    const char* sensitivity = "120";
    const char* aimbot = "100";
    const char* aimbot = "on";
    const char* aimfov = "60";
    const char* aimhead = "on";
    const char* bypass = "auto";

    std::string xmlConfig = "<config>";
    xmlConfig += "<sensitivity>" + std::string(sensitivity) + "</sensitivity>";
    xmlConfig += "<aimbot>" + std::string(aimbot) + "</aimbot>";
    xmlConfig += "<aimfov>" + std::string(aimfov) + "</aimfov>";
    xmlConfig += "<aimhead>" + std::string(aimhead) + "</aimhead>";
    xmlConfig += "<bypass>" + std::string(bypass) + "</bypass>";
    xmlConfig += "</config>";

    xmlConfig += encryptedSignature;

    return env->NewStringUTF(xmlConfig.c_str());
 } 
