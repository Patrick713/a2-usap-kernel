cmd_drivers/hid/hid-a4tech.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/hid/hid-a4tech.ko drivers/hid/hid-a4tech.o drivers/hid/hid-a4tech.mod.o;  true
