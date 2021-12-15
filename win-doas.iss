#define MyAppName "win-doas"
#define MyAppVersion "1.0"
#define MyAppPublisher "Alexandru Balan"
#define MyAppURL "https://github.com/alxb421/win-doas"
#define MyAppExeName "win-doas.exe"

[Setup]
AppId={{2DDC06B0-4823-4F8B-9B8C-BF1F7B814AD1}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
;AppVerName={#MyAppName} {#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
CreateAppDir=no
LicenseFile=C:\Users\Alex\Desktop\LICENSE.txt
OutputDir=C:\Users\Alex\Desktop
OutputBaseFilename=win-doas-install
Compression=lzma
SolidCompression=yes
WizardStyle=modern

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"

[Files]
Source: "C:\Users\Alex\Desktop\win-doas.exe"; DestDir: "{win}"; Flags: ignoreversion
