cmd_drivers/usb/gadget/legacy/g_cdc.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/usb/gadget/legacy/g_cdc.ko drivers/usb/gadget/legacy/g_cdc.o drivers/usb/gadget/legacy/g_cdc.mod.o;  true