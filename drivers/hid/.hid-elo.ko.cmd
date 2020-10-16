cmd_drivers/hid/hid-elo.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/hid/hid-elo.ko drivers/hid/hid-elo.o drivers/hid/hid-elo.mod.o;  true
