cmd_drivers/usb/misc/cytherm.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/usb/misc/cytherm.ko drivers/usb/misc/cytherm.o drivers/usb/misc/cytherm.mod.o;  true
