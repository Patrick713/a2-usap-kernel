cmd_drivers/usb/class/usblp.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/usb/class/usblp.ko drivers/usb/class/usblp.o drivers/usb/class/usblp.mod.o;  true
