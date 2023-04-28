package com.runai.unitycallbacks

import com.unity3d.player.UnityPlayer

class UnityCallbacks {
    private val TAG: String = "UnityCallbacks"

    companion object {
        const val CALLBACK_OBJ: String = "RunningPluginListener"

        const val onUpdateData: String = "onUpdateData"
        const val onPermissionDenied: String = "onPermissionDenied"
        const val onUpdateAI : String = "onUpdateAI"

        @JvmStatic
        fun onUpdateData(data: String) {
            try {
                UnityPlayer.UnitySendMessage(CALLBACK_OBJ, onUpdateData, data)
            } catch (e: Exception) {
                e.printStackTrace()
            }
        }

        @JvmStatic
        fun permissionDenied(permission: String) {
            try {
                UnityPlayer.UnitySendMessage(CALLBACK_OBJ, onPermissionDenied, permission)
            } catch (e: Exception) {
                e.printStackTrace()
            }
        }
        @JvmStatic
        fun updateAI(data : String){
            try {
                UnityPlayer.UnitySendMessage(CALLBACK_OBJ, onUpdateAI, data)
            } catch (e: Exception) {
                e.printStackTrace()
            }
        }

    }
}