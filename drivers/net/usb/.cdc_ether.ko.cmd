cmd_drivers/net/usb/cdc_ether.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/net/usb/cdc_ether.ko drivers/net/usb/cdc_ether.o drivers/net/usb/cdc_ether.mod.o;  true