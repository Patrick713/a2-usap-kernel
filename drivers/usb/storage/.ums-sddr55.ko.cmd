cmd_drivers/usb/storage/ums-sddr55.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/usb/storage/ums-sddr55.ko drivers/usb/storage/ums-sddr55.o drivers/usb/storage/ums-sddr55.mod.o;  true