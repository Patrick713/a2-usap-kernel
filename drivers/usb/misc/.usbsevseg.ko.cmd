cmd_drivers/usb/misc/usbsevseg.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/usb/misc/usbsevseg.ko drivers/usb/misc/usbsevseg.o drivers/usb/misc/usbsevseg.mod.o;  true
