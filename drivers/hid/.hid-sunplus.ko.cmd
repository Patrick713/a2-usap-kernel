cmd_drivers/hid/hid-sunplus.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/hid/hid-sunplus.ko drivers/hid/hid-sunplus.o drivers/hid/hid-sunplus.mod.o;  true
