cmd_drivers/md/linear.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/md/linear.ko drivers/md/linear.o drivers/md/linear.mod.o;  true
