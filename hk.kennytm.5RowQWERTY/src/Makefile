iPhoneDevPath=/Developer/Platforms/iPhoneOS.platform/Developer
iPhoneSDKPath=$(iPhoneDevPath)/SDKs/iPhoneOS3.0.sdk
iPhoneGCCIncPath=$(iPhoneSDKPath)/usr/lib/gcc/powerpc-apple-darwin9/4.2.1/include/
iKeyExIncPath=../../include
iKeyExLibPath=../../hk.kennytm.iKeyEx/deb/usr/lib
CMLSrcPath=../../hk.kennytm.Command/src
SharedSrcPath=../../src
UIKit3SrcPath=$(SharedSrcPath)/UIKit3
UIKit4SrcPath=$(SharedSrcPath)/UIKit4

Compiler=$(iPhoneDevPath)/usr/bin/arm-apple-darwin9-gcc-4.2.1
CodeSign=ldid -S

Options=-lobjc \
	-std=c99 \
	-I$(iPhoneSDKPath)/usr/include \
	-I$(iPhoneDevPath)/usr/include \
	-I$(iPhoneGCCIncPath) \
	-I$(iKeyExIncPath) \
	-F$(iPhoneSDKPath)/System/Library/Frameworks \
	-F$(iPhoneSDKPath)/System/Library/PrivateFrameworks \
	-framework Foundation \
	-framework UIKit \
	-framework CoreFoundation \
	-framework WebCore \
	-L$(iPhoneSDKPath)/usr/lib \
	-L$(iKeyExLibPath) \
	-Wall \
	-lobjc \
	-march=armv6 \
	-mcpu=arm1176jzf-s \
	-O3 \
	-mthumb	

LayoutSources=5RowQWERTY.m $(CMLSrcPath)/CMLSelection.m
LayoutTarget=../deb/Library/iKeyEx/Keyboards/5RowQWERTY.keyboard/5RowQWERTY
LayoutOptions=-liKeyEx -dynamiclib -init _init

PrefSources=prefs.m $(SharedSrcPath)/GraphicsUtilities.m $(UIKit4SrcPath)/UIBigCharacterHUD.m $(UIKit4SrcPath)/UIEasyPickerView.m $(UIKit3SrcPath)/UIActionSheetPro.m
PrefTarget=../deb/Library/iKeyEx/Keyboards/5RowQWERTY.keyboard/Preferences.bundle/5RowQWERTY
PrefOptions=-framework Preferences -framework CoreGraphics -framework WebKit -licucore -liKeyEx -bundle

all:	$(PrefTarget)

$(LayoutTarget):	$(LayoutSources)
	$(Compiler) $(Options) $(LayoutOptions) -o $@ $^
	$(CodeSign) $@

$(PrefTarget):	$(PrefSources)
	$(Compiler) $(Options) $(PrefOptions) -o $@ $^
	$(CodeSign) $@

clean:
	-rm $(LayoutTarget)
	-rm $(PrefTarget)

