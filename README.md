# Setup Instructions

## Windows

Download the depot_tools bundle and extract it somewhere.

https://storage.googleapis.com/chrome-infra/depot_tools.zip

Add depot_tools to the start of your PATH (must be ahead of any installs of Python). Assuming you unzipped the bundle to C:\workspace\depot_tools:

With Administrator access:
Control Panel → System and Security → System → Advanced system settings

Modify the PATH system variable to include C:\workspace\depot_tools.

Without Administrator access:
Control Panel → User Accounts → User Accounts → Change my environment variables

Add a PATH user variable: C:\workspace\depot_tools;%PATH%.

Go to groups_workspace and run `gclient sync`.

## Linux

```
git clone https://chromium.googlesource.com/chromium/tools/depot_tools.git
cd groups_workspace
PATH=$PATH:../depot_tools gclient sync
```

Reference:

https://commondatastorage.googleapis.com/chrome-infra-docs/flat/depot_tools/docs/html/depot_tools_tutorial.html#_setting_up