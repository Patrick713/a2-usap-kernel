cmd_drivers/net/usb/pegasus.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/net/usb/pegasus.ko drivers/net/usb/pegasus.o drivers/net/usb/pegasus.mod.o;  true
