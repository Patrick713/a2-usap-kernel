cmd_drivers/net/usb/sr9800.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/net/usb/sr9800.ko drivers/net/usb/sr9800.o drivers/net/usb/sr9800.mod.o;  true
