cmd_drivers/usb/atm/usbatm.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/usb/atm/usbatm.ko drivers/usb/atm/usbatm.o drivers/usb/atm/usbatm.mod.o;  true