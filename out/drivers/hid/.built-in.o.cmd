cmd_drivers/hid/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o drivers/hid/built-in.o drivers/hid/hid.o drivers/hid/uhid.o drivers/hid/hid-generic.o drivers/hid/hid-apple.o drivers/hid/hid-asus-gamepad.o drivers/hid/hid-dr.o drivers/hid/hid-elecom.o drivers/hid/hid-ezkey.o drivers/hid/hid-gyration.o drivers/hid/hid-kensington.o drivers/hid/hid-keytouch.o drivers/hid/hid-kye.o drivers/hid/hid-lcpower.o drivers/hid/hid-logitech.o drivers/hid/hid-logitech-dj.o drivers/hid/hid-logitech-hidpp.o drivers/hid/hid-magicmouse.o drivers/hid/hid-microsoft.o drivers/hid/hid-multitouch.o drivers/hid/hid-ntrig.o drivers/hid/hid-plantronics.o drivers/hid/hid-roccat.o drivers/hid/hid-roccat-common.o drivers/hid/hid-roccat-arvo.o drivers/hid/hid-roccat-isku.o drivers/hid/hid-roccat-kone.o drivers/hid/hid-roccat-koneplus.o drivers/hid/hid-roccat-konepure.o drivers/hid/hid-roccat-kovaplus.o drivers/hid/hid-roccat-lua.o drivers/hid/hid-roccat-pyra.o drivers/hid/hid-roccat-ryos.o drivers/hid/hid-roccat-savu.o drivers/hid/hid-saitek.o drivers/hid/hid-samsung.o drivers/hid/hid-sony.o drivers/hid/hid-speedlink.o drivers/hid/hid-steam.o drivers/hid/hid-tmff.o drivers/hid/wacom.o drivers/hid/hid-wiimote.o drivers/hid/usbhid/built-in.o ; scripts/mod/modpost drivers/hid/built-in.o