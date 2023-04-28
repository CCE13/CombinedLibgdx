package com.abk.distance.utils

import com.unity3d.player.UnityPlayer

class UnityCallbacks {
    private val TAG: String = "UnityCallbacks"

    companion object {
        const val CALLBACK_OBJ: String = "RunningPluginListener"

        const val onUpdateData: String = "onUpdateData"
        const val onPermissionDenied: String = "onPermissionDenied"

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

    }
}