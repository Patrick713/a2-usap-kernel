cmd_drivers/usb/misc/adutux.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/usb/misc/adutux.ko drivers/usb/misc/adutux.o drivers/usb/misc/adutux.mod.o;  true
