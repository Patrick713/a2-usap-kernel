cmd_drivers/net/usb/smsc75xx.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/net/usb/smsc75xx.ko drivers/net/usb/smsc75xx.o drivers/net/usb/smsc75xx.mod.o;  true
