cmd_drivers/usb/misc/emi62.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/usb/misc/emi62.ko drivers/usb/misc/emi62.o drivers/usb/misc/emi62.mod.o;  true