cmd_drivers/usb/misc/ldusb.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/usb/misc/ldusb.ko drivers/usb/misc/ldusb.o drivers/usb/misc/ldusb.mod.o;  true
