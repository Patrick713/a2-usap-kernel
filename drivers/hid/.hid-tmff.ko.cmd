cmd_drivers/hid/hid-tmff.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/hid/hid-tmff.ko drivers/hid/hid-tmff.o drivers/hid/hid-tmff.mod.o;  true