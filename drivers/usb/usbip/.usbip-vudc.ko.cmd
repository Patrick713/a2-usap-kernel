cmd_drivers/usb/usbip/usbip-vudc.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/usb/usbip/usbip-vudc.ko drivers/usb/usbip/usbip-vudc.o drivers/usb/usbip/usbip-vudc.mod.o;  true