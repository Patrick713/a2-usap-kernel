cmd_drivers/net/usb/plusb.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/net/usb/plusb.ko drivers/net/usb/plusb.o drivers/net/usb/plusb.mod.o;  true
