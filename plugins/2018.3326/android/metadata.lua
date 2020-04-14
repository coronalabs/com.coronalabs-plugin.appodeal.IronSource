local metadata =
{
	plugin =
	{
		format = "jar",
		manifest =
		{
			applicationChildElements =
			{
				[[
        <!--suppress AndroidDomInspection -->
        <activity android:name="com.ironsource.sdk.controller.ControllerActivity" android:configChanges="orientation|screenSize"
            android:hardwareAccelerated="true" />
        <!--suppress AndroidDomInspection -->
        <activity android:name="com.ironsource.sdk.controller.InterstitialActivity" android:configChanges="orientation|screenSize"
            android:hardwareAccelerated="true" android:theme="@android:style/Theme.Translucent" />
        <!--suppress AndroidDomInspection -->
        <activity android:name="com.ironsource.sdk.controller.OpenUrlActivity" android:configChanges="orientation|screenSize"
            android:hardwareAccelerated="true" android:theme="@android:style/Theme.Translucent" />
					]]
			}
		}
	},
}

return metadata