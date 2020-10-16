cmd_drivers/hid/uhid.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/hid/uhid.ko drivers/hid/uhid.o drivers/hid/uhid.mod.o;  true
