cmd_drivers/md/dm-thin-pool.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/md/dm-thin-pool.ko drivers/md/dm-thin-pool.o drivers/md/dm-thin-pool.mod.o;  true