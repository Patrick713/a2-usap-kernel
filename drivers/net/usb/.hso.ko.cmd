cmd_drivers/net/usb/hso.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/net/usb/hso.ko drivers/net/usb/hso.o drivers/net/usb/hso.mod.o;  true
