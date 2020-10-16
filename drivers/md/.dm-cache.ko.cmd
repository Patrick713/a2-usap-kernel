cmd_drivers/md/dm-cache.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/md/dm-cache.ko drivers/md/dm-cache.o drivers/md/dm-cache.mod.o;  true
