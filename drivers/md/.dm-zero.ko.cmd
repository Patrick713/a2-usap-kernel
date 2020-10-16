cmd_drivers/md/dm-zero.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/md/dm-zero.ko drivers/md/dm-zero.o drivers/md/dm-zero.mod.o;  true
