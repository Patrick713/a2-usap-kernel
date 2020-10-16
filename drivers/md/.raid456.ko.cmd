cmd_drivers/md/raid456.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/md/raid456.ko drivers/md/raid456.o drivers/md/raid456.mod.o;  true
