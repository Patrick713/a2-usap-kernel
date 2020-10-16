cmd_drivers/md/dm-crypt.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/md/dm-crypt.ko drivers/md/dm-crypt.o drivers/md/dm-crypt.mod.o;  true
