cmd_drivers/hid/wacom.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/hid/wacom.ko drivers/hid/wacom.o drivers/hid/wacom.mod.o;  true
