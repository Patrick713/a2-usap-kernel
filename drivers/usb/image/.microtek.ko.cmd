cmd_drivers/usb/image/microtek.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/usb/image/microtek.ko drivers/usb/image/microtek.o drivers/usb/image/microtek.mod.o;  true
