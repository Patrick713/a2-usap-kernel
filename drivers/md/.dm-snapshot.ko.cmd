cmd_drivers/md/dm-snapshot.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/md/dm-snapshot.ko drivers/md/dm-snapshot.o drivers/md/dm-snapshot.mod.o;  true