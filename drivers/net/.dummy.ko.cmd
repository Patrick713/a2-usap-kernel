cmd_drivers/net/dummy.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/net/dummy.ko drivers/net/dummy.o drivers/net/dummy.mod.o;  true
